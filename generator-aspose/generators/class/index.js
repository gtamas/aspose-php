const Base = require('../../base');
const _ = require('lodash');

module.exports = class extends Base {
    constructor(args, opts) {
        super(args, opts);
    }

    async prompting() {
        this.answers = await this.prompt([
            ...this._getBasePrompts(),
            {
                type: 'confirm',
                name: 'methods',
                message: 'Do you wish to add methods',
                default: false,
            },
        ]);

        if (this.answers.methods) {
            return this._addMethods();
        }
    }

    writing() {
        const className = this.answers.className;
        const itemClassName = this.answers.itemClassName;
        const kebabName = _.kebabCase(className);
        const phpName =
            className.charAt(0) == 'I' ? className.substr(1) : className;
        const kebabPhpName = _.kebabCase(phpName);
        const capName = phpName.toUpperCase();
        this.phpName = phpName;

        this.fs.copyTpl(
            this.templatePath('template.h'),
            this.destinationPath(`include/${kebabPhpName}.h`),
            {
                kebabName,
                className,
                capName,
                phpName,
                ns: this.answers.namespace,
                methods: this.answers.methods,
            }
        );
        this.fs.copyTpl(
            this.templatePath('template.cpp'),
            this.destinationPath(`src/${kebabPhpName}.cpp`),
            {
                kebabPhpName,
                phpName,
                ns: this.answers.namespace,
                methods: this.answers.methods,
            }
        );
    }

    end() {
        const phpNameSpace = `AsposePhp\\\\${this.answers.namespace
            .split('::')
            .slice(1)
            .join('\\\\')}\\\\${this.phpName}`;
        const camelName = _.camelCase(this.phpName);

        this._log(`#include "../include/${_.kebabCase(this.phpName)}.h"`);
        this._log(`// ${this.phpName}`);
        this._log(
            `Php::Class<AsposePhp::${this.phpName}> ${camelName}("${phpNameSpace}");`
        );

        if (this.answers.methods) {
            for (let method of this.answers.methods) {
                this._log(
                    `${camelName}.method<&AsposePhp::${this.phpName}::${method.methodName}>("${method.methodName}", Php::Public, {});`
                );
            }
        }

        this._log(`extension.add(std::move(${camelName}));`);

        this._clipboard();

    }
};

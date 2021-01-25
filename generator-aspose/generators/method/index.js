const Base = require('../../base');
const _ = require('lodash');

module.exports = class extends Base {
    constructor(args, opts) {
        super(args, opts);
    }

    async prompting() {
        const prompts = [
            {
                type: 'list',
                choices: [
                    {
                        name: 'Empty method',
                        value: 'empty',
                    },
                    {
                        name:
                            'A method that calls its super counterpart.',
                        value: 'parent',
                    },
                    {
                        name:
                            'A method that calls a method of the same name on the Aspose object',
                        value: 'aspose',
                    },
                    {
                        name: 'A method that returns an Aspose object',
                        value: 'object',
                    },
                    {
                        name:
                            'A method that returns an array of Aspose objects',
                        value: 'array',
                    },
                ],
                name: 'type',
                message: 'The type of the method you wanna generate',
                default: 'empty',
                store: true,
            },
            {
                type: 'input',
                name: 'methodName',
                message: 'The name of the exported method',
                store: true,
            },
            {
                type: 'confirm',
                name: 'returnValue',
                message: 'Does this method return a value?',
                default: true,
                store: true,
                when: (answers) => answers.type === 'aspose'
            },
            {
                type: 'input',
                name: 'className',
                message:
                    'The name of exported class this method belongs to',
                store: true,
            },            
            {
                type: 'confirm',
                name: 'wrapper',
                message: 'Should object wrapper be used?',
                store: true,
                default: true,
                when: (answers) => answers.type === 'object'
            },
            {
                type: 'input',
                name: 'parentName',
                message: 'The name of the parent class',
                store: true,
                when: (answers) => answers.type === 'parent'
            },
            {
                type: 'input',
                name: 'callName',
                message:
                    'The name of method to be called on the Apose class producing results',
                store: true,
                when: (answers) => answers.type === 'object' || answers.type === 'array'
            },
            {
                type: 'input',
                name: 'className',
                message: 'The name of Aspose class producing the result',
                store: true,
                when: (answers) => answers.type === 'object' || answers.type === 'array'
            },
            {
                type: 'input',
                name: 'itemClassName',
                message: 'Name of the resulting Aspose class',
                store: true,
                when: (answers) => answers.type === 'object' || answers.type === 'array'
            },
            {
                type: 'input',
                name: 'namespace',
                message: 'Namespace of the resulting Aspose class',
                default: 'Aspose::Slides',
                store: true,
                when: (answers) => answers.type === 'object' || answers.type === 'array'
            },
        ];


        this.answers = await this.prompt(prompts);
    }

    end() {
        const className = this.answers.className;
        const itemClassName = this.answers.itemClassName || className;
        const phpName =
            itemClassName.charAt(0) == 'I'
                ? itemClassName.substr(1)
                : itemClassName;

        const itemHeader =_.kebabCase(phpName);

        const phpClassName =
            className.charAt(0) == 'I' ? className.substr(1) : className;

        const camelName = _.camelCase(phpClassName);

        let phpNameSpace;

        if (this.answers.namespace) {
            phpNameSpace = `AsposePhp\\\\${this.answers.namespace
                .split('::')
                .slice(1)
                .join('\\\\')}\\\\${phpName}`;
        }

        this._log(`${this.answers.returnValue || this.type === 'object' ? 'Php::Value' : 'void'} ${this.answers.methodName}();`);

        switch (this.answers.type) {
            case 'empty':
                this
                    ._log(`Php::Value ${phpClassName}::${this.answers.methodName}() {
                    return nullptr;
                }`);
                break;
            case 'parent':
                this
                    ._log(`Php::Value ${phpClassName}::${this.answers.methodName}() {
                        return ${this.answers.parentName}::${this.answers.methodName}();
                    }`);
                break;
            case 'aspose':
                this
                    ._log(`${this.answers.returnValue ? 'Php::Value' : 'void'} ${phpClassName}::${this.answers.methodName}() {
                        ${this.answers.returnValue ? 'return' : ''} _asposeObj->${this.answers.methodName}();
                    }`);
                break;
            case 'object':
                this._log(`#include "../include/${itemHeader}.h"`);
                if (this.answers.wrapper) {
                    this
                        ._log(`Php::Value ${phpClassName}::${this.answers.methodName}() {
                    return Php::Object("${phpNameSpace}", wrapObject<${itemClassName}, AsposePhp::${phpName}, &${className}::${this.answers.callName}>());
                }`);
                } else {
                    this._log(`Php::Value ${phpClassName}::${
                        this.answers.methodName
                    }() {
                        SharedPtr<${itemClassName}> items = ${
                        this.answers.wrapper ? '_asposeObj' : camelName
                    }->${this.answers.callName}();
                    ${phpName} * phpValue = new ${phpName}(items); 
                    return Php::Object("${phpNameSpace}", phpValue);
                        }`);
                }
                break;
        }

        this._log(
            `${camelName}.method<&AsposePhp::${phpClassName}::${this.answers.methodName}>("${this.answers.methodName}", Php::Public, {});`
        );

        this._clipboard();
    }
};

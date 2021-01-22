const Generator = require('yeoman-generator');
const clipboardy = require('clipboardy');

module.exports = class Base extends Generator {
    _msg = [];
    _getBasePrompts() {
        return [
            {
                type: 'input',
                name: 'className',
                message: 'Name of the Apsose class',
                store: true,
            },
            {
                type: 'input',
                name: 'namespace',
                message: 'Namespace of the Apsose class',
                default: 'Aspose::Slides',
                store: true,
            },
        ];
    }

    _addMethods() {
        if (this.answers.methods) {
            const methodPrompts = [
                {
                    type: 'input',
                    name: 'methodName',
                    message: 'Name of the method',
                },
                {
                    type: 'confirm',
                    name: 'repeat',
                    message: 'Do you want to add more methods?',
                    default: true,
                },
            ];

            this.answers.methods = [];

            const loop = async (relevantPrompts) => {
                const props = await this.prompt(relevantPrompts);
                this.answers.methods.push(props);

                if (props.repeat) {
                    return loop(methodPrompts);
                }
                return this.prompt([]);
            };

            return loop([...methodPrompts]);
        }
    }

    _clipboard() {
        clipboardy.writeSync(this._msg.join('\n'));
        this.log.ok('Result have been copidied to the clipboard!');
    }

    _log(msg) {
        this._msg.push(msg);
        this.log(msg);
        this.log('');
    }
};
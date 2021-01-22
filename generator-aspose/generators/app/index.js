const Base = require('../../base');
const _ = require('lodash');

module.exports = class extends Base {
    constructor(args, opts) {
        super(args, opts);
    }

    end() {
        this.log('Please use the subcommands instead');
        this.log(this.help());
    }
};

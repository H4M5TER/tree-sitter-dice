module.exports = require('node-gyp-build')(__dirname)
module.exports.nodeTypeInfo = require('./src/node-types.json')
// can't get node through field without nodeTypeInfo

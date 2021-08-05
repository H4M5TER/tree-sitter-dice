binding = require('node-gyp-build')(__dirname)
module.exports = binding
try {
  module.exports.nodeTypeInfo = require("../../src/node-types.json");
} catch (_) { }

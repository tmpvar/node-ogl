var types   = ['GLenum','GLboolean','GLbitfield','GLvoid','GLbyte','GLshort',
             'GLint','GLubyte','GLushort','GLuint','GLsizei','GLfloat',
             'GLclampf','GLdouble','GLclampd'],
    nodeogl = require("./node-ogl");

for (var i=0; i<types.length; i++)
{
  (function(i) {
    exports[types[i]] = function(value) {
      var ret = {};

      Object.defineProperty(ret, "type", {
        value        : types[i],
        configurable : false,
        enumerable   : true
      });

      Object.defineProperty(ret, "reference", {
        value        : true,
        configurable : false,
        enumerable   : true
      });
      ret.value = value;
      return ret;
    }
  })(i);
}

// TODO: filtering and possibly better namespacing
var sys = require("sys");
for (var key in nodeogl) {

  if (typeof nodeogl[key] === 'function') {
    (function(key) {
      exports[key] = function() { 
        nodeogl[key].apply(this, arguments);
        var error = 0;//nodeogl["glGetError"]();
        if (error > 0) {
          sys.puts("calling: " + key);
          sys.puts("error: " + error);
          process.exit();
        }
      };
    })(key);
  } else {
    exports[key] = nodeogl[key];
  }
};


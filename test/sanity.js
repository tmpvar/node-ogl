var gl   = require("../lib/node-ogl").gl,
    glut = require("../lib/node-ogl").glut,
    sys  = require("sys");
sys.puts("Module included.");

if (!gl) {
  throw new Error("Environment Is not sane, lib.gl does not exist");
}

sys.puts("GL_POLYGON_STIPPLE: " + gl.GL_POLYGON_STIPPLE);

sys.puts(sys.inspect(require("../lib/node-ogl")));

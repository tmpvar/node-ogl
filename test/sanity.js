var gl = require("../lib/node-ogl").gl, sys = require("sys");
sys.puts("Module included.");

if (!gl) {
  throw new Error("Environment Is not sane, lib.gl does not exist");
}

sys.puts("GL_POLYGON_STIPPLE: " + gl.GL_POLYGON_STIPPLE);

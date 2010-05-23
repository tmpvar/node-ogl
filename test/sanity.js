var gl   = require("../lib/node-ogl"),
    sys  = require("sys");
sys.puts("Module included.");

if (!gl) {
  throw new Error("Environment Is not sane, lib.gl does not exist");
}


// spawn a window
sys.puts("Window result: " + gl.OpenWindow(400,400,0,0,0,0,0,0,0));
setTimeout(function() {

sys.puts("done");
}, 1000);

sys.puts("enabling GL_LINE_SMOOTH (" + gl.GL_LINE_SMOOTH + ")");
sys.puts("ret: " + gl.glEnable(gl.GL_LINE_SMOOTH));
var stored = gl.glIsEnabled(gl.GL_LINE_SMOOTH);
sys.puts("Is GL_LINE_SMOOTH enabled? " + stored);
sys.puts("Error: " + gl.glGetError());


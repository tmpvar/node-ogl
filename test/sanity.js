var gl     = require("../lib/OpenGL"),
    sys    = require("sys"),
    width  = 400,
    height = 400;
    
sys.puts("Module included.");

if (!gl) {
  throw new Error("Environment Is not sane, lib.gl does not exist");
}

sys.puts("enabling GL_LINE_SMOOTH (" + gl.GL_LINE_SMOOTH + ")");
sys.puts("ret: " + gl.glEnable(gl.GL_LINE_SMOOTH));
var stored = gl.glIsEnabled(gl.GL_LINE_SMOOTH);
sys.puts("Is GL_LINE_SMOOTH enabled? " + stored);
sys.puts("Error: " + gl.glGetError());

// Pass by reference testing

function add10(ref) {
  ref.value += 10;
}

var delta = gl.GLfloat(0.11);

sys.puts(sys.inspect(delta, true));
add10(delta);
sys.puts("delta is now: " + delta.value);

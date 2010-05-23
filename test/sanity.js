var gl     = require("../lib/node-ogl"),
    sys    = require("sys"),
    width  = 400,
    height = 400;
    
sys.puts("Module included.");

if (!gl) {
  throw new Error("Environment Is not sane, lib.gl does not exist");
}

// spawn a window
sys.puts("Window result: " + gl.OpenWindow(width,height,0,0,0,0,0,0,0));

gl.glShadeModel(gl.GL_SMOOTH);
gl.glClearColor(1.0, 1.0, 1.0, 1.0);
gl.glClearDepth(1.0);							// Depth Buffer Setup
gl.glEnable(gl.GL_DEPTH_TEST);						// Enables Depth Testing
gl.glDepthFunc(gl.GL_LEQUAL);	
gl.glViewport(0,0,width,height);
gl.glHint(gl.GL_PERSPECTIVE_CORRECTION_HINT, gl.GL_NICEST);
gl.glMatrixMode(gl.GL_PROJECTION);
gl.glLoadIdentity();
gl.gluPerspective(45.0, width / height, 0.1, 100.0);
gl.glMatrixMode(gl.GL_MODELVIEW);
gl.glFlush();

setInterval(function() {

	gl.glClear(gl.GL_COLOR_BUFFER_BIT | gl.GL_DEPTH_BUFFER_BIT);
	gl.glLoadIdentity();

  gl.glTranslatef(-1.5,0.0,-6.0);

  gl.glBegin(gl.GL_TRIANGLES);						// Drawing Using Triangles
    gl.glColor3f(1.0,0.0,0.0);
		gl.glVertex3f( 0.0, 1.0, 0.0);				// Top
    gl.glColor3f(0.0,1.0,0.0);
		gl.glVertex3f(-1.0,-1.0, 0.0);				// Bottom Left
    gl.glColor3f(0.0,0.0,1.0);
		gl.glVertex3f( 1.0,-1.0, 0.0);				// Bottom Right
	gl.glEnd();

  sys.puts("Error: " + gl.glGetError());

}, 10);

sys.puts("enabling GL_LINE_SMOOTH (" + gl.GL_LINE_SMOOTH + ")");
sys.puts("ret: " + gl.glEnable(gl.GL_LINE_SMOOTH));
var stored = gl.glIsEnabled(gl.GL_LINE_SMOOTH);
sys.puts("Is GL_LINE_SMOOTH enabled? " + stored);
sys.puts("Error: " + gl.glGetError());


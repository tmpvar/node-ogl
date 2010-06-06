var gl     = require(__dirname + "/../../lib/OpenGL"),
    sys    = require("sys"),
    width  = 400,
    height = 400;

gl.OpenWindow(width,height,0,0,0,0,0,0,0);

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

setTimeout(function render() {

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

  gl.glTranslatef(3.0,0.0,0.0);
	gl.glColor3f(0.5,0.5,1.0);				// Set The Color To Blue One Time Only
	gl.glBegin(gl.GL_QUADS);					// Start Drawing Quads
		gl.glVertex3f(-1.0, 1.0, 0.0);			// Left And Up 1 Unit (Top Left)
		gl.glVertex3f( 1.0, 1.0, 0.0);			// Right And Up 1 Unit (Top Right)
		gl.glVertex3f( 1.0,-1.0, 0.0);			// Right And Down One Unit (Bottom Right)
		gl.glVertex3f(-1.0,-1.0, 0.0);			// Left And Down One Unit (Bottom Left)
	gl.glEnd();

  gl.SwapBuffers();
  setTimeout(render, 10);  
}, 0);



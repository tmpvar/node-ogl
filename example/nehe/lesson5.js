var gl     = require(__dirname + "/../../lib/node-ogl"),
    sys    = require("sys"),
    width  = 1280,
    height = 1024;

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

var rpyr = 0.0,
    rcube = 0.0;

setTimeout(function render() {
  gl.glClear(gl.GL_COLOR_BUFFER_BIT | gl.GL_DEPTH_BUFFER_BIT);

  gl.glLoadIdentity();
  gl.glTranslatef(-1.5,0.0,-6.0);
  gl.glRotatef(rpyr,0.0,1.0,0.0);
  gl.glBegin(gl.GL_TRIANGLES);
    //front
    gl.glColor3f(1.0,0.0,0.0);			// Red
    gl.glVertex3f( 0.0, 1.0, 0.0);			// Top Of Triangle
    gl.glColor3f(0.0,1.0,0.0);			// Green
    gl.glVertex3f(-1.0,-1.0, 1.0);			// Left Of Triangle
    gl.glColor3f(0.0,0.0,1.0);			// Blue
    gl.glVertex3f( 1.0,-1.0, 1.0);			// Right Of Triangle

    //right
    gl.glColor3f(1.0,0.0,0.0);			// Red
    gl.glVertex3f( 0.0, 1.0, 0.0);			// Top Of Triangle
    gl.glColor3f(0.0,0.0,1.0);			// blue
    gl.glVertex3f( 1.0,-1.0, 1.0);			// Left Of Triangle
    gl.glColor3f(0.0,1.0,0.0);			// green
    gl.glVertex3f( 1.0,-1.0,-1.0);			// Right Of Triangle

    //back
    gl.glColor3f(1.0,0.0,0.0);			// Red
    gl.glVertex3f( 0.0, 1.0, 0.0);			// Top Of Triangle
    gl.glColor3f(0.0,1.0,0.0);			// Green
    gl.glVertex3f( 1.0,-1.0,-1.0);			// Left Of Triangle
    gl.glColor3f(0.0,0.0,1.0);			// Blue
    gl.glVertex3f(-1.0,-1.0,-1.0);			// Right Of Triangle

    //left
    gl.glColor3f(1.0,0.0,0.0);			// Red
    gl.glVertex3f( 0.0, 1.0, 0.0);			// Top Of Triangle
    gl.glColor3f(0.0,0.0,1.0);			// Green
    gl.glVertex3f(-1.0,-1.0,-1.0);			// Left Of Triangle
    gl.glColor3f(0.0,1.0,0.0);			// Blue
    gl.glVertex3f(-1.0,-1.0, 1.0);			// Right Of Triangle
  gl.glEnd();

  gl.glLoadIdentity();
  gl.glTranslatef(1.5,0.0,-6.0);
  gl.glRotatef(rcube,1.0,0.0,0.0);
  gl.glBegin(gl.GL_QUADS);
    gl.glColor3f(0.0,1.0,0.0);       	// Set The Color To Green
    gl.glVertex3f( 1.0, 1.0,-1.0);      	// Top Right Of The Quad (Top)
    gl.glVertex3f(-1.0, 1.0,-1.0);      	// Top Left Of The Quad (Top)
    gl.glVertex3f(-1.0, 1.0, 1.0);       // Bottom Left Of The Quad (Top)
    gl.glVertex3f( 1.0, 1.0, 1.0);       // Bottom Right Of The Quad (Top)

    gl.glColor3f(1.0,0.5,0.0);       	// Set The Color To Orange
    gl.glVertex3f( 1.0,-1.0, 1.0);      	// Top Right Of The Quad (Bottom)
    gl.glVertex3f(-1.0,-1.0, 1.0);      	// Top Left Of The Quad (Bottom)
    gl.glVertex3f(-1.0,-1.0,-1.0);       // Bottom Left Of The Quad (Bottom)
    gl.glVertex3f( 1.0,-1.0,-1.0);      	// Bottom Right Of The Quad (Bottom)

    gl.glColor3f(1.0,0.0,0.0);       	// Set The Color To Red
    gl.glVertex3f( 1.0, 1.0, 1.0);      	// Top Right Of The Quad (Front)
    gl.glVertex3f(-1.0, 1.0, 1.0);      	// Top Left Of The Quad (Front)
    gl.glVertex3f(-1.0,-1.0, 1.0);      	// Bottom Left Of The Quad (Front)
    gl.glVertex3f( 1.0,-1.0, 1.0);       // Bottom Right Of The Quad (Front)

    gl.glColor3f(1.0,1.0,0.0);       	// Set The Color To Yellow
    gl.glVertex3f( 1.0,-1.0,-1.0);       // Bottom Left Of The Quad (Back)
    gl.glVertex3f(-1.0,-1.0,-1.0);       // Bottom Right Of The Quad (Back)
    gl.glVertex3f(-1.0, 1.0,-1.0);       // Top Right Of The Quad (Back)
    gl.glVertex3f( 1.0, 1.0,-1.0);      	// Top Left Of The Quad (Back)

    gl.glColor3f(0.0,0.0,1.0);       	// Set The Color To Blue
    gl.glVertex3f(-1.0, 1.0, 1.0);      	// Top Right Of The Quad (Left)
    gl.glVertex3f(-1.0, 1.0,-1.0);      	// Top Left Of The Quad (Left)
    gl.glVertex3f(-1.0,-1.0,-1.0);       // Bottom Left Of The Quad (Left)
    gl.glVertex3f(-1.0,-1.0, 1.0);      	// Bottom Right Of The Quad (Left)

    gl.glColor3f(1.0,0.0,1.0);	// Set The Color To Violet
    gl.glVertex3f( 1.0, 1.0,-1.0);       // Top Right Of The Quad (Right)
    gl.glVertex3f( 1.0, 1.0, 1.0);      	// Top Left Of The Quad (Right)
    gl.glVertex3f( 1.0,-1.0, 1.0);      	// Bottom Left Of The Quad (Right)
    gl.glVertex3f( 1.0,-1.0,-1.0);      	// Bottom Right Of The Quad (Right)
  gl.glEnd();

  gl.SwapBuffers();
  rpyr+=0.2;
  rcube-=0.15;
  setTimeout(render, 10);
}, 0);



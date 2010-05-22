#!/usr/bin/env node

/*
 * triangle.c -- A simple example of OpenGL and GLUT.
 */

require(__dirname + "/../../lib/glut");

void displayCB(void)		/* function called whenever redisplay needed */
{
  glClear(GL_COLOR_BUFFER_BIT);		/* clear the display */
  glColor3f(1.0, 1.0, 1.0);		/* set current color to white */
  glBegin(GL_POLYGON);			/* draw filled triangle */
  glVertex2i(200,125);			/* specify each vertex of triangle */
  glVertex2i(100,375);
  glVertex2i(300,375);
  glEnd();				/* OpenGL draws the filled triangle */
  glFlush();				/* Complete any pending operations */
}

void keyCB(unsigned char key, int x, int y)	/* called on key press */
{
  if( key == 'q' ) exit(0);
}


int main(int argc, char *argv[])
{
  int win;

  glutInit(&argc, argv);		/* initialize GLUT system */

  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowSize(400,500);		/* width=400pixels height=500pixels */
  win = glutCreateWindow("Triangle");	/* create window */

  /* from this point on the current window is win */

  glClearColor(0.0,0.0,0.0,0.0);	/* set background to black */
  gluOrtho2D(0,400,0,500);		/* how object is mapped to window */
  glutDisplayFunc(displayCB);		/* set window's display callback */
  glutKeyboardFunc(keyCB);		/* set window's key callback */

  glutMainLoop();			/* start processing events... */

  /* execution never reaches this point */

  retu

var gl     = require(__dirname + "/../../lib/node-ogl"),
    sys    = require("sys"),
    fs     = require("fs"),
    Buffer = require('buffer').Buffer,
    width  = 640,
    height = 480,
    xrot   = 0,
    yrot   = 0,
    zrot   = 0,
    file   = __dirname + "/lesson6/NeHe.bmp",
    textureBuffer,
    image = { width: 256, height: 256, size: 256*265*3, texture: -1};

gl.OpenWindow(width,height,0,0,0,0,0,0,0);

textureBuffer = fs.readFileSync(file, "binary");
image.width  = (textureBuffer.charCodeAt(19)*256) + textureBuffer.charCodeAt(20);
image.height = (textureBuffer.charCodeAt(21)*256) + textureBuffer.charCodeAt(22);
image.buffer = new Buffer(image.size);
image.buffer.write(textureBuffer.slice(24,textureBuffer.length));

for (var i=0;i<image.size;i+=3) { // reverse all of the colors. (bgr -> rgb)
  var temp = image.buffer[i];
  image.buffer[i] = image.buffer[i+2];
  image.buffer[i+2] = temp;
}

var asdf;
sys.puts("ret'd: " + gl.glGenTextures(1, asdf));// Create Texture	
sys.puts("ret'd: " + gl.glGenTextures(1, image.texture));

sys.puts(sys.inspect(image.texture));

gl.glBindTexture(gl.GL_TEXTURE_2D, image.texture[0]);   // 2d texture (x and y size)

// scale linearly when image bigger than texture
gl.glTexParameteri(gl.GL_TEXTURE_2D,gl.GL_TEXTURE_MAG_FILTER,gl.GL_LINEAR);
// scale linearly when image smalled than texture 
gl.glTexParameteri(gl.GL_TEXTURE_2D,gl.GL_TEXTURE_MIN_FILTER,gl.GL_LINEAR);

gl.glTexImage2D(gl.GL_TEXTURE_2D,         // 2d texture
                   0,                     // level of detail 0 (normal)
                   3,                     // 3 components (red green blue)
                   image.width,           // x size from image
                   image.height,          // y size from image
                   0,                     // border 0 (normal)
                   gl.GL_RGB,             // rgb color data
                   gl.GL_UNSIGNED_BYTE,   // unsigned byte data
                   image.buffer);         // the actual data




gl.glShadeModel(gl.GL_SMOOTH);
gl.glClearColor(0.0, 0.0, 0.0, 0.0);
gl.glClearDepth(1.0);							        // Depth Buffer Setup
gl.glEnable(gl.GL_TEXTURE_2D);			          // Enable Texture Mapping
gl.glEnable(gl.GL_DEPTH_TEST);						// Enables Depth Testing
gl.glDepthFunc(gl.GL_LEQUAL);
gl.glViewport(0,0,width,height);
gl.glHint(gl.GL_PERSPECTIVE_CORRECTION_HINT, gl.GL_NICEST);
gl.glMatrixMode(gl.GL_PROJECTION);
gl.glLoadIdentity();
gl.gluPerspective(45.0, width / height, 0.1, 100.0);
gl.glMatrixMode(gl.GL_MODELVIEW);
//gl.glFlush();


//gl.glFlush();
setInterval(function() {
  gl.glClear(gl.GL_COLOR_BUFFER_BIT | gl.GL_DEPTH_BUFFER_BIT);		// Clear The Screen And The Depth Buffer
  gl.glLoadIdentity();				// Reset The View

  gl.glTranslatef(0.0,0.0,-5.0);              // move 5 units into the screen.
  
  gl.glRotatef(xrot,1.0,0.0,0.0);		// Rotate On The X Axis
  gl.glRotatef(yrot,0.0,1.0,0.0);		// Rotate On The Y Axis
  gl.glRotatef(zrot,0.0,0.0,1.0);		// Rotate On The Z Axis

  gl.glBindTexture(gl.GL_TEXTURE_2D, image.texture[0]);   // choose the texture to use.

  gl.glBegin(gl.GL_QUADS);		                // begin drawing a cube
  
  // Front Face (note that the texture's corners have to match the quad's corners)
  gl.glTexCoord2f(0.0, 0.0); gl.glVertex3f(-1.0, -1.0,  1.0);	// Bottom Left Of The Texture and Quad
  gl.glTexCoord2f(1.0, 0.0); gl.glVertex3f( 1.0, -1.0,  1.0);	// Bottom Right Of The Texture and Quad
  gl.glTexCoord2f(1.0, 1.0); gl.glVertex3f( 1.0,  1.0,  1.0);	// Top Right Of The Texture and Quad
  gl.glTexCoord2f(0.0, 1.0); gl.glVertex3f(-1.0,  1.0,  1.0);	// Top Left Of The Texture and Quad
  
  // Back Face
  gl.glTexCoord2f(1.0, 0.0); gl.glVertex3f(-1.0, -1.0, -1.0);	// Bottom Right Of The Texture and Quad
  gl.glTexCoord2f(1.0, 1.0); gl.glVertex3f(-1.0,  1.0, -1.0);	// Top Right Of The Texture and Quad
  gl.glTexCoord2f(0.0, 1.0); gl.glVertex3f( 1.0,  1.0, -1.0);	// Top Left Of The Texture and Quad
  gl.glTexCoord2f(0.0, 0.0); gl.glVertex3f( 1.0, -1.0, -1.0);	// Bottom Left Of The Texture and Quad

  // Top Face
  gl.glTexCoord2f(0.0, 1.0); gl.glVertex3f(-1.0,  1.0, -1.0);	// Top Left Of The Texture and Quad
  gl.glTexCoord2f(0.0, 0.0); gl.glVertex3f(-1.0,  1.0,  1.0);	// Bottom Left Of The Texture and Quad
  gl.glTexCoord2f(1.0, 0.0); gl.glVertex3f( 1.0,  1.0,  1.0);	// Bottom Right Of The Texture and Quad
  gl.glTexCoord2f(1.0, 1.0); gl.glVertex3f( 1.0,  1.0, -1.0);	// Top Right Of The Texture and Quad
  
  // Bottom Face       
  gl.glTexCoord2f(1.0, 1.0); gl.glVertex3f(-1.0, -1.0, -1.0);	// Top Right Of The Texture and Quad
  gl.glTexCoord2f(0.0, 1.0); gl.glVertex3f( 1.0, -1.0, -1.0);	// Top Left Of The Texture and Quad
  gl.glTexCoord2f(0.0, 0.0); gl.glVertex3f( 1.0, -1.0,  1.0);	// Bottom Left Of The Texture and Quad
  gl.glTexCoord2f(1.0, 0.0); gl.glVertex3f(-1.0, -1.0,  1.0);	// Bottom Right Of The Texture and Quad
  
  // Right face
  gl.glTexCoord2f(1.0, 0.0); gl.glVertex3f( 1.0, -1.0, -1.0);	// Bottom Right Of The Texture and Quad
  gl.glTexCoord2f(1.0, 1.0); gl.glVertex3f( 1.0,  1.0, -1.0);	// Top Right Of The Texture and Quad
  gl.glTexCoord2f(0.0, 1.0); gl.glVertex3f( 1.0,  1.0,  1.0);	// Top Left Of The Texture and Quad
  gl.glTexCoord2f(0.0, 0.0); gl.glVertex3f( 1.0, -1.0,  1.0);	// Bottom Left Of The Texture and Quad
  
  // Left Face
  gl.glTexCoord2f(0.0, 0.0); gl.glVertex3f(-1.0, -1.0, -1.0);	// Bottom Left Of The Texture and Quad
  gl.glTexCoord2f(1.0, 0.0); gl.glVertex3f(-1.0, -1.0,  1.0);	// Bottom Right Of The Texture and Quad
  gl.glTexCoord2f(1.0, 1.0); gl.glVertex3f(-1.0,  1.0,  1.0);	// Top Right Of The Texture and Quad
  gl.glTexCoord2f(0.0, 1.0); gl.glVertex3f(-1.0,  1.0, -1.0);	// Top Left Of The Texture and Quad
  
  gl.glEnd();                                    // done with the polygon.
  gl.SwapBuffers();
  xrot+=15.0;		                // X Axis Rotation	
  yrot+=15.0;		                // Y Axis Rotation
  zrot+=15.0;		                // Z Axis Rotation
}, 30);

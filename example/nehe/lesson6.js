var gl     = require(__dirname + "/../../lib/node-ogl"),
    sys    = require("sys"),
    fs     = require("fs"),
    Buffer = require('buffer').Buffer,
    width  = 1280,
    height = 1024,
    xrot   = 0,
    yrot   = 0,
    zrot   = 0,
    file   = __dirname + "/lesson6/NeHe.bmp",
    textureBuffer,
    image = {};

gl.OpenWindow(width,height,0,0,0,0,0,0,0);

textureBuffer = fs.readFileSync(file);

image = {buffer: textureBuffer, width: 0, height: 0, texture: [0]};

// Create Texture	
gl.glGenTextures(1, image.texture[0]);
gl.glBindTexture(GL_TEXTURE_2D, texture[0]);   // 2d texture (x and y size)

// scale linearly when image bigger than texture
glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
// scale linearly when image smalled than texture 
glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);

gl.glTexImage2D(gl.GL_TEXTURE_2D,         // 2d texture
                   0,                     // level of detail 0 (normal)
                   3,                     // 3 components (red green blue)
                   width,                 // x size from image
                   height,                // y size from image
                   0,                     // border 0 (normal)
                   gl.GL_RGB,             // rgb color data
                   gl.GL_UNSIGNED_BYTE,   // unsigned byte data
                   buffer);               // the actual data




gl.glShadeModel(gl.GL_SMOOTH);
gl.glClearColor(1.0, 1.0, 1.0, 1.0);
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




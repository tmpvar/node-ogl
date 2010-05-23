##########################################################################
# Makefile for GLFW test programs on Windows using Apple GCC.
#-------------------------------------------------------------------------
# To compile the test files using this makefile, run:
#  make -f Makefile.carbon
##########################################################################

# Compiler settings
CC     = gcc
CFLAGS = -I../include -m32

# Linker settings
LIB = ../lib/carbon/libglfw.a
HEADER = ../include/GL/glfw.h
LFLAGS = $(LIB) -framework AGL -framework OpenGL -framework Carbon -m32

# Default: Build all tests
all: Triangle.app/Contents/MacOS/Triangle \
     ListModes.app/Contents/MacOS/ListModes \
     MTHello.app/Contents/MacOS/MTHello \
     Pong3D.app/Contents/MacOS/Pong3D \
     MTBench.app/Contents/MacOS/MTBench \
     Particles.app/Contents/MacOS/Particles \
     SplitView.app/Contents/MacOS/SplitView \
     Mipmaps.app/Contents/MacOS/Mipmaps \
     JoyTest.app/Contents/MacOS/JoyTest \
     Gears.app/Contents/MacOS/Gears \
     Boing.app/Contents/MacOS/Boing \
     Wave.app/Contents/MacOS/Wave

Triangle.app/Contents/MacOS/Triangle: triangle.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Triangle
	$(CC) $(CFLAGS) triangle.c $(LFLAGS) -o Triangle.app/Contents/MacOS/Triangle

ListModes.app/Contents/MacOS/ListModes: listmodes.c $(LIB) $(HEADER)
	/bin/sh bundle.sh ListModes
	$(CC) $(CFLAGS) listmodes.c $(LFLAGS) -o ListModes.app/Contents/MacOS/ListModes

MTHello.app/Contents/MacOS/MTHello: mthello.c $(LIB) $(HEADER)
	/bin/sh bundle.sh MTHello
	$(CC) $(CFLAGS) mthello.c $(LFLAGS) -o MTHello.app/Contents/MacOS/MTHello

Pong3D.app/Contents/MacOS/Pong3D: pong3d.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Pong3D
	cp pong3d_*.tga Pong3D.app/Contents/Resources/
	$(CC) $(CFLAGS) pong3d.c $(LFLAGS) -o Pong3D.app/Contents/MacOS/Pong3D

MTBench.app/Contents/MacOS/MTBench: mtbench.c $(LIB) $(HEADER)
	/bin/sh bundle.sh MTBench
	$(CC) $(CFLAGS) mtbench.c $(LFLAGS) -o MTBench.app/Contents/MacOS/MTBench

Particles.app/Contents/MacOS/Particles: particles.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Particles
	$(CC) $(CFLAGS) particles.c $(LFLAGS) -o Particles.app/Contents/MacOS/Particles

SplitView.app/Contents/MacOS/SplitView: splitview.c $(LIB) $(HEADER)
	/bin/sh bundle.sh SplitView
	$(CC) $(CFLAGS) splitview.c $(LFLAGS) -o SplitView.app/Contents/MacOS/SplitView

Mipmaps.app/Contents/MacOS/Mipmaps: mipmaps.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Mipmaps
	cp mipmaps.tga Mipmaps.app/Contents/Resources/
	$(CC) $(CFLAGS) mipmaps.c $(LFLAGS) -o Mipmaps.app/Contents/MacOS/Mipmaps

Gears.app/Contents/MacOS/Gears: gears.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Gears
	$(CC) $(CFLAGS) gears.c $(LFLAGS) -o Gears.app/Contents/MacOS/Gears

Boing.app/Contents/MacOS/Boing: boing.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Boing
	$(CC) $(CFLAGS) boing.c $(LFLAGS) -o Boing.app/Contents/MacOS/Boing

Wave.app/Contents/MacOS/Wave: wave.c $(LIB) $(HEADER)
	/bin/sh bundle.sh Wave
	$(CC) $(CFLAGS) wave.c $(LFLAGS) -o Wave.app/Contents/MacOS/Wave

clean:
	rm -rf JoyTest.app Triangle.app ListModes.app MTHello.app \
	       Pong3D.app MTBench.app Particles.app SplitView.app \
	       Mipmaps.app Gears.app Boing.app Wave.app


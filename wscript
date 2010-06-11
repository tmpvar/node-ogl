import Options, glob
from os.path import join, dirname, abspath, exists
from shutil import copy, rmtree
from os import unlink
import sys, os

srcdir = "."
blddir = "build"
VERSION = "0.0.1"

def set_options(opt):
  opt.tool_options("compiler_cxx")
  opt.tool_options("compiler_cc")

def configure(conf):
  conf.check_tool("compiler_cxx")
  conf.check_tool("compiler_cc")
  conf.check_tool("node_addon")

  #TODO: wrap with os checks
  #conf.check_cfg(package='gl', mandatory=1, args='--cflags --libs')
  #conf.check_cfg(package='glu', mandatory=1, args='--cflags --libs')
  #conf.check_cfg(package='xrandr', mandatory=1, args='--cflags --libs')

  conf.env.append_value("LIBPATH_GLFW", abspath("./build/default/lib/"))
  conf.env.append_value("STATICLIB_GLFW",["glfw"])
  conf.env.append_value("CPPPATH_GLFW", abspath("./build/default/include/"))  

  # TODO: add support for more platforms..
  buildpath = abspath("build/default")
  cmd = "cd \"deps/glfw\" && CFLAGS=-fPIC PREFIX=%s make cocoa"
  if os.system(cmd % (buildpath)) != 0:
    conf.fatal("Building glfw failed.")



def clean(ctx): 
  if exists("lib/node-ogl.node"): unlink("lib/node-ogl.node")
  if exists("build"): rmtree("build")

  # TODO: add support for more platforms..
  buildpath = abspath("build/default")
  cmd = "cd \"deps/glfw\" && PREFIX=%s make cocoa-clean"
  if os.system(cmd % (buildpath)) != 0:
    conf.fatal("Building glfw failed.")
  

def build(bld):
  if not exists('build/default/lib'):
    os.mkdir('build/default/lib/')
  if not exists('build/default/include'):
    os.mkdir('build/default/include/')
    os.mkdir('build/default/include/GL/')
  if not exists('build/default/include/GL/glfw.h'):
    copy('deps/glfw/include/GL/glfw.h','build/default/include/GL/glfw.h')
  if not exists('build/default/lib/libglfw.dylib'):
    copy('deps/glfw/lib/cocoa/libglfw.dylib','build/default/lib/libglfw.dylib')
  # build node-avro
  node_ogl = bld.new_task_gen("cxx", "shlib", "node_addon")
  node_ogl.source = bld.glob("src/*.cc")
  node_ogl.name = "node-ogl"
  node_ogl.target = "node-ogl"
  node_ogl.uselib = ["GL", "GLU", "GLFW"]
  node_ogl.linkflags = ['-framework OpenGL','-framework Cocoa']
  bld.add_post_fun(copynode)

def copynode(ctx):
  if exists('build/default/node-ogl.node'):
    copy('build/default/node-ogl.node','lib/node-ogl.node')

def test(tst):
  os.system("node test/sanity.js")

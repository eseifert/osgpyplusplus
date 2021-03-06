"""
osgGA module
Part of osgpyplusplus python bindings for OpenSceneGraph C++ library
https://github.com/JaneliaSciComp/osgpyplusplus

The 'GA' in osgGA stands for 'GUI Abstraction'; the osgGA namespace provides 
facilities to help developers write the glue to allow the osg to work with 
varying window systems.

As a cross-platform, window system-agnostic class library, the OpenSceneGraph 
has no direct ties to any given windowing environment. Viewers, however, must 
at some level interact with a window system - where Window system may refer to 
a windowing API, e.g. GLUT, Qt, FLTK, MFC, ...

There is much commonality in the implementation of Viewers for varying 
windowing environments. E.g. most Viewers will update a Camera position in 
response to a mouse event, and may request that a timer be started as a result 
of a model being 'spun'.

The purpose of the osgGA namespace is to centralise the common areas of this 
functionality. The viewer writer needs then only write a GUIEventAdapter, a 
GUIActionAdapter, and assemble a collection of GUIEventHandlers as appropriate 
for the viewer.

Events from the windowing environment are adpated, and then fed into the 
GUIEventHandlers. The GUIEventHandlers analyse and take action, and make 
requests of the windowing environemnt via the GUIActionAdapter. The viewer 
writer should then honour these requests, translating them into calls to the 
windowing API.
"""

# osgGA depends on upstream modules, so always load these
from . import osgDB

# delegate to binary module, created with pyplusplus and boost::python
from _osgGA import *

// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__convenience.pypp.hpp"

#include "__call_policies.pypp.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/list.hpp"

#include "wrap_osgviewer.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/_osgviewer_free_functions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/cameras.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/compositeviewer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/depthpartitionsettings.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/devices.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/eventhandlers.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/graphicswindow.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/graphicswindowembedded.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/graphicswindowfunctionproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/helphandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/interactiveimagehandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/keystone.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/keystonehandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/list_less__osgviewer_scope_view_ptr___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/lodscalehandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/openglquerysupport.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/recordcamerapathhandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/renderer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/scene.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/screencapturehandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/statshandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/threadinghandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/togglesynctovblankhandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/vector_less__openthreads_scope_thread_ptr___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/vector_less__osg_scope_operationthread_ptr___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/vector_less__osgviewer_scope_graphicswindow_ptr___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/vector_less__osgviewer_scope_scene_ptr___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/vector_less__osgviewer_scope_view_ptr___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/view.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/viewconfig.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/viewer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/viewerbase.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgviewer/generated_code/windowsizehandler.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgViewer){
    register_vector_less__osgViewer_scope_View_ptr___greater__class();

    register_vector_less__osgViewer_scope_Scene_ptr___greater__class();

    register_vector_less__osgViewer_scope_GraphicsWindow_ptr___greater__class();

    register_Devices_class();

    register_vector_less__osg_scope_OperationThread_ptr___greater__class();

    register_Cameras_class();

    register_vector_less__OpenThreads_scope_Thread_ptr___greater__class();

    register_list_less__osgViewer_scope_View_ptr___greater__class();

    register_EventHandlers_class();

    register_ViewerBase_class();

    register_CompositeViewer_class();

    register_DepthPartitionSettings_class();

    register_GraphicsWindow_class();

    register_GraphicsWindowEmbedded_class();

    register_GraphicsWindowFunctionProxy_class();

    register_HelpHandler_class();

    register_InteractiveImageHandler_class();

    register_Keystone_class();

    register_KeystoneHandler_class();

    register_LODScaleHandler_class();

    register_OpenGLQuerySupport_class();

    register_RecordCameraPathHandler_class();

    register_Renderer_class();

    register_Scene_class();

    register_ScreenCaptureHandler_class();

    register_StatsHandler_class();

    register_ThreadingHandler_class();

    register_ToggleSyncToVBlankHandler_class();

    register_View_class();

    register_ViewConfig_class();

    register_Viewer_class();

    register_WindowSizeHandler_class();

    register_free_functions();
}


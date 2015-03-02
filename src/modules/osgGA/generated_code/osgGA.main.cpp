// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__call_policies.pypp.hpp"

#include "__convenience.pypp.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/list.hpp"

#include "wrap_osgga.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/cameramanipulator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/device.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/eventqueue.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/events.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/firstpersonmanipulator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/guiactionadapter.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/guieventadapter.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/guieventhandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/guieventhandlervisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/osgga_free_functions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/pointerdata.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/pointerdatalist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/standardmanipulator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgga/generated_code/statesetmanipulator.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(osgGA){
    register_PointerDataList_class();

    register_Events_class();

    register_GUIEventHandler_class();

    register_CameraManipulator_class();

    register_Device_class();

    register_GUIEventAdapter_class();

    register_EventQueue_class();

    register_StandardManipulator_class();

    register_FirstPersonManipulator_class();

    register_GUIActionAdapter_class();

    register_GUIEventHandlerVisitor_class();

    register_PointerData_class();

    register_StateSetManipulator_class();

    register_free_functions();
}


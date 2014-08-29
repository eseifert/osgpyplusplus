// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osg.h"
#include "_ControlPoint__value_traits.pypp.hpp"
#include "timecontrolpointmap.pypp.hpp"

namespace bp = boost::python;

void register_TimeControlPointMap_class(){

    bp::class_< std::map< double, osg::AnimationPath::ControlPoint > >( "TimeControlPointMap" )    
        .def( bp::indexing::map_suite< std::map< double, osg::AnimationPath::ControlPoint > >() );

}
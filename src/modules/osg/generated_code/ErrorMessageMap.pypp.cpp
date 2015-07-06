// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osg.h"
#include "errormessagemap.pypp.hpp"

namespace bp = boost::python;

void register_ErrorMessageMap_class(){

    bp::class_< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >( "ErrorMessageMap" )    
        .def( bp::indexing::map_suite< std::map< std::string, osg::ArgumentParser::ErrorSeverity > >() );

}
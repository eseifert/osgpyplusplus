// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "wrap_osg.h"
#include "map_less__std_scope_string_comma__unsigned_int__greater_.pypp.hpp"

namespace bp = boost::python;

void register_map_less__std_scope_string_comma__unsigned_int__greater__class(){

    bp::class_< std::map< std::string, unsigned int > >( "map_less__std_scope_string_comma__unsigned_int__greater_" )    
        .def( bp::map_indexing_suite< ::std::map< std::string, unsigned int >, true >() );

}
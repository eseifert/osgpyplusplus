// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "valueobjectclassnametrait_less__std_scope_string__greater_.pypp.hpp"

namespace bp = boost::python;

void register_ValueObjectClassNameTrait_less__std_scope_string__greater__class(){

    bp::class_< osg::ValueObjectClassNameTrait< std::string > >( "ValueObjectClassNameTrait_less__std_scope_string__greater_" )    
        .def( 
            "className"
            , (char const * (*)(  ))( &::osg::ValueObjectClassNameTrait< std::string >::className ) )    
        .staticmethod( "className" );

}

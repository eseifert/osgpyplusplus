// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "valueobjectclassnametrait_less__short__greater_.pypp.hpp"

namespace bp = boost::python;

void register_ValueObjectClassNameTrait_less__short__greater__class(){

    bp::class_< osg::ValueObjectClassNameTrait< short > >( "ValueObjectClassNameTrait_less__short__greater_" )    
        .def( 
            "className"
            , (char const * (*)(  ))( &::osg::ValueObjectClassNameTrait< short >::className ) )    
        .staticmethod( "className" );

}

// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "valueobjectclassnametrait_less__osg_scope_matrixd__greater_.pypp.hpp"

namespace bp = boost::python;

void register_ValueObjectClassNameTrait_less__osg_scope_Matrixd__greater__class(){

    bp::class_< osg::ValueObjectClassNameTrait< osg::Matrixd > >( "ValueObjectClassNameTrait_less__osg_scope_Matrixd__greater_" )    
        .def( 
            "className"
            , (char const * (*)(  ))( &::osg::ValueObjectClassNameTrait< osg::Matrixd >::className ) )    
        .staticmethod( "className" );

}

// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "vector_less__osg_scope_vec3f__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_Vec3f__greater__class(){

    { //::std::vector< osg::Vec3f >
        typedef bp::class_< std::vector< osg::Vec3f > > vector_less__osg_scope_Vec3f__greater__exposer_t;
        vector_less__osg_scope_Vec3f__greater__exposer_t vector_less__osg_scope_Vec3f__greater__exposer = vector_less__osg_scope_Vec3f__greater__exposer_t( "vector_less__osg_scope_Vec3f__greater_" );
        bp::scope vector_less__osg_scope_Vec3f__greater__scope( vector_less__osg_scope_Vec3f__greater__exposer );
        vector_less__osg_scope_Vec3f__greater__exposer.def( bp::indexing::vector_suite< std::vector< osg::Vec3f > >() );
    }

}

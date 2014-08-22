// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "vec4ub.pypp.hpp"

namespace bp = boost::python;

void register_Vec4ub_class(){

    { //::osg::Vec4ub
        typedef bp::class_< osg::Vec4ub > Vec4ub_exposer_t;
        Vec4ub_exposer_t Vec4ub_exposer = Vec4ub_exposer_t( "Vec4ub", bp::init< >() );
        bp::scope Vec4ub_scope( Vec4ub_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec4ub::num_components;
        Vec4ub_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") )) );
        { //::osg::Vec4ub::a
        
            typedef unsigned char & ( ::osg::Vec4ub::*a_function_type)(  ) ;
            
            Vec4ub_exposer.def( 
                "a"
                , a_function_type( &::osg::Vec4ub::a )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ub::a
        
            typedef unsigned char ( ::osg::Vec4ub::*a_function_type)(  ) const;
            
            Vec4ub_exposer.def( 
                "a"
                , a_function_type( &::osg::Vec4ub::a ) );
        
        }
        { //::osg::Vec4ub::b
        
            typedef unsigned char & ( ::osg::Vec4ub::*b_function_type)(  ) ;
            
            Vec4ub_exposer.def( 
                "b"
                , b_function_type( &::osg::Vec4ub::b )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ub::b
        
            typedef unsigned char ( ::osg::Vec4ub::*b_function_type)(  ) const;
            
            Vec4ub_exposer.def( 
                "b"
                , b_function_type( &::osg::Vec4ub::b ) );
        
        }
        { //::osg::Vec4ub::g
        
            typedef unsigned char & ( ::osg::Vec4ub::*g_function_type)(  ) ;
            
            Vec4ub_exposer.def( 
                "g"
                , g_function_type( &::osg::Vec4ub::g )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ub::g
        
            typedef unsigned char ( ::osg::Vec4ub::*g_function_type)(  ) const;
            
            Vec4ub_exposer.def( 
                "g"
                , g_function_type( &::osg::Vec4ub::g ) );
        
        }
        Vec4ub_exposer.def( bp::self != bp::self );
        Vec4ub_exposer.def( bp::self * bp::other< float >() );
        Vec4ub_exposer.def( bp::self *= bp::other< float >() );
        Vec4ub_exposer.def( bp::self + bp::self );
        Vec4ub_exposer.def( bp::self += bp::self );
        Vec4ub_exposer.def( bp::self - bp::self );
        Vec4ub_exposer.def( bp::self -= bp::self );
        Vec4ub_exposer.def( bp::self / bp::other< float >() );
        Vec4ub_exposer.def( bp::self /= bp::other< float >() );
        Vec4ub_exposer.def( bp::self < bp::self );
        Vec4ub_exposer.def( bp::self == bp::self );
        { //::osg::Vec4ub::operator[]
        
            typedef unsigned char & ( ::osg::Vec4ub::*__getitem___function_type)( unsigned int ) ;
            
            Vec4ub_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4ub::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ub::operator[]
        
            typedef unsigned char ( ::osg::Vec4ub::*__getitem___function_type)( unsigned int ) const;
            
            Vec4ub_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4ub::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec4ub::r
        
            typedef unsigned char & ( ::osg::Vec4ub::*r_function_type)(  ) ;
            
            Vec4ub_exposer.def( 
                "r"
                , r_function_type( &::osg::Vec4ub::r )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ub::r
        
            typedef unsigned char ( ::osg::Vec4ub::*r_function_type)(  ) const;
            
            Vec4ub_exposer.def( 
                "r"
                , r_function_type( &::osg::Vec4ub::r ) );
        
        }
        { //::osg::Vec4ub::set
        
            typedef void ( ::osg::Vec4ub::*set_function_type)( unsigned char,unsigned char,unsigned char,unsigned char ) ;
            
            Vec4ub_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec4ub::set )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b"), bp::arg("a") ) );
        
        }
    }

}
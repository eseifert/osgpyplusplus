// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "vec3ui.pypp.hpp"

namespace bp = boost::python;

void register_Vec3ui_class(){

    { //::osg::Vec3ui
        typedef bp::class_< osg::Vec3ui > Vec3ui_exposer_t;
        Vec3ui_exposer_t Vec3ui_exposer = Vec3ui_exposer_t( "Vec3ui", bp::init< >() );
        bp::scope Vec3ui_scope( Vec3ui_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec3ui::num_components;
        Vec3ui_exposer.def( bp::init< unsigned int, unsigned int, unsigned int >(( bp::arg("r"), bp::arg("g"), bp::arg("b") )) );
        { //::osg::Vec3ui::b
        
            typedef unsigned int & ( ::osg::Vec3ui::*b_function_type)(  ) ;
            
            Vec3ui_exposer.def( 
                "b"
                , b_function_type( &::osg::Vec3ui::b )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::b
        
            typedef unsigned int ( ::osg::Vec3ui::*b_function_type)(  ) const;
            
            Vec3ui_exposer.def( 
                "b"
                , b_function_type( &::osg::Vec3ui::b ) );
        
        }
        { //::osg::Vec3ui::g
        
            typedef unsigned int & ( ::osg::Vec3ui::*g_function_type)(  ) ;
            
            Vec3ui_exposer.def( 
                "g"
                , g_function_type( &::osg::Vec3ui::g )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::g
        
            typedef unsigned int ( ::osg::Vec3ui::*g_function_type)(  ) const;
            
            Vec3ui_exposer.def( 
                "g"
                , g_function_type( &::osg::Vec3ui::g ) );
        
        }
        Vec3ui_exposer.def( bp::self != bp::self );
        Vec3ui_exposer.def( bp::self * bp::other< unsigned int >() );
        Vec3ui_exposer.def( bp::self * bp::self );
        Vec3ui_exposer.def( bp::self + bp::other< unsigned int >() );
        Vec3ui_exposer.def( bp::self + bp::self );
        Vec3ui_exposer.def( bp::self - bp::other< unsigned int >() );
        Vec3ui_exposer.def( bp::self - bp::self );
        Vec3ui_exposer.def( bp::self / bp::other< unsigned int >() );
        Vec3ui_exposer.def( bp::self < bp::self );
        Vec3ui_exposer.def( bp::self == bp::self );
        { //::osg::Vec3ui::operator[]
        
            typedef unsigned int & ( ::osg::Vec3ui::*__getitem___function_type)( unsigned int ) ;
            
            Vec3ui_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3ui::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::operator[]
        
            typedef unsigned int ( ::osg::Vec3ui::*__getitem___function_type)( unsigned int ) const;
            
            Vec3ui_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3ui::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec3ui::r
        
            typedef unsigned int & ( ::osg::Vec3ui::*r_function_type)(  ) ;
            
            Vec3ui_exposer.def( 
                "r"
                , r_function_type( &::osg::Vec3ui::r )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::r
        
            typedef unsigned int ( ::osg::Vec3ui::*r_function_type)(  ) const;
            
            Vec3ui_exposer.def( 
                "r"
                , r_function_type( &::osg::Vec3ui::r ) );
        
        }
        { //::osg::Vec3ui::set
        
            typedef void ( ::osg::Vec3ui::*set_function_type)( unsigned int,unsigned int,unsigned int ) ;
            
            Vec3ui_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3ui::set )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b") ) );
        
        }
        { //::osg::Vec3ui::set
        
            typedef void ( ::osg::Vec3ui::*set_function_type)( ::osg::Vec3ui const & ) ;
            
            Vec3ui_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3ui::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //::osg::Vec3ui::x
        
            typedef unsigned int & ( ::osg::Vec3ui::*x_function_type)(  ) ;
            
            Vec3ui_exposer.def( 
                "x"
                , x_function_type( &::osg::Vec3ui::x )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::x
        
            typedef unsigned int ( ::osg::Vec3ui::*x_function_type)(  ) const;
            
            Vec3ui_exposer.def( 
                "x"
                , x_function_type( &::osg::Vec3ui::x ) );
        
        }
        { //::osg::Vec3ui::y
        
            typedef unsigned int & ( ::osg::Vec3ui::*y_function_type)(  ) ;
            
            Vec3ui_exposer.def( 
                "y"
                , y_function_type( &::osg::Vec3ui::y )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::y
        
            typedef unsigned int ( ::osg::Vec3ui::*y_function_type)(  ) const;
            
            Vec3ui_exposer.def( 
                "y"
                , y_function_type( &::osg::Vec3ui::y ) );
        
        }
        { //::osg::Vec3ui::z
        
            typedef unsigned int & ( ::osg::Vec3ui::*z_function_type)(  ) ;
            
            Vec3ui_exposer.def( 
                "z"
                , z_function_type( &::osg::Vec3ui::z )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ui::z
        
            typedef unsigned int ( ::osg::Vec3ui::*z_function_type)(  ) const;
            
            Vec3ui_exposer.def( 
                "z"
                , z_function_type( &::osg::Vec3ui::z ) );
        
        }
    }

}

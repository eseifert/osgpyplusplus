// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "sphereprojector.pypp.hpp"

namespace bp = boost::python;

struct SphereProjector_wrapper : osgManipulator::SphereProjector, bp::wrapper< osgManipulator::SphereProjector > {

    SphereProjector_wrapper( )
    : osgManipulator::SphereProjector( )
      , bp::wrapper< osgManipulator::SphereProjector >(){
        // null constructor
    
    }

    SphereProjector_wrapper(::osg::Sphere * sphere )
    : osgManipulator::SphereProjector( boost::python::ptr(sphere) )
      , bp::wrapper< osgManipulator::SphereProjector >(){
        // constructor
    
    }

    virtual bool project( ::osgManipulator::PointerInfo const & pi, ::osg::Vec3d & projectedPoint ) const  {
        if( bp::override func_project = this->get_override( "project" ) )
            return func_project( boost::ref(pi), boost::ref(projectedPoint) );
        else{
            return this->osgManipulator::SphereProjector::project( boost::ref(pi), boost::ref(projectedPoint) );
        }
    }
    
    bool default_project( ::osgManipulator::PointerInfo const & pi, ::osg::Vec3d & projectedPoint ) const  {
        return osgManipulator::SphereProjector::project( boost::ref(pi), boost::ref(projectedPoint) );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_SphereProjector_class(){

    { //::osgManipulator::SphereProjector
        typedef bp::class_< SphereProjector_wrapper, bp::bases< osgManipulator::Projector >, osg::ref_ptr< SphereProjector_wrapper >, boost::noncopyable > SphereProjector_exposer_t;
        SphereProjector_exposer_t SphereProjector_exposer = SphereProjector_exposer_t( "SphereProjector", "\n SphereProjector projects points onto the given sphere.\n", bp::no_init );
        bp::scope SphereProjector_scope( SphereProjector_exposer );
        SphereProjector_exposer.def( bp::init< >("\n SphereProjector projects points onto the given sphere.\n") );
        SphereProjector_exposer.def( bp::init< osg::Sphere * >(( bp::arg("sphere") )) );
        bp::implicitly_convertible< osg::Sphere *, osgManipulator::SphereProjector >();
        { //::osgManipulator::SphereProjector::getSphere
        
            typedef ::osg::Sphere const * ( ::osgManipulator::SphereProjector::*getSphere_function_type)(  ) const;
            
            SphereProjector_exposer.def( 
                "getSphere"
                , getSphere_function_type( &::osgManipulator::SphereProjector::getSphere )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgManipulator::SphereProjector::isPointInFront
        
            typedef bool ( ::osgManipulator::SphereProjector::*isPointInFront_function_type)( ::osgManipulator::PointerInfo const &,::osg::Matrix const & ) const;
            
            SphereProjector_exposer.def( 
                "isPointInFront"
                , isPointInFront_function_type( &::osgManipulator::SphereProjector::isPointInFront )
                , ( bp::arg("pi"), bp::arg("localToWorld") )
                , " Returns true is the point is in front of the cylinder given the eye\n direction." );
        
        }
        { //::osgManipulator::SphereProjector::project
        
            typedef bool ( ::osgManipulator::SphereProjector::*project_function_type)( ::osgManipulator::PointerInfo const &,::osg::Vec3d & ) const;
            typedef bool ( SphereProjector_wrapper::*default_project_function_type)( ::osgManipulator::PointerInfo const &,::osg::Vec3d & ) const;
            
            SphereProjector_exposer.def( 
                "project"
                , project_function_type(&::osgManipulator::SphereProjector::project)
                , default_project_function_type(&SphereProjector_wrapper::default_project)
                , ( bp::arg("pi"), bp::arg("projectedPoint") ) );
        
        }
        { //::osgManipulator::SphereProjector::setFront
        
            typedef void ( ::osgManipulator::SphereProjector::*setFront_function_type)( bool ) ;
            
            SphereProjector_exposer.def( 
                "setFront"
                , setFront_function_type( &::osgManipulator::SphereProjector::setFront )
                , ( bp::arg("front") ) );
        
        }
        { //::osgManipulator::SphereProjector::setSphere
        
            typedef void ( ::osgManipulator::SphereProjector::*setSphere_function_type)( ::osg::Sphere * ) ;
            
            SphereProjector_exposer.def( 
                "setSphere"
                , setSphere_function_type( &::osgManipulator::SphereProjector::setSphere )
                , ( bp::arg("sphere") ) );
        
        }
    }

}

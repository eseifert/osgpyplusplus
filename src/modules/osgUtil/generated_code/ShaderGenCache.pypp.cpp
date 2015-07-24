// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "shadergencache.pypp.hpp"

namespace bp = boost::python;

struct ShaderGenCache_wrapper : osgUtil::ShaderGenCache, bp::wrapper< osgUtil::ShaderGenCache > {

    ShaderGenCache_wrapper( )
    : osgUtil::ShaderGenCache( )
      , bp::wrapper< osgUtil::ShaderGenCache >(){
        // null constructor
    
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

void register_ShaderGenCache_class(){

    { //::osgUtil::ShaderGenCache
        typedef bp::class_< ShaderGenCache_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ShaderGenCache_wrapper >, boost::noncopyable > ShaderGenCache_exposer_t;
        ShaderGenCache_exposer_t ShaderGenCache_exposer = ShaderGenCache_exposer_t( "ShaderGenCache", bp::no_init );
        bp::scope ShaderGenCache_scope( ShaderGenCache_exposer );
        bp::enum_< osgUtil::ShaderGenCache::StateMask>("StateMask")
            .value("BLEND", osgUtil::ShaderGenCache::BLEND)
            .value("LIGHTING", osgUtil::ShaderGenCache::LIGHTING)
            .value("FOG", osgUtil::ShaderGenCache::FOG)
            .value("DIFFUSE_MAP", osgUtil::ShaderGenCache::DIFFUSE_MAP)
            .value("NORMAL_MAP", osgUtil::ShaderGenCache::NORMAL_MAP)
            .export_values()
            ;
        ShaderGenCache_exposer.def( bp::init< >() );
        { //::osgUtil::ShaderGenCache::getOrCreateStateSet
        
            typedef ::osg::StateSet * ( ::osgUtil::ShaderGenCache::*getOrCreateStateSet_function_type)( int ) ;
            
            ShaderGenCache_exposer.def( 
                "getOrCreateStateSet"
                , getOrCreateStateSet_function_type( &::osgUtil::ShaderGenCache::getOrCreateStateSet )
                , ( bp::arg("stateMask") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::ShaderGenCache::getStateSet
        
            typedef ::osg::StateSet * ( ::osgUtil::ShaderGenCache::*getStateSet_function_type)( int ) const;
            
            ShaderGenCache_exposer.def( 
                "getStateSet"
                , getStateSet_function_type( &::osgUtil::ShaderGenCache::getStateSet )
                , ( bp::arg("stateMask") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::ShaderGenCache::setStateSet
        
            typedef void ( ::osgUtil::ShaderGenCache::*setStateSet_function_type)( int,::osg::StateSet * ) ;
            
            ShaderGenCache_exposer.def( 
                "setStateSet"
                , setStateSet_function_type( &::osgUtil::ShaderGenCache::setStateSet )
                , ( bp::arg("stateMask"), bp::arg("program") ) );
        
        }
    }

}

// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgviewer.h"
#include "wrap_referenced.h"
#include "lodscalehandler.pypp.hpp"

namespace bp = boost::python;

struct LODScaleHandler_wrapper : osgViewer::LODScaleHandler, bp::wrapper< osgViewer::LODScaleHandler > {

    LODScaleHandler_wrapper( )
    : osgViewer::LODScaleHandler( )
      , bp::wrapper< osgViewer::LODScaleHandler >(){
        // null constructor
    
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgViewer::LODScaleHandler::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgViewer::LODScaleHandler::getUsage( boost::ref(usage) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::GUIEventHandler::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::GUIEventHandler::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgGA::GUIEventHandler::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgGA::GUIEventHandler::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgGA::GUIEventHandler::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgGA::GUIEventHandler::cloneType( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual void event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        if( bp::override func_event = this->get_override( "event" ) )
            func_event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        else{
            this->osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        }
    }
    
    void default_event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgGA::GUIEventHandler::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgGA::GUIEventHandler::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

};

void register_LODScaleHandler_class(){

    bp::class_< LODScaleHandler_wrapper, bp::bases< ::osgGA::GUIEventHandler >, osg::ref_ptr< ::osgViewer::LODScaleHandler >, boost::noncopyable >( "LODScaleHandler", bp::init< >() )    
        .def( 
            "getKeyEventDecreaseLODScale"
            , (int ( ::osgViewer::LODScaleHandler::* )(  )const)( &::osgViewer::LODScaleHandler::getKeyEventDecreaseLODScale ) )    
        .def( 
            "getKeyEventIncreaseLODScale"
            , (int ( ::osgViewer::LODScaleHandler::* )(  )const)( &::osgViewer::LODScaleHandler::getKeyEventIncreaseLODScale ) )    
        .def( 
            "getUsage"
            , (void ( ::osgViewer::LODScaleHandler::* )( ::osg::ApplicationUsage & )const)(&::osgViewer::LODScaleHandler::getUsage)
            , (void ( LODScaleHandler_wrapper::* )( ::osg::ApplicationUsage & )const)(&LODScaleHandler_wrapper::default_getUsage)
            , ( bp::arg("usage") ) )    
        .def( 
            "setKeyEventDecreaseLODScale"
            , (void ( ::osgViewer::LODScaleHandler::* )( int ))( &::osgViewer::LODScaleHandler::setKeyEventDecreaseLODScale )
            , ( bp::arg("key") ) )    
        .def( 
            "setKeyEventIncreaseLODScale"
            , (void ( ::osgViewer::LODScaleHandler::* )( int ))( &::osgViewer::LODScaleHandler::setKeyEventIncreaseLODScale )
            , ( bp::arg("key") ) );

}

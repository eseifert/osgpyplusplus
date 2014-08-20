// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgviewer.h"
#include "wrap_referenced.h"
#include "screencapturehandler.pypp.hpp"

namespace bp = boost::python;

struct ScreenCaptureHandler_wrapper : osgViewer::ScreenCaptureHandler, bp::wrapper< osgViewer::ScreenCaptureHandler > {

    struct WriteToFile_wrapper : osgViewer::ScreenCaptureHandler::WriteToFile, bp::wrapper< osgViewer::ScreenCaptureHandler::WriteToFile > {
    
        WriteToFile_wrapper(::std::string const & filename, ::std::string const & extension, ::osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy=::osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER )
        : osgViewer::ScreenCaptureHandler::WriteToFile( filename, extension, savePolicy )
          , bp::wrapper< osgViewer::ScreenCaptureHandler::WriteToFile >(){
            // constructor
        
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

    ScreenCaptureHandler_wrapper(::osgViewer::ScreenCaptureHandler::CaptureOperation * defaultOperation=0, int numFrames=1 )
    : osgViewer::ScreenCaptureHandler( boost::python::ptr(defaultOperation), numFrames )
      , bp::wrapper< osgViewer::ScreenCaptureHandler >(){
        // constructor
    
    }

    virtual void captureNextFrame( ::osgViewer::ViewerBase & viewer ) {
        if( bp::override func_captureNextFrame = this->get_override( "captureNextFrame" ) )
            func_captureNextFrame( boost::ref(viewer) );
        else{
            this->osgViewer::ScreenCaptureHandler::captureNextFrame( boost::ref(viewer) );
        }
    }
    
    void default_captureNextFrame( ::osgViewer::ViewerBase & viewer ) {
        osgViewer::ScreenCaptureHandler::captureNextFrame( boost::ref(viewer) );
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgViewer::ScreenCaptureHandler::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgViewer::ScreenCaptureHandler::getUsage( boost::ref(usage) );
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

void register_ScreenCaptureHandler_class(){

    { //::osgViewer::ScreenCaptureHandler
        typedef bp::class_< ScreenCaptureHandler_wrapper, osg::ref_ptr< ::osgViewer::ScreenCaptureHandler >, boost::noncopyable > ScreenCaptureHandler_exposer_t;
        ScreenCaptureHandler_exposer_t ScreenCaptureHandler_exposer = ScreenCaptureHandler_exposer_t( "ScreenCaptureHandler", bp::init< bp::optional< osgViewer::ScreenCaptureHandler::CaptureOperation *, int > >(( bp::arg("defaultOperation")=bp::object(), bp::arg("numFrames")=(int)(1) )) );
        bp::scope ScreenCaptureHandler_scope( ScreenCaptureHandler_exposer );
        { //::osgViewer::ScreenCaptureHandler::WriteToFile
            typedef bp::class_< ScreenCaptureHandler_wrapper::WriteToFile_wrapper, boost::noncopyable > WriteToFile_exposer_t;
            WriteToFile_exposer_t WriteToFile_exposer = WriteToFile_exposer_t( "WriteToFile", bp::init< std::string const &, std::string const &, bp::optional< osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy > >(( bp::arg("filename"), bp::arg("extension"), bp::arg("savePolicy")=(long)(::osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) )) );
            bp::scope WriteToFile_scope( WriteToFile_exposer );
            bp::enum_< osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy>("SavePolicy")
                .value("OVERWRITE", osgViewer::ScreenCaptureHandler::WriteToFile::OVERWRITE)
                .value("SEQUENTIAL_NUMBER", osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)
                .export_values()
                ;
            { //::osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy
            
                typedef ::osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy ( ::osgViewer::ScreenCaptureHandler::WriteToFile::*getSavePolicy_function_type)(  ) const;
                
                WriteToFile_exposer.def( 
                    "getSavePolicy"
                    , getSavePolicy_function_type( &::osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy ) );
            
            }
            { //::osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy
            
                typedef void ( ::osgViewer::ScreenCaptureHandler::WriteToFile::*setSavePolicy_function_type)( ::osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy ) ;
                
                WriteToFile_exposer.def( 
                    "setSavePolicy"
                    , setSavePolicy_function_type( &::osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy )
                    , ( bp::arg("savePolicy") ) );
            
            }
        }
        bp::implicitly_convertible< osgViewer::ScreenCaptureHandler::CaptureOperation *, osgViewer::ScreenCaptureHandler >();
        { //::osgViewer::ScreenCaptureHandler::captureNextFrame
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*captureNextFrame_function_type)( ::osgViewer::ViewerBase & ) ;
            typedef void ( ScreenCaptureHandler_wrapper::*default_captureNextFrame_function_type)( ::osgViewer::ViewerBase & ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "captureNextFrame"
                , captureNextFrame_function_type(&::osgViewer::ScreenCaptureHandler::captureNextFrame)
                , default_captureNextFrame_function_type(&ScreenCaptureHandler_wrapper::default_captureNextFrame)
                , ( bp::arg("viewer") ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::getCaptureOperation
        
            typedef ::osgViewer::ScreenCaptureHandler::CaptureOperation * ( ::osgViewer::ScreenCaptureHandler::*getCaptureOperation_function_type)(  ) const;
            
            ScreenCaptureHandler_exposer.def( 
                "getCaptureOperation"
                , getCaptureOperation_function_type( &::osgViewer::ScreenCaptureHandler::getCaptureOperation )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgViewer::ScreenCaptureHandler::getFramesToCapture
        
            typedef int ( ::osgViewer::ScreenCaptureHandler::*getFramesToCapture_function_type)(  ) const;
            
            ScreenCaptureHandler_exposer.def( 
                "getFramesToCapture"
                , getFramesToCapture_function_type( &::osgViewer::ScreenCaptureHandler::getFramesToCapture ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot
        
            typedef int ( ::osgViewer::ScreenCaptureHandler::*getKeyEventTakeScreenShot_function_type)(  ) const;
            
            ScreenCaptureHandler_exposer.def( 
                "getKeyEventTakeScreenShot"
                , getKeyEventTakeScreenShot_function_type( &::osgViewer::ScreenCaptureHandler::getKeyEventTakeScreenShot ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture
        
            typedef int ( ::osgViewer::ScreenCaptureHandler::*getKeyEventToggleContinuousCapture_function_type)(  ) const;
            
            ScreenCaptureHandler_exposer.def( 
                "getKeyEventToggleContinuousCapture"
                , getKeyEventToggleContinuousCapture_function_type( &::osgViewer::ScreenCaptureHandler::getKeyEventToggleContinuousCapture ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::getUsage
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*getUsage_function_type)( ::osg::ApplicationUsage & ) const;
            typedef void ( ScreenCaptureHandler_wrapper::*default_getUsage_function_type)( ::osg::ApplicationUsage & ) const;
            
            ScreenCaptureHandler_exposer.def( 
                "getUsage"
                , getUsage_function_type(&::osgViewer::ScreenCaptureHandler::getUsage)
                , default_getUsage_function_type(&ScreenCaptureHandler_wrapper::default_getUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::setCaptureOperation
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*setCaptureOperation_function_type)( ::osgViewer::ScreenCaptureHandler::CaptureOperation * ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "setCaptureOperation"
                , setCaptureOperation_function_type( &::osgViewer::ScreenCaptureHandler::setCaptureOperation )
                , ( bp::arg("operation") ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::setFramesToCapture
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*setFramesToCapture_function_type)( int ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "setFramesToCapture"
                , setFramesToCapture_function_type( &::osgViewer::ScreenCaptureHandler::setFramesToCapture )
                , ( bp::arg("numFrames") ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*setKeyEventTakeScreenShot_function_type)( int ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "setKeyEventTakeScreenShot"
                , setKeyEventTakeScreenShot_function_type( &::osgViewer::ScreenCaptureHandler::setKeyEventTakeScreenShot )
                , ( bp::arg("key") ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*setKeyEventToggleContinuousCapture_function_type)( int ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "setKeyEventToggleContinuousCapture"
                , setKeyEventToggleContinuousCapture_function_type( &::osgViewer::ScreenCaptureHandler::setKeyEventToggleContinuousCapture )
                , ( bp::arg("key") ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::startCapture
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*startCapture_function_type)(  ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "startCapture"
                , startCapture_function_type( &::osgViewer::ScreenCaptureHandler::startCapture ) );
        
        }
        { //::osgViewer::ScreenCaptureHandler::stopCapture
        
            typedef void ( ::osgViewer::ScreenCaptureHandler::*stopCapture_function_type)(  ) ;
            
            ScreenCaptureHandler_exposer.def( 
                "stopCapture"
                , stopCapture_function_type( &::osgViewer::ScreenCaptureHandler::stopCapture ) );
        
        }
    }

}

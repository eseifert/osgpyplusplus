// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "resizehandler.pypp.hpp"

namespace bp = boost::python;

struct ResizeHandler_wrapper : osgWidget::ResizeHandler, bp::wrapper< osgWidget::ResizeHandler > {

    ResizeHandler_wrapper(::osgWidget::WindowManager * arg0, ::osg::Camera * arg1=0 )
    : osgWidget::ResizeHandler( boost::python::ptr(arg0), boost::python::ptr(arg1) )
      , bp::wrapper< osgWidget::ResizeHandler >(){
        // constructor
    
    }

    virtual bool handle( ::osgGA::GUIEventAdapter const & arg0, ::osgGA::GUIActionAdapter & arg1, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), arg0, arg1, arg2, arg3 );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgWidget::ResizeHandler::handle( boost::ref(arg0), boost::ref(arg1), boost::python::ptr(arg2), boost::python::ptr(arg3) );
        }
    }
    
    static boost::python::object default_handle( ::osgWidget::ResizeHandler & inst, ::osgGA::GUIEventAdapter & arg0, ::osgGA::GUIActionAdapter & arg1, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ){
        bool result;
        if( dynamic_cast< ResizeHandler_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgWidget::ResizeHandler::handle(arg0, arg1, arg2, arg3);
        }
        else{
            result = inst.handle(arg0, arg1, arg2, arg3);
        }
        return bp::object( result );
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

    virtual void getUsage( ::osg::ApplicationUsage & arg0 ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(arg0) );
        else{
            this->osgGA::GUIEventHandler::getUsage( boost::ref(arg0) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & arg0 ) const  {
        osgGA::GUIEventHandler::getUsage( boost::ref(arg0) );
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

void register_ResizeHandler_class(){

    { //::osgWidget::ResizeHandler
        typedef bp::class_< ResizeHandler_wrapper, bp::bases< ::osgGA::GUIEventHandler >, osg::ref_ptr< ResizeHandler_wrapper >, boost::noncopyable > ResizeHandler_exposer_t;
        ResizeHandler_exposer_t ResizeHandler_exposer = ResizeHandler_exposer_t( "ResizeHandler", bp::init< osgWidget::WindowManager *, bp::optional< osg::Camera * > >(( bp::arg("arg0"), bp::arg("arg1")=bp::object() )) );
        bp::scope ResizeHandler_scope( ResizeHandler_exposer );
        bp::implicitly_convertible< osgWidget::WindowManager *, osgWidget::ResizeHandler >();
        { //::osgWidget::ResizeHandler::handle
        
            typedef boost::python::object ( *default_handle_function_type )( ::osgWidget::ResizeHandler &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter &,::osg::Object *,::osg::NodeVisitor * );
            
            ResizeHandler_exposer.def( 
                "handle"
                , default_handle_function_type( &ResizeHandler_wrapper::default_handle )
                , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2"), bp::arg("arg3") ) );
        
        }
    }

}

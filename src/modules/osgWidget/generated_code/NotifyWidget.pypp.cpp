// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "notifywidget.pypp.hpp"

namespace bp = boost::python;

struct NotifyWidget_wrapper : osgWidget::NotifyWidget, bp::wrapper< osgWidget::NotifyWidget > {

    NotifyWidget_wrapper(::std::string const & n="", ::osgWidget::point_type w=0.0f, ::osgWidget::point_type h=0.0f )
    : osgWidget::NotifyWidget( n, w, h )
      , bp::wrapper< osgWidget::NotifyWidget >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgWidget::NotifyWidget::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgWidget::NotifyWidget::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgWidget::NotifyWidget::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgWidget::NotifyWidget::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgWidget::NotifyWidget::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgWidget::NotifyWidget::cloneType( );
    }

    virtual bool focus( ::osgWidget::WindowManager const * arg0 ) {
        if( bp::override func_focus = this->get_override( "focus" ) )
            return func_focus( boost::python::ptr(arg0) );
        else{
            return this->osgWidget::NotifyWidget::focus( boost::python::ptr(arg0) );
        }
    }
    
    bool default_focus( ::osgWidget::WindowManager const * arg0 ) {
        return osgWidget::NotifyWidget::focus( boost::python::ptr(arg0) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgWidget::NotifyWidget::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgWidget::NotifyWidget::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgWidget::NotifyWidget::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgWidget::NotifyWidget::libraryName( );
    }

    virtual bool mouseDrag( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseDrag = this->get_override( "mouseDrag" ) )
            return func_mouseDrag( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mouseDrag( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseDrag( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mouseDrag( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseEnter( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseEnter = this->get_override( "mouseEnter" ) )
            return func_mouseEnter( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mouseEnter( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseEnter( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mouseEnter( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseLeave( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseLeave = this->get_override( "mouseLeave" ) )
            return func_mouseLeave( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mouseLeave( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseLeave( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mouseLeave( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseOver( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseOver = this->get_override( "mouseOver" ) )
            return func_mouseOver( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mouseOver( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseOver( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mouseOver( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mousePush( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mousePush = this->get_override( "mousePush" ) )
            return func_mousePush( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mousePush( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mousePush( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mousePush( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseRelease( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseRelease = this->get_override( "mouseRelease" ) )
            return func_mouseRelease( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mouseRelease( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseRelease( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mouseRelease( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseScroll( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseScroll = this->get_override( "mouseScroll" ) )
            return func_mouseScroll( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NotifyWidget::mouseScroll( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseScroll( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NotifyWidget::mouseScroll( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool unfocus( ::osgWidget::WindowManager const * arg0 ) {
        if( bp::override func_unfocus = this->get_override( "unfocus" ) )
            return func_unfocus( boost::python::ptr(arg0) );
        else{
            return this->osgWidget::NotifyWidget::unfocus( boost::python::ptr(arg0) );
        }
    }
    
    bool default_unfocus( ::osgWidget::WindowManager const * arg0 ) {
        return osgWidget::NotifyWidget::unfocus( boost::python::ptr(arg0) );
    }

    virtual void accept( ::osg::Drawable::AttributeFunctor & af ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osg::Geometry::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::AttributeFunctor & af ) {
        osg::Geometry::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osg::Geometry::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        osg::Geometry::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::PrimitiveFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osg::Geometry::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & pf ) const  {
        osg::Geometry::accept( boost::ref(pf) );
    }

    virtual void accept( ::osg::PrimitiveIndexFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osg::Geometry::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveIndexFunctor & pf ) const  {
        osg::Geometry::accept( boost::ref(pf) );
    }

    virtual ::osg::Geometry * asGeometry(  ) {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Geometry::asGeometry(  );
        }
    }
    
    ::osg::Geometry * default_asGeometry(  ) {
        return osg::Geometry::asGeometry( );
    }

    virtual ::osg::Geometry const * asGeometry(  ) const  {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Geometry::asGeometry(  );
        }
    }
    
    ::osg::Geometry const * default_asGeometry(  ) const  {
        return osg::Geometry::asGeometry( );
    }

    virtual void compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(renderInfo) );
        else{
            this->osg::Geometry::compileGLObjects( boost::ref(renderInfo) );
        }
    }
    
    void default_compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        osg::Geometry::compileGLObjects( boost::ref(renderInfo) );
    }

    virtual ::osg::BoundingBox computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Drawable::computeBound(  );
        }
    }
    
    ::osg::BoundingBox default_computeBound(  ) const  {
        return osg::Drawable::computeBound( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Drawable::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Drawable::computeDataVariance( );
    }

    virtual void dirtyDisplayList(  ) {
        if( bp::override func_dirtyDisplayList = this->get_override( "dirtyDisplayList" ) )
            func_dirtyDisplayList(  );
        else{
            this->osg::Geometry::dirtyDisplayList(  );
        }
    }
    
    void default_dirtyDisplayList(  ) {
        osg::Geometry::dirtyDisplayList( );
    }

    virtual void drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_drawImplementation = this->get_override( "drawImplementation" ) )
            func_drawImplementation( boost::ref(renderInfo) );
        else{
            this->osg::Geometry::drawImplementation( boost::ref(renderInfo) );
        }
    }
    
    void default_drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        osg::Geometry::drawImplementation( boost::ref(renderInfo) );
    }

    virtual unsigned int getGLObjectSizeHint(  ) const  {
        if( bp::override func_getGLObjectSizeHint = this->get_override( "getGLObjectSizeHint" ) )
            return func_getGLObjectSizeHint(  );
        else{
            return this->osg::Geometry::getGLObjectSizeHint(  );
        }
    }
    
    unsigned int default_getGLObjectSizeHint(  ) const  {
        return osg::Geometry::getGLObjectSizeHint( );
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

    virtual bool keyDown( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_keyDown = this->get_override( "keyDown" ) )
            return func_keyDown( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::EventInterface::keyDown( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_keyDown( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::EventInterface::keyDown( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool keyUp( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_keyUp = this->get_override( "keyUp" ) )
            return func_keyUp( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::EventInterface::keyUp( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_keyUp( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::EventInterface::keyUp( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual void managed( ::osgWidget::WindowManager * arg0 ) {
        if( bp::override func_managed = this->get_override( "managed" ) )
            func_managed( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::managed( boost::python::ptr(arg0) );
        }
    }
    
    void default_managed( ::osgWidget::WindowManager * arg0 ) {
        osgWidget::Widget::managed( boost::python::ptr(arg0) );
    }

    virtual void parented( ::osgWidget::Window * arg0 ) {
        if( bp::override func_parented = this->get_override( "parented" ) )
            func_parented( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::parented( boost::python::ptr(arg0) );
        }
    }
    
    void default_parented( ::osgWidget::Window * arg0 ) {
        osgWidget::Widget::parented( boost::python::ptr(arg0) );
    }

    virtual void positioned(  ) {
        if( bp::override func_positioned = this->get_override( "positioned" ) )
            func_positioned(  );
        else{
            this->osgWidget::Widget::positioned(  );
        }
    }
    
    void default_positioned(  ) {
        osgWidget::Widget::positioned( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Geometry::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Geometry::resizeGLObjectBuffers( maxSize );
    }

    virtual void setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        if( bp::override func_setCullCallback = this->get_override( "setCullCallback" ) )
            func_setCullCallback( boost::python::ptr(cc) );
        else{
            this->osg::Drawable::setCullCallback( boost::python::ptr(cc) );
        }
    }
    
    void default_setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        osg::Drawable::setCullCallback( boost::python::ptr(cc) );
    }

    virtual void setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        if( bp::override func_setDrawCallback = this->get_override( "setDrawCallback" ) )
            func_setDrawCallback( boost::python::ptr(dc) );
        else{
            this->osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
        }
    }
    
    void default_setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
    }

    virtual void setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        if( bp::override func_setEventCallback = this->get_override( "setEventCallback" ) )
            func_setEventCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setEventCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        osg::Drawable::setEventCallback( boost::python::ptr(ac) );
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
            this->osg::Drawable::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Drawable::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        if( bp::override func_setUpdateCallback = this->get_override( "setUpdateCallback" ) )
            func_setUpdateCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
    }

    virtual void setUseVertexBufferObjects( bool flag ) {
        if( bp::override func_setUseVertexBufferObjects = this->get_override( "setUseVertexBufferObjects" ) )
            func_setUseVertexBufferObjects( flag );
        else{
            this->osg::Geometry::setUseVertexBufferObjects( flag );
        }
    }
    
    void default_setUseVertexBufferObjects( bool flag ) {
        osg::Geometry::setUseVertexBufferObjects( flag );
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

    virtual bool supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual void unmanaged( ::osgWidget::WindowManager * arg0 ) {
        if( bp::override func_unmanaged = this->get_override( "unmanaged" ) )
            func_unmanaged( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::unmanaged( boost::python::ptr(arg0) );
        }
    }
    
    void default_unmanaged( ::osgWidget::WindowManager * arg0 ) {
        osgWidget::Widget::unmanaged( boost::python::ptr(arg0) );
    }

    virtual void unparented( ::osgWidget::Window * arg0 ) {
        if( bp::override func_unparented = this->get_override( "unparented" ) )
            func_unparented( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::unparented( boost::python::ptr(arg0) );
        }
    }
    
    void default_unparented( ::osgWidget::Window * arg0 ) {
        osgWidget::Widget::unparented( boost::python::ptr(arg0) );
    }

};

void register_NotifyWidget_class(){

    { //::osgWidget::NotifyWidget
        typedef bp::class_< NotifyWidget_wrapper, bp::bases< osgWidget::Widget >, osg::ref_ptr< ::osgWidget::NotifyWidget >, boost::noncopyable > NotifyWidget_exposer_t;
        NotifyWidget_exposer_t NotifyWidget_exposer = NotifyWidget_exposer_t( "NotifyWidget", bp::init< bp::optional< std::string const &, osgWidget::point_type, osgWidget::point_type > >(( bp::arg("n")="", bp::arg("w")=0.0f, bp::arg("h")=0.0f )) );
        bp::scope NotifyWidget_scope( NotifyWidget_exposer );
        bp::implicitly_convertible< std::string const &, osgWidget::NotifyWidget >();
        { //::osgWidget::NotifyWidget::className
        
            typedef char const * ( ::osgWidget::NotifyWidget::*className_function_type )(  ) const;
            typedef char const * ( NotifyWidget_wrapper::*default_className_function_type )(  ) const;
            
            NotifyWidget_exposer.def( 
                "className"
                , className_function_type(&::osgWidget::NotifyWidget::className)
                , default_className_function_type(&NotifyWidget_wrapper::default_className) );
        
        }
        { //::osgWidget::NotifyWidget::clone
        
            typedef ::osg::Object * ( ::osgWidget::NotifyWidget::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( NotifyWidget_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            NotifyWidget_exposer.def( 
                "clone"
                , clone_function_type(&::osgWidget::NotifyWidget::clone)
                , default_clone_function_type(&NotifyWidget_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgWidget::NotifyWidget::cloneType
        
            typedef ::osg::Object * ( ::osgWidget::NotifyWidget::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( NotifyWidget_wrapper::*default_cloneType_function_type )(  ) const;
            
            NotifyWidget_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgWidget::NotifyWidget::cloneType)
                , default_cloneType_function_type(&NotifyWidget_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgWidget::NotifyWidget::focus
        
            typedef bool ( ::osgWidget::NotifyWidget::*focus_function_type )( ::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_focus_function_type )( ::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "focus"
                , focus_function_type(&::osgWidget::NotifyWidget::focus)
                , default_focus_function_type(&NotifyWidget_wrapper::default_focus)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::NotifyWidget::isSameKindAs
        
            typedef bool ( ::osgWidget::NotifyWidget::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( NotifyWidget_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            NotifyWidget_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgWidget::NotifyWidget::isSameKindAs)
                , default_isSameKindAs_function_type(&NotifyWidget_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgWidget::NotifyWidget::keyPress
        
            typedef bool ( ::osgWidget::NotifyWidget::*keyPress_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "keyPress"
                , keyPress_function_type( &::osgWidget::NotifyWidget::keyPress )
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::keyRelease
        
            typedef bool ( ::osgWidget::NotifyWidget::*keyRelease_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "keyRelease"
                , keyRelease_function_type( &::osgWidget::NotifyWidget::keyRelease )
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::libraryName
        
            typedef char const * ( ::osgWidget::NotifyWidget::*libraryName_function_type )(  ) const;
            typedef char const * ( NotifyWidget_wrapper::*default_libraryName_function_type )(  ) const;
            
            NotifyWidget_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgWidget::NotifyWidget::libraryName)
                , default_libraryName_function_type(&NotifyWidget_wrapper::default_libraryName) );
        
        }
        { //::osgWidget::NotifyWidget::mouseDrag
        
            typedef bool ( ::osgWidget::NotifyWidget::*mouseDrag_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mouseDrag_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mouseDrag"
                , mouseDrag_function_type(&::osgWidget::NotifyWidget::mouseDrag)
                , default_mouseDrag_function_type(&NotifyWidget_wrapper::default_mouseDrag)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::mouseEnter
        
            typedef bool ( ::osgWidget::NotifyWidget::*mouseEnter_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mouseEnter_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mouseEnter"
                , mouseEnter_function_type(&::osgWidget::NotifyWidget::mouseEnter)
                , default_mouseEnter_function_type(&NotifyWidget_wrapper::default_mouseEnter)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::mouseLeave
        
            typedef bool ( ::osgWidget::NotifyWidget::*mouseLeave_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mouseLeave_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mouseLeave"
                , mouseLeave_function_type(&::osgWidget::NotifyWidget::mouseLeave)
                , default_mouseLeave_function_type(&NotifyWidget_wrapper::default_mouseLeave)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::mouseOver
        
            typedef bool ( ::osgWidget::NotifyWidget::*mouseOver_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mouseOver_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mouseOver"
                , mouseOver_function_type(&::osgWidget::NotifyWidget::mouseOver)
                , default_mouseOver_function_type(&NotifyWidget_wrapper::default_mouseOver)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::mousePush
        
            typedef bool ( ::osgWidget::NotifyWidget::*mousePush_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mousePush_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mousePush"
                , mousePush_function_type(&::osgWidget::NotifyWidget::mousePush)
                , default_mousePush_function_type(&NotifyWidget_wrapper::default_mousePush)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::mouseRelease
        
            typedef bool ( ::osgWidget::NotifyWidget::*mouseRelease_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mouseRelease_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mouseRelease"
                , mouseRelease_function_type(&::osgWidget::NotifyWidget::mouseRelease)
                , default_mouseRelease_function_type(&NotifyWidget_wrapper::default_mouseRelease)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::mouseScroll
        
            typedef bool ( ::osgWidget::NotifyWidget::*mouseScroll_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_mouseScroll_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "mouseScroll"
                , mouseScroll_function_type(&::osgWidget::NotifyWidget::mouseScroll)
                , default_mouseScroll_function_type(&NotifyWidget_wrapper::default_mouseScroll)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NotifyWidget::unfocus
        
            typedef bool ( ::osgWidget::NotifyWidget::*unfocus_function_type )( ::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_unfocus_function_type )( ::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "unfocus"
                , unfocus_function_type(&::osgWidget::NotifyWidget::unfocus)
                , default_unfocus_function_type(&NotifyWidget_wrapper::default_unfocus)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::EventInterface::keyDown
        
            typedef bool ( ::osgWidget::EventInterface::*keyDown_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_keyDown_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "keyDown"
                , keyDown_function_type(&::osgWidget::EventInterface::keyDown)
                , default_keyDown_function_type(&NotifyWidget_wrapper::default_keyDown)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::EventInterface::keyUp
        
            typedef bool ( ::osgWidget::EventInterface::*keyUp_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            typedef bool ( NotifyWidget_wrapper::*default_keyUp_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NotifyWidget_exposer.def( 
                "keyUp"
                , keyUp_function_type(&::osgWidget::EventInterface::keyUp)
                , default_keyUp_function_type(&NotifyWidget_wrapper::default_keyUp)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::Widget::managed
        
            typedef void ( ::osgWidget::Widget::*managed_function_type )( ::osgWidget::WindowManager * ) ;
            typedef void ( NotifyWidget_wrapper::*default_managed_function_type )( ::osgWidget::WindowManager * ) ;
            
            NotifyWidget_exposer.def( 
                "managed"
                , managed_function_type(&::osgWidget::Widget::managed)
                , default_managed_function_type(&NotifyWidget_wrapper::default_managed)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::Widget::parented
        
            typedef void ( ::osgWidget::Widget::*parented_function_type )( ::osgWidget::Window * ) ;
            typedef void ( NotifyWidget_wrapper::*default_parented_function_type )( ::osgWidget::Window * ) ;
            
            NotifyWidget_exposer.def( 
                "parented"
                , parented_function_type(&::osgWidget::Widget::parented)
                , default_parented_function_type(&NotifyWidget_wrapper::default_parented)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::Widget::positioned
        
            typedef void ( ::osgWidget::Widget::*positioned_function_type )(  ) ;
            typedef void ( NotifyWidget_wrapper::*default_positioned_function_type )(  ) ;
            
            NotifyWidget_exposer.def( 
                "positioned"
                , positioned_function_type(&::osgWidget::Widget::positioned)
                , default_positioned_function_type(&NotifyWidget_wrapper::default_positioned) );
        
        }
        { //::osgWidget::Widget::unmanaged
        
            typedef void ( ::osgWidget::Widget::*unmanaged_function_type )( ::osgWidget::WindowManager * ) ;
            typedef void ( NotifyWidget_wrapper::*default_unmanaged_function_type )( ::osgWidget::WindowManager * ) ;
            
            NotifyWidget_exposer.def( 
                "unmanaged"
                , unmanaged_function_type(&::osgWidget::Widget::unmanaged)
                , default_unmanaged_function_type(&NotifyWidget_wrapper::default_unmanaged)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::Widget::unparented
        
            typedef void ( ::osgWidget::Widget::*unparented_function_type )( ::osgWidget::Window * ) ;
            typedef void ( NotifyWidget_wrapper::*default_unparented_function_type )( ::osgWidget::Window * ) ;
            
            NotifyWidget_exposer.def( 
                "unparented"
                , unparented_function_type(&::osgWidget::Widget::unparented)
                , default_unparented_function_type(&NotifyWidget_wrapper::default_unparented)
                , ( bp::arg("arg0") ) );
        
        }
    }

}

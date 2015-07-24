// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "updatevisitor.pypp.hpp"

namespace bp = boost::python;

struct UpdateVisitor_wrapper : osgUtil::UpdateVisitor, bp::wrapper< osgUtil::UpdateVisitor > {

    UpdateVisitor_wrapper( )
    : osgUtil::UpdateVisitor( )
      , bp::wrapper< osgUtil::UpdateVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Geode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Geode & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LightSource & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LightSource & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Projection & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Projection & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OccluderNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::UpdateVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OccluderNode & node ) {
        osgUtil::UpdateVisitor::apply( boost::ref(node) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgUtil::UpdateVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgUtil::UpdateVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgUtil::UpdateVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgUtil::UpdateVisitor::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::UpdateVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::UpdateVisitor::reset( );
    }

    virtual void apply( ::osg::ProxyNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ProxyNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CoordinateSystemNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CoordinateSystemNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClipNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClipNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::TexGenNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::TexGenNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Camera & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Camera & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CameraView & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CameraView & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::MatrixTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::MatrixTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PositionAttitudeTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PositionAttitudeTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Sequence & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Sequence & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PagedLOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PagedLOD & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClearNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClearNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OcclusionQueryNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OcclusionQueryNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual float getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceFromEyePoint = this->get_override( "getDistanceFromEyePoint" ) )
            return func_getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToViewPoint = this->get_override( "getDistanceToViewPoint" ) )
            return func_getDistanceToViewPoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
    }

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osg::NodeVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osg::NodeVisitor::getEyePoint( );
    }

    virtual ::osg::Vec3 getViewPoint(  ) const  {
        if( bp::override func_getViewPoint = this->get_override( "getViewPoint" ) )
            return func_getViewPoint(  );
        else{
            return this->osg::NodeVisitor::getViewPoint(  );
        }
    }
    
    ::osg::Vec3 default_getViewPoint(  ) const  {
        return osg::NodeVisitor::getViewPoint( );
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

void register_UpdateVisitor_class(){

    bp::class_< UpdateVisitor_wrapper, bp::bases< ::osg::NodeVisitor >, osg::ref_ptr< UpdateVisitor_wrapper >, boost::noncopyable >( "UpdateVisitor", bp::init< >() )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Node & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Node & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Geode & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Geode & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Billboard & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Billboard & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::LightSource & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::LightSource & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Group & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Group & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Transform & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Transform & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Projection & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Projection & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::Switch & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::Switch & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::LOD & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::LOD & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::UpdateVisitor::* )( ::osg::OccluderNode & ))(&::osgUtil::UpdateVisitor::apply)
            , (void ( UpdateVisitor_wrapper::* )( ::osg::OccluderNode & ))(&UpdateVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "className"
            , (char const * ( ::osgUtil::UpdateVisitor::* )(  )const)(&::osgUtil::UpdateVisitor::className)
            , (char const * ( UpdateVisitor_wrapper::* )(  )const)(&UpdateVisitor_wrapper::default_className) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgUtil::UpdateVisitor::* )(  )const)(&::osgUtil::UpdateVisitor::libraryName)
            , (char const * ( UpdateVisitor_wrapper::* )(  )const)(&UpdateVisitor_wrapper::default_libraryName) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::UpdateVisitor::* )(  ))(&::osgUtil::UpdateVisitor::reset)
            , (void ( UpdateVisitor_wrapper::* )(  ))(&UpdateVisitor_wrapper::default_reset) );

}

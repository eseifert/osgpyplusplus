// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "collectoccludersvisitor.pypp.hpp"

namespace bp = boost::python;

struct CollectOccludersVisitor_wrapper : osg::CollectOccludersVisitor, bp::wrapper< osg::CollectOccludersVisitor > {

    CollectOccludersVisitor_wrapper( )
    : osg::CollectOccludersVisitor( )
      , bp::wrapper< osg::CollectOccludersVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osg::Node & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::CollectOccludersVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Node & arg0 ) {
        osg::CollectOccludersVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::CollectOccludersVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
        osg::CollectOccludersVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Projection & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::CollectOccludersVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Projection & node ) {
        osg::CollectOccludersVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::CollectOccludersVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
        osg::CollectOccludersVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::CollectOccludersVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
        osg::CollectOccludersVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OccluderNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::CollectOccludersVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OccluderNode & node ) {
        osg::CollectOccludersVisitor::apply( boost::ref(node) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::CollectOccludersVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::CollectOccludersVisitor::className( );
    }

    virtual ::osg::CollectOccludersVisitor * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::CollectOccludersVisitor::cloneType(  );
        }
    }
    
    ::osg::CollectOccludersVisitor * default_cloneType(  ) const  {
        return osg::CollectOccludersVisitor::cloneType( );
    }

    virtual float getDistanceFromEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        if( bp::override func_getDistanceFromEyePoint = this->get_override( "getDistanceFromEyePoint" ) )
            return func_getDistanceFromEyePoint( boost::ref(pos), withLODScale );
        else{
            return this->osg::CollectOccludersVisitor::getDistanceFromEyePoint( boost::ref(pos), withLODScale );
        }
    }
    
    float default_getDistanceFromEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        return osg::CollectOccludersVisitor::getDistanceFromEyePoint( boost::ref(pos), withLODScale );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(pos), withLODScale );
        else{
            return this->osg::CollectOccludersVisitor::getDistanceToEyePoint( boost::ref(pos), withLODScale );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        return osg::CollectOccludersVisitor::getDistanceToEyePoint( boost::ref(pos), withLODScale );
    }

    virtual float getDistanceToViewPoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        if( bp::override func_getDistanceToViewPoint = this->get_override( "getDistanceToViewPoint" ) )
            return func_getDistanceToViewPoint( boost::ref(pos), withLODScale );
        else{
            return this->osg::CollectOccludersVisitor::getDistanceToViewPoint( boost::ref(pos), withLODScale );
        }
    }
    
    float default_getDistanceToViewPoint( ::osg::Vec3 const & pos, bool withLODScale ) const  {
        return osg::CollectOccludersVisitor::getDistanceToViewPoint( boost::ref(pos), withLODScale );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::CollectOccludersVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::CollectOccludersVisitor::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osg::CollectOccludersVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osg::CollectOccludersVisitor::reset( );
    }

    virtual void apply( ::osg::Geode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Geode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
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

    virtual void apply( ::osg::LightSource & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LightSource & node ) {
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

    virtual void inheritCullSettings( ::osg::CullSettings const & settings ) {
        if( bp::override func_inheritCullSettings = this->get_override( "inheritCullSettings" ) )
            func_inheritCullSettings( boost::ref(settings) );
        else{
            this->osg::CullSettings::inheritCullSettings( boost::ref(settings) );
        }
    }
    
    void default_inheritCullSettings( ::osg::CullSettings const & settings ) {
        osg::CullSettings::inheritCullSettings( boost::ref(settings) );
    }

    virtual void inheritCullSettings( ::osg::CullSettings const & settings, unsigned int inheritanceMask ) {
        if( bp::override func_inheritCullSettings = this->get_override( "inheritCullSettings" ) )
            func_inheritCullSettings( boost::ref(settings), inheritanceMask );
        else{
            this->osg::CullSettings::inheritCullSettings( boost::ref(settings), inheritanceMask );
        }
    }
    
    void default_inheritCullSettings( ::osg::CullSettings const & settings, unsigned int inheritanceMask ) {
        osg::CullSettings::inheritCullSettings( boost::ref(settings), inheritanceMask );
    }

    virtual void setDefaults(  ) {
        if( bp::override func_setDefaults = this->get_override( "setDefaults" ) )
            func_setDefaults(  );
        else{
            this->osg::CullSettings::setDefaults(  );
        }
    }
    
    void default_setDefaults(  ) {
        osg::CullSettings::setDefaults( );
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

void register_CollectOccludersVisitor_class(){

    bp::class_< CollectOccludersVisitor_wrapper, bp::bases< osg::NodeVisitor >, osg::ref_ptr< CollectOccludersVisitor_wrapper >, boost::noncopyable >( "CollectOccludersVisitor", bp::init< >() )    
        .def( 
            "apply"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::osg::Node & ))(&::osg::CollectOccludersVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Node & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::osg::Transform & ))(&::osg::CollectOccludersVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Transform & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::osg::Projection & ))(&::osg::CollectOccludersVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Projection & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::osg::Switch & ))(&::osg::CollectOccludersVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Switch & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::osg::LOD & ))(&::osg::CollectOccludersVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::LOD & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::osg::OccluderNode & ))(&::osg::CollectOccludersVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::OccluderNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::CollectOccludersVisitor::* )(  )const)(&::osg::CollectOccludersVisitor::className)
            , (char const * ( CollectOccludersVisitor_wrapper::* )(  )const)(&CollectOccludersVisitor_wrapper::default_className) )    
        .def( 
            "cloneType"
            , (::osg::CollectOccludersVisitor * ( ::osg::CollectOccludersVisitor::* )(  )const)(&::osg::CollectOccludersVisitor::cloneType)
            , (::osg::CollectOccludersVisitor * ( CollectOccludersVisitor_wrapper::* )(  )const)(&CollectOccludersVisitor_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getCollectedOccluderSet"
            , (::std::set< osg::ShadowVolumeOccluder > & ( ::osg::CollectOccludersVisitor::* )(  ))( &::osg::CollectOccludersVisitor::getCollectedOccluderSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCollectedOccluderSet"
            , (::std::set< osg::ShadowVolumeOccluder > const & ( ::osg::CollectOccludersVisitor::* )(  )const)( &::osg::CollectOccludersVisitor::getCollectedOccluderSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCreateDrawablesOnOccludeNodes"
            , (bool ( ::osg::CollectOccludersVisitor::* )(  )const)( &::osg::CollectOccludersVisitor::getCreateDrawablesOnOccludeNodes ) )    
        .def( 
            "getDistanceFromEyePoint"
            , (float ( ::osg::CollectOccludersVisitor::* )( ::osg::Vec3 const &,bool )const)(&::osg::CollectOccludersVisitor::getDistanceFromEyePoint)
            , (float ( CollectOccludersVisitor_wrapper::* )( ::osg::Vec3 const &,bool )const)(&CollectOccludersVisitor_wrapper::default_getDistanceFromEyePoint)
            , ( bp::arg("pos"), bp::arg("withLODScale") ) )    
        .def( 
            "getDistanceToEyePoint"
            , (float ( ::osg::CollectOccludersVisitor::* )( ::osg::Vec3 const &,bool )const)(&::osg::CollectOccludersVisitor::getDistanceToEyePoint)
            , (float ( CollectOccludersVisitor_wrapper::* )( ::osg::Vec3 const &,bool )const)(&CollectOccludersVisitor_wrapper::default_getDistanceToEyePoint)
            , ( bp::arg("pos"), bp::arg("withLODScale") ) )    
        .def( 
            "getDistanceToViewPoint"
            , (float ( ::osg::CollectOccludersVisitor::* )( ::osg::Vec3 const &,bool )const)(&::osg::CollectOccludersVisitor::getDistanceToViewPoint)
            , (float ( CollectOccludersVisitor_wrapper::* )( ::osg::Vec3 const &,bool )const)(&CollectOccludersVisitor_wrapper::default_getDistanceToViewPoint)
            , ( bp::arg("pos"), bp::arg("withLODScale") ) )    
        .def( 
            "getMaximumNumberOfActiveOccluders"
            , (unsigned int ( ::osg::CollectOccludersVisitor::* )(  )const)( &::osg::CollectOccludersVisitor::getMaximumNumberOfActiveOccluders ) )    
        .def( 
            "getMinimumShadowOccluderVolume"
            , (float ( ::osg::CollectOccludersVisitor::* )(  )const)( &::osg::CollectOccludersVisitor::getMinimumShadowOccluderVolume ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::CollectOccludersVisitor::* )(  )const)(&::osg::CollectOccludersVisitor::libraryName)
            , (char const * ( CollectOccludersVisitor_wrapper::* )(  )const)(&CollectOccludersVisitor_wrapper::default_libraryName) )    
        .def( 
            "removeOccludedOccluders"
            , (void ( ::osg::CollectOccludersVisitor::* )(  ))( &::osg::CollectOccludersVisitor::removeOccludedOccluders )
            , " Removes occluded occluders for the collected occluders list, then\n discards all but MaximumNumberOfActiveOccluders of occluders,\n discarding the occluders with the lowest shadow occluder volume." )    
        .def( 
            "reset"
            , (void ( ::osg::CollectOccludersVisitor::* )(  ))(&::osg::CollectOccludersVisitor::reset)
            , (void ( CollectOccludersVisitor_wrapper::* )(  ))(&CollectOccludersVisitor_wrapper::default_reset) )    
        .def( 
            "setCollectedOccluderSet"
            , (void ( ::osg::CollectOccludersVisitor::* )( ::std::set< osg::ShadowVolumeOccluder > const & ))( &::osg::CollectOccludersVisitor::setCollectedOccluderSet )
            , ( bp::arg("svol") ) )    
        .def( 
            "setCreateDrawablesOnOccludeNodes"
            , (void ( ::osg::CollectOccludersVisitor::* )( bool ))( &::osg::CollectOccludersVisitor::setCreateDrawablesOnOccludeNodes )
            , ( bp::arg("flag") ) )    
        .def( 
            "setMaximumNumberOfActiveOccluders"
            , (void ( ::osg::CollectOccludersVisitor::* )( unsigned int ))( &::osg::CollectOccludersVisitor::setMaximumNumberOfActiveOccluders )
            , ( bp::arg("num") )
            , " Sets the maximum number of occluders to have active for culling\n purposes." )    
        .def( 
            "setMinimumShadowOccluderVolume"
            , (void ( ::osg::CollectOccludersVisitor::* )( float ))( &::osg::CollectOccludersVisitor::setMinimumShadowOccluderVolume )
            , ( bp::arg("vol") )
            , " Sets the minimum shadow occluder volume that an active occluder\n must have. vol is units relative the clip space volume where 1.0\n is the whole clip space." )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Geode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Geode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Billboard & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Billboard & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Group & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Group & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::ProxyNode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::ProxyNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::CoordinateSystemNode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::CoordinateSystemNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::ClipNode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::ClipNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::TexGenNode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::TexGenNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::LightSource & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::LightSource & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Camera & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Camera & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::CameraView & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::CameraView & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::MatrixTransform & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::MatrixTransform & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::PositionAttitudeTransform & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::PositionAttitudeTransform & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::Sequence & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::Sequence & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::PagedLOD & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::PagedLOD & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::ClearNode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::ClearNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osg::NodeVisitor::* )( ::osg::OcclusionQueryNode & ))(&::osg::NodeVisitor::apply)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::OcclusionQueryNode & ))(&CollectOccludersVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "getEyePoint"
            , (::osg::Vec3 ( ::osg::NodeVisitor::* )(  )const)(&::osg::NodeVisitor::getEyePoint)
            , (::osg::Vec3 ( CollectOccludersVisitor_wrapper::* )(  )const)(&CollectOccludersVisitor_wrapper::default_getEyePoint) )    
        .def( 
            "getViewPoint"
            , (::osg::Vec3 ( ::osg::NodeVisitor::* )(  )const)(&::osg::NodeVisitor::getViewPoint)
            , (::osg::Vec3 ( CollectOccludersVisitor_wrapper::* )(  )const)(&CollectOccludersVisitor_wrapper::default_getViewPoint) )    
        .def( 
            "inheritCullSettings"
            , (void ( ::osg::CullSettings::* )( ::osg::CullSettings const & ))(&::osg::CullSettings::inheritCullSettings)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::CullSettings const & ))(&CollectOccludersVisitor_wrapper::default_inheritCullSettings)
            , ( bp::arg("settings") ) )    
        .def( 
            "inheritCullSettings"
            , (void ( ::osg::CullSettings::* )( ::osg::CullSettings const &,unsigned int ))(&::osg::CullSettings::inheritCullSettings)
            , (void ( CollectOccludersVisitor_wrapper::* )( ::osg::CullSettings const &,unsigned int ))(&CollectOccludersVisitor_wrapper::default_inheritCullSettings)
            , ( bp::arg("settings"), bp::arg("inheritanceMask") ) )    
        .def( 
            "setDefaults"
            , (void ( ::osg::CullSettings::* )(  ))(&::osg::CullSettings::setDefaults)
            , (void ( CollectOccludersVisitor_wrapper::* )(  ))(&CollectOccludersVisitor_wrapper::default_setDefaults) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( CollectOccludersVisitor_wrapper::* )( bool ))(&CollectOccludersVisitor_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}

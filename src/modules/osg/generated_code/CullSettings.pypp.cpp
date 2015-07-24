// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "cullsettings.pypp.hpp"

namespace bp = boost::python;

struct CullSettings_wrapper : osg::CullSettings, bp::wrapper< osg::CullSettings > {

    struct ClampProjectionMatrixCallback_wrapper : osg::CullSettings::ClampProjectionMatrixCallback, bp::wrapper< osg::CullSettings::ClampProjectionMatrixCallback > {
    
        ClampProjectionMatrixCallback_wrapper()
        : osg::CullSettings::ClampProjectionMatrixCallback()
          , bp::wrapper< osg::CullSettings::ClampProjectionMatrixCallback >(){
            // null constructor
            
        }
    
        virtual bool clampProjectionMatrixImplementation( ::osg::Matrixf & projection, double & znear, double & zfar ) const {
            bp::override func_clampProjectionMatrixImplementation = this->get_override( "clampProjectionMatrixImplementation" );
            return func_clampProjectionMatrixImplementation( boost::ref(projection), znear, zfar );
        }
    
        virtual bool clampProjectionMatrixImplementation( ::osg::Matrixd & projection, double & znear, double & zfar ) const {
            bp::override func_clampProjectionMatrixImplementation = this->get_override( "clampProjectionMatrixImplementation" );
            return func_clampProjectionMatrixImplementation( boost::ref(projection), znear, zfar );
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

    CullSettings_wrapper( )
    : osg::CullSettings( )
      , bp::wrapper< osg::CullSettings >(){
        // null constructor
    
    }

    CullSettings_wrapper(::osg::ArgumentParser & arguments )
    : osg::CullSettings( boost::ref(arguments) )
      , bp::wrapper< osg::CullSettings >(){
        // constructor
    
    }

    CullSettings_wrapper(::osg::CullSettings const & cs )
    : osg::CullSettings( boost::ref(cs) )
      , bp::wrapper< osg::CullSettings >(){
        // copy constructor
    
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

};

void register_CullSettings_class(){

    { //::osg::CullSettings
        typedef bp::class_< CullSettings_wrapper > CullSettings_exposer_t;
        CullSettings_exposer_t CullSettings_exposer = CullSettings_exposer_t( "CullSettings", bp::init< >() );
        bp::scope CullSettings_scope( CullSettings_exposer );
        bp::enum_< osg::CullSettings::ComputeNearFarMode>("ComputeNearFarMode")
            .value("DO_NOT_COMPUTE_NEAR_FAR", osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR)
            .value("COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES", osg::CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES)
            .value("COMPUTE_NEAR_FAR_USING_PRIMITIVES", osg::CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES)
            .value("COMPUTE_NEAR_USING_PRIMITIVES", osg::CullSettings::COMPUTE_NEAR_USING_PRIMITIVES)
            .export_values()
            ;
        bp::enum_< osg::CullSettings::CullingModeValues>("CullingModeValues")
            .value("NO_CULLING", osg::CullSettings::NO_CULLING)
            .value("VIEW_FRUSTUM_SIDES_CULLING", osg::CullSettings::VIEW_FRUSTUM_SIDES_CULLING)
            .value("NEAR_PLANE_CULLING", osg::CullSettings::NEAR_PLANE_CULLING)
            .value("FAR_PLANE_CULLING", osg::CullSettings::FAR_PLANE_CULLING)
            .value("VIEW_FRUSTUM_CULLING", osg::CullSettings::VIEW_FRUSTUM_CULLING)
            .value("SMALL_FEATURE_CULLING", osg::CullSettings::SMALL_FEATURE_CULLING)
            .value("SHADOW_OCCLUSION_CULLING", osg::CullSettings::SHADOW_OCCLUSION_CULLING)
            .value("CLUSTER_CULLING", osg::CullSettings::CLUSTER_CULLING)
            .value("DEFAULT_CULLING", osg::CullSettings::DEFAULT_CULLING)
            .value("ENABLE_ALL_CULLING", osg::CullSettings::ENABLE_ALL_CULLING)
            .export_values()
            ;
        bp::enum_< osg::CullSettings::InheritanceMaskActionOnAttributeSetting>("InheritanceMaskActionOnAttributeSetting")
            .value("DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT", osg::CullSettings::DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT)
            .value("DO_NOT_MODIFY_INHERITANCE_MASK", osg::CullSettings::DO_NOT_MODIFY_INHERITANCE_MASK)
            .export_values()
            ;
        bp::enum_< osg::CullSettings::VariablesMask>("VariablesMask")
            .value("COMPUTE_NEAR_FAR_MODE", osg::CullSettings::COMPUTE_NEAR_FAR_MODE)
            .value("CULLING_MODE", osg::CullSettings::CULLING_MODE)
            .value("LOD_SCALE", osg::CullSettings::LOD_SCALE)
            .value("SMALL_FEATURE_CULLING_PIXEL_SIZE", osg::CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE)
            .value("CLAMP_PROJECTION_MATRIX_CALLBACK", osg::CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK)
            .value("NEAR_FAR_RATIO", osg::CullSettings::NEAR_FAR_RATIO)
            .value("IMPOSTOR_ACTIVE", osg::CullSettings::IMPOSTOR_ACTIVE)
            .value("DEPTH_SORT_IMPOSTOR_SPRITES", osg::CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES)
            .value("IMPOSTOR_PIXEL_ERROR_THRESHOLD", osg::CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD)
            .value("NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES", osg::CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES)
            .value("CULL_MASK", osg::CullSettings::CULL_MASK)
            .value("CULL_MASK_LEFT", osg::CullSettings::CULL_MASK_LEFT)
            .value("CULL_MASK_RIGHT", osg::CullSettings::CULL_MASK_RIGHT)
            .value("CLEAR_COLOR", osg::CullSettings::CLEAR_COLOR)
            .value("CLEAR_MASK", osg::CullSettings::CLEAR_MASK)
            .value("LIGHTING_MODE", osg::CullSettings::LIGHTING_MODE)
            .value("LIGHT", osg::CullSettings::LIGHT)
            .value("DRAW_BUFFER", osg::CullSettings::DRAW_BUFFER)
            .value("READ_BUFFER", osg::CullSettings::READ_BUFFER)
            .value("NO_VARIABLES", osg::CullSettings::NO_VARIABLES)
            .value("ALL_VARIABLES", osg::CullSettings::ALL_VARIABLES)
            .export_values()
            ;
        bp::class_< CullSettings_wrapper::ClampProjectionMatrixCallback_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< CullSettings_wrapper::ClampProjectionMatrixCallback_wrapper >, boost::noncopyable >( "ClampProjectionMatrixCallback", "\n Callback for overriding the CullVisitors default clamping of the projection matrix to computed near and far values.\n Note, both Matrixf and Matrixd versions of clampProjectionMatrixImplementation must be implemented as the CullVisitor\n can target either Matrix data type, configured at compile time.\n", bp::no_init )    
            .def( 
                "clampProjectionMatrixImplementation"
                , bp::pure_virtual( (bool ( ::osg::CullSettings::ClampProjectionMatrixCallback::* )( ::osg::Matrixf &,double &,double & )const)(&::osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation) )
                , ( bp::arg("projection"), bp::arg("znear"), bp::arg("zfar") )
                , "\n Callback for overriding the CullVisitors default clamping of the projection matrix to computed near and far values.\n Note, both Matrixf and Matrixd versions of clampProjectionMatrixImplementation must be implemented as the CullVisitor\n can target either Matrix data type, configured at compile time.\n" )    
            .def( 
                "clampProjectionMatrixImplementation"
                , bp::pure_virtual( (bool ( ::osg::CullSettings::ClampProjectionMatrixCallback::* )( ::osg::Matrixd &,double &,double & )const)(&::osg::CullSettings::ClampProjectionMatrixCallback::clampProjectionMatrixImplementation) )
                , ( bp::arg("projection"), bp::arg("znear"), bp::arg("zfar") ) )    
            .def( 
                "setThreadSafeRefUnref"
                , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
                , (void ( CullSettings_wrapper::ClampProjectionMatrixCallback_wrapper::* )( bool ))(&CullSettings_wrapper::ClampProjectionMatrixCallback_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        CullSettings_exposer.def( bp::init< osg::ArgumentParser & >(( bp::arg("arguments") )) );
        bp::implicitly_convertible< osg::ArgumentParser &, osg::CullSettings >();
        CullSettings_exposer.def( bp::init< osg::CullSettings const & >(( bp::arg("cs") )) );
        { //::osg::CullSettings::applyMaskAction
        
            typedef void ( ::osg::CullSettings::*applyMaskAction_function_type)( unsigned int ) ;
            
            CullSettings_exposer.def( 
                "applyMaskAction"
                , applyMaskAction_function_type( &::osg::CullSettings::applyMaskAction )
                , ( bp::arg("maskBit") )
                , " Apply the action, specified by the InheritanceMaskActionOnAttributeSetting, to apply to the inheritance bit mask.\n This method is called by CullSettings::set*() parameter methods to ensure that CullSettings inheritance mechanisms doesnt overwrite the local parameter settings." );
        
        }
        { //::osg::CullSettings::getClampProjectionMatrixCallback
        
            typedef ::osg::CullSettings::ClampProjectionMatrixCallback * ( ::osg::CullSettings::*getClampProjectionMatrixCallback_function_type)(  ) ;
            
            CullSettings_exposer.def( 
                "getClampProjectionMatrixCallback"
                , getClampProjectionMatrixCallback_function_type( &::osg::CullSettings::getClampProjectionMatrixCallback )
                , bp::return_internal_reference< >()
                , " get the non const ClampProjectionMatrixCallback." );
        
        }
        { //::osg::CullSettings::getClampProjectionMatrixCallback
        
            typedef ::osg::CullSettings::ClampProjectionMatrixCallback const * ( ::osg::CullSettings::*getClampProjectionMatrixCallback_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getClampProjectionMatrixCallback"
                , getClampProjectionMatrixCallback_function_type( &::osg::CullSettings::getClampProjectionMatrixCallback )
                , bp::return_internal_reference< >()
                , " get the const ClampProjectionMatrixCallback." );
        
        }
        { //::osg::CullSettings::getComputeNearFarMode
        
            typedef ::osg::CullSettings::ComputeNearFarMode ( ::osg::CullSettings::*getComputeNearFarMode_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getComputeNearFarMode"
                , getComputeNearFarMode_function_type( &::osg::CullSettings::getComputeNearFarMode ) );
        
        }
        { //::osg::CullSettings::getCullMask
        
            typedef unsigned int ( ::osg::CullSettings::*getCullMask_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getCullMask"
                , getCullMask_function_type( &::osg::CullSettings::getCullMask ) );
        
        }
        { //::osg::CullSettings::getCullMaskLeft
        
            typedef unsigned int ( ::osg::CullSettings::*getCullMaskLeft_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getCullMaskLeft"
                , getCullMaskLeft_function_type( &::osg::CullSettings::getCullMaskLeft ) );
        
        }
        { //::osg::CullSettings::getCullMaskRight
        
            typedef unsigned int ( ::osg::CullSettings::*getCullMaskRight_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getCullMaskRight"
                , getCullMaskRight_function_type( &::osg::CullSettings::getCullMaskRight ) );
        
        }
        { //::osg::CullSettings::getCullingMode
        
            typedef int ( ::osg::CullSettings::*getCullingMode_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getCullingMode"
                , getCullingMode_function_type( &::osg::CullSettings::getCullingMode )
                , " Returns the current CullingMode." );
        
        }
        { //::osg::CullSettings::getDepthSortImpostorSprites
        
            typedef bool ( ::osg::CullSettings::*getDepthSortImpostorSprites_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getDepthSortImpostorSprites"
                , getDepthSortImpostorSprites_function_type( &::osg::CullSettings::getDepthSortImpostorSprites )
                , " Get whether ImpostorSprites are depth sorted bin for rendering." );
        
        }
        { //::osg::CullSettings::getImpostorPixelErrorThreshold
        
            typedef float ( ::osg::CullSettings::*getImpostorPixelErrorThreshold_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getImpostorPixelErrorThreshold"
                , getImpostorPixelErrorThreshold_function_type( &::osg::CullSettings::getImpostorPixelErrorThreshold )
                , " Get the impostor error threshold." );
        
        }
        { //::osg::CullSettings::getImpostorsActive
        
            typedef bool ( ::osg::CullSettings::*getImpostorsActive_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getImpostorsActive"
                , getImpostorsActive_function_type( &::osg::CullSettings::getImpostorsActive )
                , " Get whether impostors are active or not." );
        
        }
        { //::osg::CullSettings::getInheritanceMask
        
            typedef int ( ::osg::CullSettings::*getInheritanceMask_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getInheritanceMask"
                , getInheritanceMask_function_type( &::osg::CullSettings::getInheritanceMask )
                , " Get the inheritance mask used in inheritCullSettings to control which variables get overwritten by the passed in CullSettings object." );
        
        }
        { //::osg::CullSettings::getInheritanceMaskActionOnAttributeSetting
        
            typedef ::osg::CullSettings::InheritanceMaskActionOnAttributeSetting ( ::osg::CullSettings::*getInheritanceMaskActionOnAttributeSetting_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getInheritanceMaskActionOnAttributeSetting"
                , getInheritanceMaskActionOnAttributeSetting_function_type( &::osg::CullSettings::getInheritanceMaskActionOnAttributeSetting ) );
        
        }
        { //::osg::CullSettings::getLODScale
        
            typedef float ( ::osg::CullSettings::*getLODScale_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getLODScale"
                , getLODScale_function_type( &::osg::CullSettings::getLODScale )
                , " Get the LOD bias." );
        
        }
        { //::osg::CullSettings::getNearFarRatio
        
            typedef double ( ::osg::CullSettings::*getNearFarRatio_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getNearFarRatio"
                , getNearFarRatio_function_type( &::osg::CullSettings::getNearFarRatio ) );
        
        }
        { //::osg::CullSettings::getNumberOfFrameToKeepImpostorSprites
        
            typedef int ( ::osg::CullSettings::*getNumberOfFrameToKeepImpostorSprites_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getNumberOfFrameToKeepImpostorSprites"
                , getNumberOfFrameToKeepImpostorSprites_function_type( &::osg::CullSettings::getNumberOfFrameToKeepImpostorSprites )
                , " Get the number of frames that an ImpostorSprite is kept whilst not being beyond,\n before being recycled." );
        
        }
        { //::osg::CullSettings::getSmallFeatureCullingPixelSize
        
            typedef float ( ::osg::CullSettings::*getSmallFeatureCullingPixelSize_function_type)(  ) const;
            
            CullSettings_exposer.def( 
                "getSmallFeatureCullingPixelSize"
                , getSmallFeatureCullingPixelSize_function_type( &::osg::CullSettings::getSmallFeatureCullingPixelSize )
                , " Get the Small Feature Culling Pixel Size." );
        
        }
        { //::osg::CullSettings::inheritCullSettings
        
            typedef void ( ::osg::CullSettings::*inheritCullSettings_function_type)( ::osg::CullSettings const & ) ;
            typedef void ( CullSettings_wrapper::*default_inheritCullSettings_function_type)( ::osg::CullSettings const & ) ;
            
            CullSettings_exposer.def( 
                "inheritCullSettings"
                , inheritCullSettings_function_type(&::osg::CullSettings::inheritCullSettings)
                , default_inheritCullSettings_function_type(&CullSettings_wrapper::default_inheritCullSettings)
                , ( bp::arg("settings") ) );
        
        }
        { //::osg::CullSettings::inheritCullSettings
        
            typedef void ( ::osg::CullSettings::*inheritCullSettings_function_type)( ::osg::CullSettings const &,unsigned int ) ;
            typedef void ( CullSettings_wrapper::*default_inheritCullSettings_function_type)( ::osg::CullSettings const &,unsigned int ) ;
            
            CullSettings_exposer.def( 
                "inheritCullSettings"
                , inheritCullSettings_function_type(&::osg::CullSettings::inheritCullSettings)
                , default_inheritCullSettings_function_type(&CullSettings_wrapper::default_inheritCullSettings)
                , ( bp::arg("settings"), bp::arg("inheritanceMask") ) );
        
        }
        { //::osg::CullSettings::operator=
        
            typedef ::osg::CullSettings & ( ::osg::CullSettings::*assign_function_type)( ::osg::CullSettings const & ) ;
            
            CullSettings_exposer.def( 
                "assign"
                , assign_function_type( &::osg::CullSettings::operator= )
                , ( bp::arg("settings") )
                , bp::return_self< >() );
        
        }
        { //::osg::CullSettings::readCommandLine
        
            typedef void ( ::osg::CullSettings::*readCommandLine_function_type)( ::osg::ArgumentParser & ) ;
            
            CullSettings_exposer.def( 
                "readCommandLine"
                , readCommandLine_function_type( &::osg::CullSettings::readCommandLine )
                , ( bp::arg("arguments") )
                , " read the commandline arguments." );
        
        }
        { //::osg::CullSettings::readEnvironmentalVariables
        
            typedef void ( ::osg::CullSettings::*readEnvironmentalVariables_function_type)(  ) ;
            
            CullSettings_exposer.def( 
                "readEnvironmentalVariables"
                , readEnvironmentalVariables_function_type( &::osg::CullSettings::readEnvironmentalVariables )
                , " read the environmental variables." );
        
        }
        { //::osg::CullSettings::setClampProjectionMatrixCallback
        
            typedef void ( ::osg::CullSettings::*setClampProjectionMatrixCallback_function_type)( ::osg::CullSettings::ClampProjectionMatrixCallback * ) ;
            
            CullSettings_exposer.def( 
                "setClampProjectionMatrixCallback"
                , setClampProjectionMatrixCallback_function_type( &::osg::CullSettings::setClampProjectionMatrixCallback )
                , ( bp::arg("cpmc") )
                , " set the ClampProjectionMatrixCallback." );
        
        }
        { //::osg::CullSettings::setComputeNearFarMode
        
            typedef void ( ::osg::CullSettings::*setComputeNearFarMode_function_type)( ::osg::CullSettings::ComputeNearFarMode ) ;
            
            CullSettings_exposer.def( 
                "setComputeNearFarMode"
                , setComputeNearFarMode_function_type( &::osg::CullSettings::setComputeNearFarMode )
                , ( bp::arg("cnfm") ) );
        
        }
        { //::osg::CullSettings::setCullMask
        
            typedef void ( ::osg::CullSettings::*setCullMask_function_type)( unsigned int ) ;
            
            CullSettings_exposer.def( 
                "setCullMask"
                , setCullMask_function_type( &::osg::CullSettings::setCullMask )
                , ( bp::arg("nm") ) );
        
        }
        { //::osg::CullSettings::setCullMaskLeft
        
            typedef void ( ::osg::CullSettings::*setCullMaskLeft_function_type)( unsigned int ) ;
            
            CullSettings_exposer.def( 
                "setCullMaskLeft"
                , setCullMaskLeft_function_type( &::osg::CullSettings::setCullMaskLeft )
                , ( bp::arg("nm") ) );
        
        }
        { //::osg::CullSettings::setCullMaskRight
        
            typedef void ( ::osg::CullSettings::*setCullMaskRight_function_type)( unsigned int ) ;
            
            CullSettings_exposer.def( 
                "setCullMaskRight"
                , setCullMaskRight_function_type( &::osg::CullSettings::setCullMaskRight )
                , ( bp::arg("nm") ) );
        
        }
        { //::osg::CullSettings::setCullSettings
        
            typedef void ( ::osg::CullSettings::*setCullSettings_function_type)( ::osg::CullSettings const & ) ;
            
            CullSettings_exposer.def( 
                "setCullSettings"
                , setCullSettings_function_type( &::osg::CullSettings::setCullSettings )
                , ( bp::arg("settings") )
                , " Set the local cull settings values from specified CullSettings object." );
        
        }
        { //::osg::CullSettings::setCullingMode
        
            typedef void ( ::osg::CullSettings::*setCullingMode_function_type)( int ) ;
            
            CullSettings_exposer.def( 
                "setCullingMode"
                , setCullingMode_function_type( &::osg::CullSettings::setCullingMode )
                , ( bp::arg("mode") )
                , " Set the culling mode for the CullVisitor to use." );
        
        }
        { //::osg::CullSettings::setDefaults
        
            typedef void ( ::osg::CullSettings::*setDefaults_function_type)(  ) ;
            typedef void ( CullSettings_wrapper::*default_setDefaults_function_type)(  ) ;
            
            CullSettings_exposer.def( 
                "setDefaults"
                , setDefaults_function_type(&::osg::CullSettings::setDefaults)
                , default_setDefaults_function_type(&CullSettings_wrapper::default_setDefaults) );
        
        }
        { //::osg::CullSettings::setDepthSortImpostorSprites
        
            typedef void ( ::osg::CullSettings::*setDepthSortImpostorSprites_function_type)( bool ) ;
            
            CullSettings_exposer.def( 
                "setDepthSortImpostorSprites"
                , setDepthSortImpostorSprites_function_type( &::osg::CullSettings::setDepthSortImpostorSprites )
                , ( bp::arg("doDepthSort") )
                , " Set whether ImpostorSprites should be placed in a depth sorted bin for rendering." );
        
        }
        { //::osg::CullSettings::setImpostorPixelErrorThreshold
        
            typedef void ( ::osg::CullSettings::*setImpostorPixelErrorThreshold_function_type)( float ) ;
            
            CullSettings_exposer.def( 
                "setImpostorPixelErrorThreshold"
                , setImpostorPixelErrorThreshold_function_type( &::osg::CullSettings::setImpostorPixelErrorThreshold )
                , ( bp::arg("numPixels") )
                , " Set the impostor error threshold.\n Used in calculation of whether impostors remain valid." );
        
        }
        { //::osg::CullSettings::setImpostorsActive
        
            typedef void ( ::osg::CullSettings::*setImpostorsActive_function_type)( bool ) ;
            
            CullSettings_exposer.def( 
                "setImpostorsActive"
                , setImpostorsActive_function_type( &::osg::CullSettings::setImpostorsActive )
                , ( bp::arg("active") )
                , " Switch the creation of Impostors on or off.\n Setting active to false forces the CullVisitor to use the Impostor\n LOD children for rendering. Setting active to true forces the\n CullVisitor to create the appropriate pre-rendering stages which\n render to the ImpostorSprites texture." );
        
        }
        { //::osg::CullSettings::setInheritanceMask
        
            typedef void ( ::osg::CullSettings::*setInheritanceMask_function_type)( int ) ;
            
            CullSettings_exposer.def( 
                "setInheritanceMask"
                , setInheritanceMask_function_type( &::osg::CullSettings::setInheritanceMask )
                , ( bp::arg("mask") )
                , " Set the inheritance mask used in inheritCullSettings to control which variables get overwritten by the passed in CullSettings object." );
        
        }
        { //::osg::CullSettings::setInheritanceMaskActionOnAttributeSetting
        
            typedef void ( ::osg::CullSettings::*setInheritanceMaskActionOnAttributeSetting_function_type)( ::osg::CullSettings::InheritanceMaskActionOnAttributeSetting ) ;
            
            CullSettings_exposer.def( 
                "setInheritanceMaskActionOnAttributeSetting"
                , setInheritanceMaskActionOnAttributeSetting_function_type( &::osg::CullSettings::setInheritanceMaskActionOnAttributeSetting )
                , ( bp::arg("action") ) );
        
        }
        { //::osg::CullSettings::setLODScale
        
            typedef void ( ::osg::CullSettings::*setLODScale_function_type)( float ) ;
            
            CullSettings_exposer.def( 
                "setLODScale"
                , setLODScale_function_type( &::osg::CullSettings::setLODScale )
                , ( bp::arg("scale") )
                , " Set the LOD bias for the CullVisitor to use." );
        
        }
        { //::osg::CullSettings::setNearFarRatio
        
            typedef void ( ::osg::CullSettings::*setNearFarRatio_function_type)( double ) ;
            
            CullSettings_exposer.def( 
                "setNearFarRatio"
                , setNearFarRatio_function_type( &::osg::CullSettings::setNearFarRatio )
                , ( bp::arg("ratio") ) );
        
        }
        { //::osg::CullSettings::setNumberOfFrameToKeepImpostorSprites
        
            typedef void ( ::osg::CullSettings::*setNumberOfFrameToKeepImpostorSprites_function_type)( int ) ;
            
            CullSettings_exposer.def( 
                "setNumberOfFrameToKeepImpostorSprites"
                , setNumberOfFrameToKeepImpostorSprites_function_type( &::osg::CullSettings::setNumberOfFrameToKeepImpostorSprites )
                , ( bp::arg("numFrames") )
                , " Set the number of frames that an ImpostorSprite is kept whilst not being beyond,\n before being recycled." );
        
        }
        { //::osg::CullSettings::setSmallFeatureCullingPixelSize
        
            typedef void ( ::osg::CullSettings::*setSmallFeatureCullingPixelSize_function_type)( float ) ;
            
            CullSettings_exposer.def( 
                "setSmallFeatureCullingPixelSize"
                , setSmallFeatureCullingPixelSize_function_type( &::osg::CullSettings::setSmallFeatureCullingPixelSize )
                , ( bp::arg("value") )
                , " Threshold at which small features are culled.\n        @param value: Boulding volume size in screen space. Default is 2.0." );
        
        }
        { //::osg::CullSettings::write
        
            typedef void ( ::osg::CullSettings::*write_function_type)( ::std::ostream & ) ;
            
            CullSettings_exposer.def( 
                "write"
                , write_function_type( &::osg::CullSettings::write )
                , ( bp::arg("out") )
                , " Write out internal settings of CullSettings." );
        
        }
    }

}

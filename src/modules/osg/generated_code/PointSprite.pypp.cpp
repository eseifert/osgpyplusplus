// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "pointsprite.pypp.hpp"

namespace bp = boost::python;

struct PointSprite_wrapper : osg::PointSprite, bp::wrapper< osg::PointSprite > {

    PointSprite_wrapper( )
    : osg::PointSprite( )
      , bp::wrapper< osg::PointSprite >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::PointSprite::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::PointSprite::apply( boost::ref(state) );
    }

    virtual bool checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        if( bp::override func_checkValidityOfAssociatedModes = this->get_override( "checkValidityOfAssociatedModes" ) )
            return func_checkValidityOfAssociatedModes( boost::ref(arg0) );
        else{
            return this->osg::PointSprite::checkValidityOfAssociatedModes( boost::ref(arg0) );
        }
    }
    
    bool default_checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        return osg::PointSprite::checkValidityOfAssociatedModes( boost::ref(arg0) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::PointSprite::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::PointSprite::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::PointSprite::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::PointSprite::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::PointSprite::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::PointSprite::cloneType( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::PointSprite::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::PointSprite::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::PointSprite::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::PointSprite::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::PointSprite::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::PointSprite::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual bool isTextureAttribute(  ) const  {
        if( bp::override func_isTextureAttribute = this->get_override( "isTextureAttribute" ) )
            return func_isTextureAttribute(  );
        else{
            return this->osg::PointSprite::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::PointSprite::isTextureAttribute( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::PointSprite::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::PointSprite::libraryName( );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::StateAttribute::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::StateAttribute::asTexture( );
    }

    virtual void compileGLObjects( ::osg::State & arg0 ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(arg0) );
        else{
            this->osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & arg0 ) const  {
        osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
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

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::StateAttribute::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::StateAttribute::getMember( );
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
            this->osg::StateAttribute::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::StateAttribute::resizeGLObjectBuffers( arg0 );
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

void register_PointSprite_class(){

    { //::osg::PointSprite
        typedef bp::class_< PointSprite_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::PointSprite >, boost::noncopyable > PointSprite_exposer_t;
        PointSprite_exposer_t PointSprite_exposer = PointSprite_exposer_t( "PointSprite", "\n PointSprite base class which encapsulates enabling of point sprites .\n", bp::no_init );
        bp::scope PointSprite_scope( PointSprite_exposer );
        bp::enum_< osg::PointSprite::CoordOriginMode>("CoordOriginMode")
            .value("UPPER_LEFT", osg::PointSprite::UPPER_LEFT)
            .value("LOWER_LEFT", osg::PointSprite::LOWER_LEFT)
            .export_values()
            ;
        PointSprite_exposer.def( bp::init< >("\n PointSprite base class which encapsulates enabling of point sprites .\n") );
        { //::osg::PointSprite::apply
        
            typedef void ( ::osg::PointSprite::*apply_function_type )( ::osg::State & ) const;
            typedef void ( PointSprite_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            PointSprite_exposer.def( 
                "apply"
                , apply_function_type(&::osg::PointSprite::apply)
                , default_apply_function_type(&PointSprite_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::PointSprite::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::PointSprite::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( PointSprite_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            PointSprite_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::PointSprite::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&PointSprite_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::PointSprite::className
        
            typedef char const * ( ::osg::PointSprite::*className_function_type )(  ) const;
            typedef char const * ( PointSprite_wrapper::*default_className_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "className"
                , className_function_type(&::osg::PointSprite::className)
                , default_className_function_type(&PointSprite_wrapper::default_className) );
        
        }
        { //::osg::PointSprite::clone
        
            typedef ::osg::Object * ( ::osg::PointSprite::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( PointSprite_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            PointSprite_exposer.def( 
                "clone"
                , clone_function_type(&::osg::PointSprite::clone)
                , default_clone_function_type(&PointSprite_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::PointSprite::cloneType
        
            typedef ::osg::Object * ( ::osg::PointSprite::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( PointSprite_wrapper::*default_cloneType_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::PointSprite::cloneType)
                , default_cloneType_function_type(&PointSprite_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::PointSprite::getCoordOriginMode
        
            typedef ::osg::PointSprite::CoordOriginMode ( ::osg::PointSprite::*getCoordOriginMode_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "getCoordOriginMode"
                , getCoordOriginMode_function_type( &::osg::PointSprite::getCoordOriginMode ) );
        
        }
        { //::osg::PointSprite::getModeUsage
        
            typedef bool ( ::osg::PointSprite::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( PointSprite_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            PointSprite_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::PointSprite::getModeUsage)
                , default_getModeUsage_function_type(&PointSprite_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::PointSprite::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::PointSprite::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( PointSprite_wrapper::*default_getType_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "getType"
                , getType_function_type(&::osg::PointSprite::getType)
                , default_getType_function_type(&PointSprite_wrapper::default_getType) );
        
        }
        { //::osg::PointSprite::isPointSpriteSupported
        
            typedef bool ( *isPointSpriteSupported_function_type )( unsigned int );
            
            PointSprite_exposer.def( 
                "isPointSpriteSupported"
                , isPointSpriteSupported_function_type( &::osg::PointSprite::isPointSpriteSupported )
                , ( bp::arg("context") ) );
        
        }
        { //::osg::PointSprite::isSameKindAs
        
            typedef bool ( ::osg::PointSprite::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( PointSprite_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            PointSprite_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::PointSprite::isSameKindAs)
                , default_isSameKindAs_function_type(&PointSprite_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::PointSprite::isTextureAttribute
        
            typedef bool ( ::osg::PointSprite::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( PointSprite_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::PointSprite::isTextureAttribute)
                , default_isTextureAttribute_function_type(&PointSprite_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::PointSprite::libraryName
        
            typedef char const * ( ::osg::PointSprite::*libraryName_function_type )(  ) const;
            typedef char const * ( PointSprite_wrapper::*default_libraryName_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::PointSprite::libraryName)
                , default_libraryName_function_type(&PointSprite_wrapper::default_libraryName) );
        
        }
        { //::osg::PointSprite::setCoordOriginMode
        
            typedef void ( ::osg::PointSprite::*setCoordOriginMode_function_type )( ::osg::PointSprite::CoordOriginMode ) ;
            
            PointSprite_exposer.def( 
                "setCoordOriginMode"
                , setCoordOriginMode_function_type( &::osg::PointSprite::setCoordOriginMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( PointSprite_wrapper::*default_asTexture_function_type )(  ) ;
            
            PointSprite_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&PointSprite_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( PointSprite_wrapper::*default_asTexture_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&PointSprite_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( PointSprite_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            PointSprite_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&PointSprite_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type )(  ) ;
            typedef void ( PointSprite_wrapper::*default_computeDataVariance_function_type )(  ) ;
            
            PointSprite_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&PointSprite_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( PointSprite_wrapper::*default_getMember_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&PointSprite_wrapper::default_getMember) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type )(  ) ;
            typedef ::osg::Referenced * ( PointSprite_wrapper::*default_getUserData_function_type )(  ) ;
            
            PointSprite_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&PointSprite_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type )(  ) const;
            typedef ::osg::Referenced const * ( PointSprite_wrapper::*default_getUserData_function_type )(  ) const;
            
            PointSprite_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&PointSprite_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( PointSprite_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            PointSprite_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&PointSprite_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( ::std::string const & ) ;
            typedef void ( PointSprite_wrapper::*default_setName_function_type )( ::std::string const & ) ;
            
            PointSprite_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&PointSprite_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( char const * ) ;
            
            PointSprite_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( PointSprite_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            PointSprite_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&PointSprite_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type )( ::osg::Referenced * ) ;
            typedef void ( PointSprite_wrapper::*default_setUserData_function_type )( ::osg::Referenced * ) ;
            
            PointSprite_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&PointSprite_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        PointSprite_exposer.staticmethod( "isPointSpriteSupported" );
    }

}
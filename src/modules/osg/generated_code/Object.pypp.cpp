// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "object.pypp.hpp"

namespace bp = boost::python;

struct Object_wrapper : osg::Object, bp::wrapper< osg::Object > {

    Object_wrapper( )
    : osg::Object( )
      , bp::wrapper< osg::Object >(){
        // null constructor
    
    }

    Object_wrapper(bool threadSafeRefUnref )
    : osg::Object( threadSafeRefUnref )
      , bp::wrapper< osg::Object >(){
        // constructor
    
    }

    virtual char const * className(  ) const {
        bp::override func_className = this->get_override( "className" );
        return func_className(  );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
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

    virtual bool isSameKindAs( ::osg::Object const * arg0 ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(arg0) );
        else{
            return this->osg::Object::isSameKindAs( boost::python::ptr(arg0) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * arg0 ) const  {
        return osg::Object::isSameKindAs( boost::python::ptr(arg0) );
    }

    virtual char const * libraryName(  ) const {
        bp::override func_libraryName = this->get_override( "libraryName" );
        return func_libraryName(  );
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

// Tell boost::python that osg::ref_ptr is a smart pointer class
            namespace boost { namespace python {
              template <class T> struct pointee< osg::ref_ptr<T> >
              { typedef T type; };
            } } // namespace boost::python

void register_Object_class(){

    { //::osg::Object
        typedef bp::class_< Object_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< Object_wrapper >, boost::noncopyable > Object_exposer_t;
        Object_exposer_t Object_exposer = Object_exposer_t( "Object", bp::no_init );
        bp::scope Object_scope( Object_exposer );
        bp::enum_< osg::Object::DataVariance>("DataVariance")
            .value("DYNAMIC", osg::Object::DYNAMIC)
            .value("STATIC", osg::Object::STATIC)
            .value("UNSPECIFIED", osg::Object::UNSPECIFIED)
            .export_values()
            ;
        Object_exposer.def( bp::init< >() );
        Object_exposer.def( bp::init< bool >(( bp::arg("threadSafeRefUnref") )) );
        { //::osg::Object::className
        
            typedef char const * ( ::osg::Object::*className_function_type)(  ) const;
            
            Object_exposer.def( 
                "className"
                , bp::pure_virtual( className_function_type(&::osg::Object::className) ) );
        
        }
        { //::osg::Object::clone
        
            typedef ::osg::Object * ( ::osg::Object::*clone_function_type)( ::osg::CopyOp const & ) const;
            
            Object_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::osg::Object::clone) )
                , ( bp::arg("arg0") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Object::cloneType
        
            typedef ::osg::Object * ( ::osg::Object::*cloneType_function_type)(  ) const;
            
            Object_exposer.def( 
                "cloneType"
                , bp::pure_virtual( cloneType_function_type(&::osg::Object::cloneType) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( Object_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            Object_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&Object_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getDataVariance
        
            typedef ::osg::Object::DataVariance ( ::osg::Object::*getDataVariance_function_type)(  ) const;
            
            Object_exposer.def( 
                "getDataVariance"
                , getDataVariance_function_type( &::osg::Object::getDataVariance ) );
        
        }
        { //::osg::Object::getName
        
            typedef ::std::string const & ( ::osg::Object::*getName_function_type)(  ) const;
            
            Object_exposer.def( 
                "getName"
                , getName_function_type( &::osg::Object::getName )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getOrCreateUserDataContainer
        
            typedef ::osg::UserDataContainer * ( ::osg::Object::*getOrCreateUserDataContainer_function_type)(  ) ;
            
            Object_exposer.def( 
                "getOrCreateUserDataContainer"
                , getOrCreateUserDataContainer_function_type( &::osg::Object::getOrCreateUserDataContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( Object_wrapper::*default_getUserData_function_type)(  ) ;
            
            Object_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Object_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( Object_wrapper::*default_getUserData_function_type)(  ) const;
            
            Object_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Object_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserDataContainer
        
            typedef ::osg::UserDataContainer * ( ::osg::Object::*getUserDataContainer_function_type)(  ) ;
            
            Object_exposer.def( 
                "getUserDataContainer"
                , getUserDataContainer_function_type( &::osg::Object::getUserDataContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserDataContainer
        
            typedef ::osg::UserDataContainer const * ( ::osg::Object::*getUserDataContainer_function_type)(  ) const;
            
            Object_exposer.def( 
                "getUserDataContainer"
                , getUserDataContainer_function_type( &::osg::Object::getUserDataContainer )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::isSameKindAs
        
            typedef bool ( ::osg::Object::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( Object_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            Object_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Object::isSameKindAs)
                , default_isSameKindAs_function_type(&Object_wrapper::default_isSameKindAs)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::libraryName
        
            typedef char const * ( ::osg::Object::*libraryName_function_type)(  ) const;
            
            Object_exposer.def( 
                "libraryName"
                , bp::pure_virtual( libraryName_function_type(&::osg::Object::libraryName) ) );
        
        }
        { //::osg::Object::resizeGLObjectBuffers
        
            typedef void ( ::osg::Object::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( Object_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            Object_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Object::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Object_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setDataVariance
        
            typedef void ( ::osg::Object::*setDataVariance_function_type)( ::osg::Object::DataVariance ) ;
            
            Object_exposer.def( 
                "setDataVariance"
                , setDataVariance_function_type( &::osg::Object::setDataVariance )
                , ( bp::arg("dv") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( Object_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            Object_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&Object_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            Object_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( Object_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            Object_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&Object_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( Object_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            Object_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&Object_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Object::setUserDataContainer
        
            typedef void ( ::osg::Object::*setUserDataContainer_function_type)( ::osg::UserDataContainer * ) ;
            
            Object_exposer.def( 
                "setUserDataContainer"
                , setUserDataContainer_function_type( &::osg::Object::setUserDataContainer )
                , ( bp::arg("udc") ) );
        
        }
    }

}

// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "refmatrixf.pypp.hpp"

namespace bp = boost::python;

struct RefMatrixf_wrapper : osg::RefMatrixf, bp::wrapper< osg::RefMatrixf > {

    RefMatrixf_wrapper( )
    : osg::RefMatrixf( )
      , bp::wrapper< osg::RefMatrixf >(){
        // null constructor
    
    }

    RefMatrixf_wrapper(::osg::Matrixf const & other )
    : osg::RefMatrixf( boost::ref(other) )
      , bp::wrapper< osg::RefMatrixf >(){
        // constructor
    
    }

    RefMatrixf_wrapper(::osg::Matrixd const & other )
    : osg::RefMatrixf( boost::ref(other) )
      , bp::wrapper< osg::RefMatrixf >(){
        // constructor
    
    }

    RefMatrixf_wrapper(float const * const def )
    : osg::RefMatrixf( def )
      , bp::wrapper< osg::RefMatrixf >(){
        // constructor
    
    }

    RefMatrixf_wrapper(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33 )
    : osg::RefMatrixf( a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33 )
      , bp::wrapper< osg::RefMatrixf >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::RefMatrixf::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::RefMatrixf::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(arg0) );
        else{
            return this->osg::RefMatrixf::clone( boost::ref(arg0) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & arg0 ) const  {
        return osg::RefMatrixf::clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::RefMatrixf::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::RefMatrixf::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::RefMatrixf::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::RefMatrixf::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::RefMatrixf::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::RefMatrixf::libraryName( );
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

// Tell boost::python that osg::ref_ptr is a smart pointer class
            namespace boost { namespace python {
              template <class T> struct pointee< osg::ref_ptr<T> >
              { typedef T type; };
            } } // namespace boost::python

void register_RefMatrixf_class(){

    { //::osg::RefMatrixf
        typedef bp::class_< RefMatrixf_wrapper, bp::bases< osg::Object, osg::Matrixf >, osg::ref_ptr< RefMatrixf_wrapper > > RefMatrixf_exposer_t;
        RefMatrixf_exposer_t RefMatrixf_exposer = RefMatrixf_exposer_t( "RefMatrixf", bp::no_init );
        bp::scope RefMatrixf_scope( RefMatrixf_exposer );
        RefMatrixf_exposer.def( bp::init< >() );
        RefMatrixf_exposer.def( bp::init< osg::Matrixf const & >(( bp::arg("other") )) );
        bp::implicitly_convertible< osg::Matrixf const &, osg::RefMatrixf >();
        RefMatrixf_exposer.def( bp::init< osg::Matrixd const & >(( bp::arg("other") )) );
        bp::implicitly_convertible< osg::Matrixd const &, osg::RefMatrixf >();
        RefMatrixf_exposer.def( bp::init< float const * >(( bp::arg("def") )) );
        bp::implicitly_convertible< float const * const, osg::RefMatrixf >();
        RefMatrixf_exposer.def( bp::init< float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float >(( bp::arg("a00"), bp::arg("a01"), bp::arg("a02"), bp::arg("a03"), bp::arg("a10"), bp::arg("a11"), bp::arg("a12"), bp::arg("a13"), bp::arg("a20"), bp::arg("a21"), bp::arg("a22"), bp::arg("a23"), bp::arg("a30"), bp::arg("a31"), bp::arg("a32"), bp::arg("a33") )) );
        { //::osg::RefMatrixf::className
        
            typedef char const * ( ::osg::RefMatrixf::*className_function_type)(  ) const;
            typedef char const * ( RefMatrixf_wrapper::*default_className_function_type)(  ) const;
            
            RefMatrixf_exposer.def( 
                "className"
                , className_function_type(&::osg::RefMatrixf::className)
                , default_className_function_type(&RefMatrixf_wrapper::default_className) );
        
        }
        { //::osg::RefMatrixf::clone
        
            typedef ::osg::Object * ( ::osg::RefMatrixf::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( RefMatrixf_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            RefMatrixf_exposer.def( 
                "clone"
                , clone_function_type(&::osg::RefMatrixf::clone)
                , default_clone_function_type(&RefMatrixf_wrapper::default_clone)
                , ( bp::arg("arg0") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::RefMatrixf::cloneType
        
            typedef ::osg::Object * ( ::osg::RefMatrixf::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( RefMatrixf_wrapper::*default_cloneType_function_type)(  ) const;
            
            RefMatrixf_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::RefMatrixf::cloneType)
                , default_cloneType_function_type(&RefMatrixf_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::RefMatrixf::isSameKindAs
        
            typedef bool ( ::osg::RefMatrixf::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( RefMatrixf_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            RefMatrixf_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::RefMatrixf::isSameKindAs)
                , default_isSameKindAs_function_type(&RefMatrixf_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::RefMatrixf::libraryName
        
            typedef char const * ( ::osg::RefMatrixf::*libraryName_function_type)(  ) const;
            typedef char const * ( RefMatrixf_wrapper::*default_libraryName_function_type)(  ) const;
            
            RefMatrixf_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::RefMatrixf::libraryName)
                , default_libraryName_function_type(&RefMatrixf_wrapper::default_libraryName) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( RefMatrixf_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            RefMatrixf_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&RefMatrixf_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( RefMatrixf_wrapper::*default_getUserData_function_type)(  ) ;
            
            RefMatrixf_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&RefMatrixf_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( RefMatrixf_wrapper::*default_getUserData_function_type)(  ) const;
            
            RefMatrixf_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&RefMatrixf_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::resizeGLObjectBuffers
        
            typedef void ( ::osg::Object::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( RefMatrixf_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            RefMatrixf_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Object::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&RefMatrixf_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( RefMatrixf_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            RefMatrixf_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&RefMatrixf_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            RefMatrixf_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( RefMatrixf_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            RefMatrixf_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&RefMatrixf_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( RefMatrixf_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            RefMatrixf_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&RefMatrixf_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}

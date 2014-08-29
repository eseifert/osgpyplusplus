// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "node.pypp.hpp"

namespace bp = boost::python;

struct Node_wrapper : osg::Node, bp::wrapper< osg::Node > {

    Node_wrapper( )
    : osg::Node( )
      , bp::wrapper< osg::Node >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Node::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Node::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Node::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Node::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Node::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Node::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Node::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Node::computeBound( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Node::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Node::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Node::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Node::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Node::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Node::resizeGLObjectBuffers( arg0 );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Node::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Node::setThreadSafeRefUnref( threadSafe );
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

void register_Node_class(){

    { //::osg::Node
        typedef bp::class_< Node_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::Node >, boost::noncopyable > Node_exposer_t;
        Node_exposer_t Node_exposer = Node_exposer_t( "Node", bp::no_init );
        bp::scope Node_scope( Node_exposer );
        Node_exposer.def( bp::init< >() );
        { //::osg::Node::addCullCallback
        
            typedef void ( ::osg::Node::*addCullCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "addCullCallback"
                , addCullCallback_function_type( &::osg::Node::addCullCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::addDescription
        
            typedef void ( ::osg::Node::*addDescription_function_type)( ::std::string const & ) ;
            
            Node_exposer.def( 
                "addDescription"
                , addDescription_function_type( &::osg::Node::addDescription )
                , ( bp::arg("desc") ) );
        
        }
        { //::osg::Node::addEventCallback
        
            typedef void ( ::osg::Node::*addEventCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "addEventCallback"
                , addEventCallback_function_type( &::osg::Node::addEventCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::addUpdateCallback
        
            typedef void ( ::osg::Node::*addUpdateCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "addUpdateCallback"
                , addUpdateCallback_function_type( &::osg::Node::addUpdateCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::className
        
            typedef char const * ( ::osg::Node::*className_function_type)(  ) const;
            typedef char const * ( Node_wrapper::*default_className_function_type)(  ) const;
            
            Node_exposer.def( 
                "className"
                , className_function_type(&::osg::Node::className)
                , default_className_function_type(&Node_wrapper::default_className) );
        
        }
        { //::osg::Node::clone
        
            typedef ::osg::Object * ( ::osg::Node::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Node_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            Node_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Node::clone)
                , default_clone_function_type(&Node_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Node::cloneType
        
            typedef ::osg::Object * ( ::osg::Node::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( Node_wrapper::*default_cloneType_function_type)(  ) const;
            
            Node_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Node::cloneType)
                , default_cloneType_function_type(&Node_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Node::computeBound
        
            typedef ::osg::BoundingSphere ( ::osg::Node::*computeBound_function_type)(  ) const;
            typedef ::osg::BoundingSphere ( Node_wrapper::*default_computeBound_function_type)(  ) const;
            
            Node_exposer.def( 
                "computeBound"
                , computeBound_function_type(&::osg::Node::computeBound)
                , default_computeBound_function_type(&Node_wrapper::default_computeBound) );
        
        }
        { //::osg::Node::containsOccluderNodes
        
            typedef bool ( ::osg::Node::*containsOccluderNodes_function_type)(  ) const;
            
            Node_exposer.def( 
                "containsOccluderNodes"
                , containsOccluderNodes_function_type( &::osg::Node::containsOccluderNodes ) );
        
        }
        { //::osg::Node::dirtyBound
        
            typedef void ( ::osg::Node::*dirtyBound_function_type)(  ) ;
            
            Node_exposer.def( 
                "dirtyBound"
                , dirtyBound_function_type( &::osg::Node::dirtyBound ) );
        
        }
        { //::osg::Node::getBound
        
            typedef ::osg::BoundingSphere const & ( ::osg::Node::*getBound_function_type)(  ) const;
            
            Node_exposer.def( 
                "getBound"
                , getBound_function_type( &::osg::Node::getBound )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getComputeBoundingSphereCallback
        
            typedef ::osg::Node::ComputeBoundingSphereCallback * ( ::osg::Node::*getComputeBoundingSphereCallback_function_type)(  ) ;
            
            Node_exposer.def( 
                "getComputeBoundingSphereCallback"
                , getComputeBoundingSphereCallback_function_type( &::osg::Node::getComputeBoundingSphereCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getComputeBoundingSphereCallback
        
            typedef ::osg::Node::ComputeBoundingSphereCallback const * ( ::osg::Node::*getComputeBoundingSphereCallback_function_type)(  ) const;
            
            Node_exposer.def( 
                "getComputeBoundingSphereCallback"
                , getComputeBoundingSphereCallback_function_type( &::osg::Node::getComputeBoundingSphereCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getCullCallback
        
            typedef ::osg::NodeCallback * ( ::osg::Node::*getCullCallback_function_type)(  ) ;
            
            Node_exposer.def( 
                "getCullCallback"
                , getCullCallback_function_type( &::osg::Node::getCullCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getCullCallback
        
            typedef ::osg::NodeCallback const * ( ::osg::Node::*getCullCallback_function_type)(  ) const;
            
            Node_exposer.def( 
                "getCullCallback"
                , getCullCallback_function_type( &::osg::Node::getCullCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getCullingActive
        
            typedef bool ( ::osg::Node::*getCullingActive_function_type)(  ) const;
            
            Node_exposer.def( 
                "getCullingActive"
                , getCullingActive_function_type( &::osg::Node::getCullingActive ) );
        
        }
        { //::osg::Node::getDescription
        
            typedef ::std::string const & ( ::osg::Node::*getDescription_function_type)( unsigned int ) const;
            
            Node_exposer.def( 
                "getDescription"
                , getDescription_function_type( &::osg::Node::getDescription )
                , ( bp::arg("i") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getDescription
        
            typedef ::std::string & ( ::osg::Node::*getDescription_function_type)( unsigned int ) ;
            
            Node_exposer.def( 
                "getDescription"
                , getDescription_function_type( &::osg::Node::getDescription )
                , ( bp::arg("i") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getDescriptions
        
            typedef ::std::vector< std::string > & ( ::osg::Node::*getDescriptions_function_type)(  ) ;
            
            Node_exposer.def( 
                "getDescriptions"
                , getDescriptions_function_type( &::osg::Node::getDescriptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getDescriptions
        
            typedef ::std::vector< std::string > const & ( ::osg::Node::*getDescriptions_function_type)(  ) const;
            
            Node_exposer.def( 
                "getDescriptions"
                , getDescriptions_function_type( &::osg::Node::getDescriptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getEventCallback
        
            typedef ::osg::NodeCallback * ( ::osg::Node::*getEventCallback_function_type)(  ) ;
            
            Node_exposer.def( 
                "getEventCallback"
                , getEventCallback_function_type( &::osg::Node::getEventCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getEventCallback
        
            typedef ::osg::NodeCallback const * ( ::osg::Node::*getEventCallback_function_type)(  ) const;
            
            Node_exposer.def( 
                "getEventCallback"
                , getEventCallback_function_type( &::osg::Node::getEventCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getInitialBound
        
            typedef ::osg::BoundingSphere const & ( ::osg::Node::*getInitialBound_function_type)(  ) const;
            
            Node_exposer.def( 
                "getInitialBound"
                , getInitialBound_function_type( &::osg::Node::getInitialBound )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getNodeMask
        
            typedef unsigned int ( ::osg::Node::*getNodeMask_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNodeMask"
                , getNodeMask_function_type( &::osg::Node::getNodeMask ) );
        
        }
        { //::osg::Node::getNumChildrenRequiringEventTraversal
        
            typedef unsigned int ( ::osg::Node::*getNumChildrenRequiringEventTraversal_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNumChildrenRequiringEventTraversal"
                , getNumChildrenRequiringEventTraversal_function_type( &::osg::Node::getNumChildrenRequiringEventTraversal ) );
        
        }
        { //::osg::Node::getNumChildrenRequiringUpdateTraversal
        
            typedef unsigned int ( ::osg::Node::*getNumChildrenRequiringUpdateTraversal_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNumChildrenRequiringUpdateTraversal"
                , getNumChildrenRequiringUpdateTraversal_function_type( &::osg::Node::getNumChildrenRequiringUpdateTraversal ) );
        
        }
        { //::osg::Node::getNumChildrenWithCullingDisabled
        
            typedef unsigned int ( ::osg::Node::*getNumChildrenWithCullingDisabled_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNumChildrenWithCullingDisabled"
                , getNumChildrenWithCullingDisabled_function_type( &::osg::Node::getNumChildrenWithCullingDisabled ) );
        
        }
        { //::osg::Node::getNumChildrenWithOccluderNodes
        
            typedef unsigned int ( ::osg::Node::*getNumChildrenWithOccluderNodes_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNumChildrenWithOccluderNodes"
                , getNumChildrenWithOccluderNodes_function_type( &::osg::Node::getNumChildrenWithOccluderNodes ) );
        
        }
        { //::osg::Node::getNumDescriptions
        
            typedef unsigned int ( ::osg::Node::*getNumDescriptions_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNumDescriptions"
                , getNumDescriptions_function_type( &::osg::Node::getNumDescriptions ) );
        
        }
        { //::osg::Node::getNumParents
        
            typedef unsigned int ( ::osg::Node::*getNumParents_function_type)(  ) const;
            
            Node_exposer.def( 
                "getNumParents"
                , getNumParents_function_type( &::osg::Node::getNumParents ) );
        
        }
        { //::osg::Node::getOrCreateStateSet
        
            typedef ::osg::StateSet * ( ::osg::Node::*getOrCreateStateSet_function_type)(  ) ;
            
            Node_exposer.def( 
                "getOrCreateStateSet"
                , getOrCreateStateSet_function_type( &::osg::Node::getOrCreateStateSet )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getParentalNodePaths
        
            typedef ::osg::NodePathList ( ::osg::Node::*getParentalNodePaths_function_type)( ::osg::Node * ) const;
            
            Node_exposer.def( 
                "getParentalNodePaths"
                , getParentalNodePaths_function_type( &::osg::Node::getParentalNodePaths )
                , ( bp::arg("haltTraversalAtNode")=bp::object() ) );
        
        }
        { //::osg::Node::getStateSet
        
            typedef ::osg::StateSet * ( ::osg::Node::*getStateSet_function_type)(  ) ;
            
            Node_exposer.def( 
                "getStateSet"
                , getStateSet_function_type( &::osg::Node::getStateSet )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getStateSet
        
            typedef ::osg::StateSet const * ( ::osg::Node::*getStateSet_function_type)(  ) const;
            
            Node_exposer.def( 
                "getStateSet"
                , getStateSet_function_type( &::osg::Node::getStateSet )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getUpdateCallback
        
            typedef ::osg::NodeCallback * ( ::osg::Node::*getUpdateCallback_function_type)(  ) ;
            
            Node_exposer.def( 
                "getUpdateCallback"
                , getUpdateCallback_function_type( &::osg::Node::getUpdateCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getUpdateCallback
        
            typedef ::osg::NodeCallback const * ( ::osg::Node::*getUpdateCallback_function_type)(  ) const;
            
            Node_exposer.def( 
                "getUpdateCallback"
                , getUpdateCallback_function_type( &::osg::Node::getUpdateCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::getWorldMatrices
        
            typedef ::osg::MatrixList ( ::osg::Node::*getWorldMatrices_function_type)( ::osg::Node const * ) const;
            
            Node_exposer.def( 
                "getWorldMatrices"
                , getWorldMatrices_function_type( &::osg::Node::getWorldMatrices )
                , ( bp::arg("haltTraversalAtNode")=bp::object() ) );
        
        }
        { //::osg::Node::isCullingActive
        
            typedef bool ( ::osg::Node::*isCullingActive_function_type)(  ) const;
            
            Node_exposer.def( 
                "isCullingActive"
                , isCullingActive_function_type( &::osg::Node::isCullingActive ) );
        
        }
        { //::osg::Node::isSameKindAs
        
            typedef bool ( ::osg::Node::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( Node_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            Node_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Node::isSameKindAs)
                , default_isSameKindAs_function_type(&Node_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Node::libraryName
        
            typedef char const * ( ::osg::Node::*libraryName_function_type)(  ) const;
            typedef char const * ( Node_wrapper::*default_libraryName_function_type)(  ) const;
            
            Node_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Node::libraryName)
                , default_libraryName_function_type(&Node_wrapper::default_libraryName) );
        
        }
        { //::osg::Node::removeCullCallback
        
            typedef void ( ::osg::Node::*removeCullCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "removeCullCallback"
                , removeCullCallback_function_type( &::osg::Node::removeCullCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::removeEventCallback
        
            typedef void ( ::osg::Node::*removeEventCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "removeEventCallback"
                , removeEventCallback_function_type( &::osg::Node::removeEventCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::removeUpdateCallback
        
            typedef void ( ::osg::Node::*removeUpdateCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "removeUpdateCallback"
                , removeUpdateCallback_function_type( &::osg::Node::removeUpdateCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::resizeGLObjectBuffers
        
            typedef void ( ::osg::Node::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( Node_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            Node_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Node::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Node_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Node::setComputeBoundingSphereCallback
        
            typedef void ( ::osg::Node::*setComputeBoundingSphereCallback_function_type)( ::osg::Node::ComputeBoundingSphereCallback * ) ;
            
            Node_exposer.def( 
                "setComputeBoundingSphereCallback"
                , setComputeBoundingSphereCallback_function_type( &::osg::Node::setComputeBoundingSphereCallback )
                , ( bp::arg("callback") ) );
        
        }
        { //::osg::Node::setCullCallback
        
            typedef void ( ::osg::Node::*setCullCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "setCullCallback"
                , setCullCallback_function_type( &::osg::Node::setCullCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::setCullingActive
        
            typedef void ( ::osg::Node::*setCullingActive_function_type)( bool ) ;
            
            Node_exposer.def( 
                "setCullingActive"
                , setCullingActive_function_type( &::osg::Node::setCullingActive )
                , ( bp::arg("active") ) );
        
        }
        { //::osg::Node::setDescriptions
        
            typedef void ( ::osg::Node::*setDescriptions_function_type)( ::std::vector< std::string > const & ) ;
            
            Node_exposer.def( 
                "setDescriptions"
                , setDescriptions_function_type( &::osg::Node::setDescriptions )
                , ( bp::arg("descriptions") ) );
        
        }
        { //::osg::Node::setEventCallback
        
            typedef void ( ::osg::Node::*setEventCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "setEventCallback"
                , setEventCallback_function_type( &::osg::Node::setEventCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Node::setInitialBound
        
            typedef void ( ::osg::Node::*setInitialBound_function_type)( ::osg::BoundingSphere const & ) ;
            
            Node_exposer.def( 
                "setInitialBound"
                , setInitialBound_function_type( &::osg::Node::setInitialBound )
                , ( bp::arg("bsphere") ) );
        
        }
        { //::osg::Node::setNodeMask
        
            typedef void ( ::osg::Node::*setNodeMask_function_type)( unsigned int ) ;
            
            Node_exposer.def( 
                "setNodeMask"
                , setNodeMask_function_type( &::osg::Node::setNodeMask )
                , ( bp::arg("nm") ) );
        
        }
        { //::osg::Node::setStateSet
        
            typedef void ( ::osg::Node::*setStateSet_function_type)( ::osg::StateSet * ) ;
            
            Node_exposer.def( 
                "setStateSet"
                , setStateSet_function_type( &::osg::Node::setStateSet )
                , ( bp::arg("stateset") ) );
        
        }
        { //::osg::Node::setThreadSafeRefUnref
        
            typedef void ( ::osg::Node::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( Node_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            Node_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Node::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&Node_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Node::setUpdateCallback
        
            typedef void ( ::osg::Node::*setUpdateCallback_function_type)( ::osg::NodeCallback * ) ;
            
            Node_exposer.def( 
                "setUpdateCallback"
                , setUpdateCallback_function_type( &::osg::Node::setUpdateCallback )
                , ( bp::arg("nc") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( Node_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            Node_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&Node_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( Node_wrapper::*default_getUserData_function_type)(  ) ;
            
            Node_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Node_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( Node_wrapper::*default_getUserData_function_type)(  ) const;
            
            Node_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Node_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( Node_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            Node_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&Node_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            Node_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( Node_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            Node_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&Node_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        { //property "stateSet"[fget=::osg::Node::getOrCreateStateSet, fset=::osg::Node::setStateSet]
        
            typedef ::osg::StateSet * ( ::osg::Node::*fget)(  ) ;
            typedef void ( ::osg::Node::*fset)( ::osg::StateSet * ) ;
            
            Node_exposer.add_property( 
                "stateSet"
                , bp::make_function( 
                      fget( &::osg::Node::getOrCreateStateSet )
                    , bp::return_internal_reference< >() ) 
                , fset( &::osg::Node::setStateSet ) );
        
        }
    }

}

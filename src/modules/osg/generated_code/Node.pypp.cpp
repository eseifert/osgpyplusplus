// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
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

// Tell boost::python that osg::ref_ptr is a smart pointer class
            namespace boost { namespace python {
              template <class T> struct pointee< osg::ref_ptr<T> >
              { typedef T type; };
            } } // namespace boost::python

void register_Node_class(){

    bp::class_< Node_wrapper, bp::bases< osg::Object >, osg::ref_ptr< Node_wrapper >, boost::noncopyable >( "Node", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "addCullCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::addCullCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "addDescription"
            , (void ( ::osg::Node::* )( ::std::string const & ))( &::osg::Node::addDescription )
            , ( bp::arg("desc") ) )    
        .def( 
            "addEventCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::addEventCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "addUpdateCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::addUpdateCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Node::* )(  )const)(&::osg::Node::className)
            , (char const * ( Node_wrapper::* )(  )const)(&Node_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Node::* )( ::osg::CopyOp const & )const)(&::osg::Node::clone)
            , (::osg::Object * ( Node_wrapper::* )( ::osg::CopyOp const & )const)(&Node_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Node::* )(  )const)(&::osg::Node::cloneType)
            , (::osg::Object * ( Node_wrapper::* )(  )const)(&Node_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osg::Node::* )(  )const)(&::osg::Node::computeBound)
            , (::osg::BoundingSphere ( Node_wrapper::* )(  )const)(&Node_wrapper::default_computeBound) )    
        .def( 
            "containsOccluderNodes"
            , (bool ( ::osg::Node::* )(  )const)( &::osg::Node::containsOccluderNodes ) )    
        .def( 
            "dirtyBound"
            , (void ( ::osg::Node::* )(  ))( &::osg::Node::dirtyBound ) )    
        .def( 
            "getBound"
            , (::osg::BoundingSphere const & ( ::osg::Node::* )(  )const)( &::osg::Node::getBound )
            , bp::return_internal_reference< >() )    
        .def( 
            "getComputeBoundingSphereCallback"
            , (::osg::Node::ComputeBoundingSphereCallback * ( ::osg::Node::* )(  ))( &::osg::Node::getComputeBoundingSphereCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getComputeBoundingSphereCallback"
            , (::osg::Node::ComputeBoundingSphereCallback const * ( ::osg::Node::* )(  )const)( &::osg::Node::getComputeBoundingSphereCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCullCallback"
            , (::osg::NodeCallback * ( ::osg::Node::* )(  ))( &::osg::Node::getCullCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCullCallback"
            , (::osg::NodeCallback const * ( ::osg::Node::* )(  )const)( &::osg::Node::getCullCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCullingActive"
            , (bool ( ::osg::Node::* )(  )const)( &::osg::Node::getCullingActive ) )    
        .def( 
            "getDescription"
            , (::std::string const & ( ::osg::Node::* )( unsigned int )const)( &::osg::Node::getDescription )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getDescription"
            , (::std::string & ( ::osg::Node::* )( unsigned int ))( &::osg::Node::getDescription )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getDescriptions"
            , (::std::vector< std::string > & ( ::osg::Node::* )(  ))( &::osg::Node::getDescriptions )
            , bp::return_internal_reference< >() )    
        .def( 
            "getDescriptions"
            , (::std::vector< std::string > const & ( ::osg::Node::* )(  )const)( &::osg::Node::getDescriptions )
            , bp::return_internal_reference< >() )    
        .def( 
            "getEventCallback"
            , (::osg::NodeCallback * ( ::osg::Node::* )(  ))( &::osg::Node::getEventCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getEventCallback"
            , (::osg::NodeCallback const * ( ::osg::Node::* )(  )const)( &::osg::Node::getEventCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getInitialBound"
            , (::osg::BoundingSphere const & ( ::osg::Node::* )(  )const)( &::osg::Node::getInitialBound )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNodeMask"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNodeMask ) )    
        .def( 
            "getNumChildrenRequiringEventTraversal"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNumChildrenRequiringEventTraversal ) )    
        .def( 
            "getNumChildrenRequiringUpdateTraversal"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNumChildrenRequiringUpdateTraversal ) )    
        .def( 
            "getNumChildrenWithCullingDisabled"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNumChildrenWithCullingDisabled ) )    
        .def( 
            "getNumChildrenWithOccluderNodes"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNumChildrenWithOccluderNodes ) )    
        .def( 
            "getNumDescriptions"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNumDescriptions ) )    
        .def( 
            "getNumParents"
            , (unsigned int ( ::osg::Node::* )(  )const)( &::osg::Node::getNumParents ) )    
        .def( 
            "getOrCreateStateSet"
            , (::osg::StateSet * ( ::osg::Node::* )(  ))( &::osg::Node::getOrCreateStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getParentalNodePaths"
            , (::osg::NodePathList ( ::osg::Node::* )( ::osg::Node * )const)( &::osg::Node::getParentalNodePaths )
            , ( bp::arg("haltTraversalAtNode")=bp::object() ) )    
        .def( 
            "getStateSet"
            , (::osg::StateSet * ( ::osg::Node::* )(  ))( &::osg::Node::getStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getStateSet"
            , (::osg::StateSet const * ( ::osg::Node::* )(  )const)( &::osg::Node::getStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "getUpdateCallback"
            , (::osg::NodeCallback * ( ::osg::Node::* )(  ))( &::osg::Node::getUpdateCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getUpdateCallback"
            , (::osg::NodeCallback const * ( ::osg::Node::* )(  )const)( &::osg::Node::getUpdateCallback )
            , bp::return_internal_reference< >() )    
        .def( 
            "getWorldMatrices"
            , (::osg::MatrixList ( ::osg::Node::* )( ::osg::Node const * )const)( &::osg::Node::getWorldMatrices )
            , ( bp::arg("haltTraversalAtNode")=bp::object() ) )    
        .def( 
            "isCullingActive"
            , (bool ( ::osg::Node::* )(  )const)( &::osg::Node::isCullingActive ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Node::* )( ::osg::Object const * )const)(&::osg::Node::isSameKindAs)
            , (bool ( Node_wrapper::* )( ::osg::Object const * )const)(&Node_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Node::* )(  )const)(&::osg::Node::libraryName)
            , (char const * ( Node_wrapper::* )(  )const)(&Node_wrapper::default_libraryName) )    
        .def( 
            "removeCullCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::removeCullCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "removeEventCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::removeEventCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "removeUpdateCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::removeUpdateCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Node::* )( unsigned int ))(&::osg::Node::resizeGLObjectBuffers)
            , (void ( Node_wrapper::* )( unsigned int ))(&Node_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setComputeBoundingSphereCallback"
            , (void ( ::osg::Node::* )( ::osg::Node::ComputeBoundingSphereCallback * ))( &::osg::Node::setComputeBoundingSphereCallback )
            , ( bp::arg("callback") ) )    
        .def( 
            "setCullCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::setCullCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "setCullingActive"
            , (void ( ::osg::Node::* )( bool ))( &::osg::Node::setCullingActive )
            , ( bp::arg("active") ) )    
        .def( 
            "setDescriptions"
            , (void ( ::osg::Node::* )( ::std::vector< std::string > const & ))( &::osg::Node::setDescriptions )
            , ( bp::arg("descriptions") ) )    
        .def( 
            "setEventCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::setEventCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "setInitialBound"
            , (void ( ::osg::Node::* )( ::osg::BoundingSphere const & ))( &::osg::Node::setInitialBound )
            , ( bp::arg("bsphere") ) )    
        .def( 
            "setNodeMask"
            , (void ( ::osg::Node::* )( unsigned int ))( &::osg::Node::setNodeMask )
            , ( bp::arg("nm") ) )    
        .def( 
            "setStateSet"
            , (void ( ::osg::Node::* )( ::osg::StateSet * ))( &::osg::Node::setStateSet )
            , ( bp::arg("stateset") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Node::* )( bool ))(&::osg::Node::setThreadSafeRefUnref)
            , (void ( Node_wrapper::* )( bool ))(&Node_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUpdateCallback"
            , (void ( ::osg::Node::* )( ::osg::NodeCallback * ))( &::osg::Node::setUpdateCallback )
            , ( bp::arg("nc") ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( Node_wrapper::* )(  ))(&Node_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( Node_wrapper::* )(  ))(&Node_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( Node_wrapper::* )(  )const)(&Node_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( Node_wrapper::* )( ::std::string const & ))(&Node_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( Node_wrapper::* )( ::osg::Referenced * ))(&Node_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}

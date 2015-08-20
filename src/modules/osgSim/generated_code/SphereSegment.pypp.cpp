// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgsim.h"
#include "wrap_referenced.h"
#include "spheresegment.pypp.hpp"

namespace bp = boost::python;

struct SphereSegment_wrapper : osgSim::SphereSegment, bp::wrapper< osgSim::SphereSegment > {

    SphereSegment_wrapper( )
    : osgSim::SphereSegment( )
      , bp::wrapper< osgSim::SphereSegment >(){
        // null constructor
    
    }

    SphereSegment_wrapper(::osg::Vec3 const & centre, float radius, float azMin, float azMax, float elevMin, float elevMax, int density )
    : osgSim::SphereSegment( boost::ref(centre), radius, azMin, azMax, elevMin, elevMax, density )
      , bp::wrapper< osgSim::SphereSegment >(){
        // constructor
    
    }

    SphereSegment_wrapper(::osg::Vec3 const & centre, float radius, ::osg::Vec3 const & vec, float azRange, float elevRange, int density )
    : osgSim::SphereSegment( boost::ref(centre), radius, boost::ref(vec), azRange, elevRange, density )
      , bp::wrapper< osgSim::SphereSegment >(){
        // constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgSim::SphereSegment::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgSim::SphereSegment::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::SphereSegment::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::SphereSegment::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgSim::SphereSegment::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgSim::SphereSegment::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::SphereSegment::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::SphereSegment::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::SphereSegment::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::SphereSegment::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::SphereSegment::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::SphereSegment::libraryName( );
    }

    virtual bool addDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_addDrawable = this->get_override( "addDrawable" ) )
            return func_addDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::addDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_addDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::addDrawable( boost::python::ptr(drawable) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Geode::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Geode::computeBound( );
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

    virtual bool removeDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_removeDrawable = this->get_override( "removeDrawable" ) )
            return func_removeDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::removeDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_removeDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::removeDrawable( boost::python::ptr(drawable) );
    }

    virtual bool removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        if( bp::override func_removeDrawables = this->get_override( "removeDrawables" ) )
            return func_removeDrawables( i, numDrawablesToRemove );
        else{
            return this->osg::Geode::removeDrawables( i, numDrawablesToRemove );
        }
    }
    
    bool default_removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        return osg::Geode::removeDrawables( i, numDrawablesToRemove );
    }

    virtual bool replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        if( bp::override func_replaceDrawable = this->get_override( "replaceDrawable" ) )
            return func_replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        else{
            return this->osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        }
    }
    
    bool default_replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        return osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Geode::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Geode::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        if( bp::override func_setDrawable = this->get_override( "setDrawable" ) )
            return func_setDrawable( i, boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
        }
    }
    
    bool default_setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        return osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
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
            this->osg::Geode::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Geode::setThreadSafeRefUnref( threadSafe );
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

    virtual void traverse( ::osg::NodeVisitor & arg0 ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(arg0) );
        else{
            this->osg::Node::traverse( boost::ref(arg0) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & arg0 ) {
        osg::Node::traverse( boost::ref(arg0) );
    }

};

void register_SphereSegment_class(){

    { //::osgSim::SphereSegment
        typedef bp::class_< SphereSegment_wrapper, bp::bases< ::osg::Geode >, osg::ref_ptr< SphereSegment_wrapper >, boost::noncopyable > SphereSegment_exposer_t;
        SphereSegment_exposer_t SphereSegment_exposer = SphereSegment_exposer_t( "SphereSegment", "\nA SphereSegment is a Geode to represent an portion of a sphere (potentially\nthe whole sphere). The sphere is aligned such that the line through the\nspheres poles is parallel to the z axis. The sphere segment\nmay be rendered various components switched on or off:\n\n    - The specified area of the sphere surface.\n\n    - An edge line around the boundary of the specified area\n      of the sphere surface.\n\n    - Four <i>spokes</i>, where a spoke is the line from\n      the spheres centre to a corner of the rendered area.\n\n    - Four planar areas, where the planar areas are formed\n      between the spokes.\n\nCaveats:\n\n    - Its worth noting that the line through the spheres poles is\n      parallel to the z axis. This has implications when specifying the\n      area to be rendered, and specifying areas where the centre of\n      the rendered area <i>is</i> the Z axis may lead to unexpected\n      geometry.\n\n    - Its possible to render the whole sphere by specifying elevation\n      and azimuth ranges round the full 360 degrees. When doing\n      so you may consider switching the planes, spokes, and edge lines\n      off, to avoid rendering artefacts, e.g. the upper and lower\n      planes will be coincident.\n", bp::init< >("\n Default constructor.\n") );
        bp::scope SphereSegment_scope( SphereSegment_exposer );
        bp::enum_< osgSim::SphereSegment::DrawMask>("DrawMask")
            .value("SURFACE", osgSim::SphereSegment::SURFACE)
            .value("SPOKES", osgSim::SphereSegment::SPOKES)
            .value("EDGELINE", osgSim::SphereSegment::EDGELINE)
            .value("SIDES", osgSim::SphereSegment::SIDES)
            .value("ALL", osgSim::SphereSegment::ALL)
            .export_values()
            ;
        SphereSegment_exposer.def( bp::init< osg::Vec3 const &, float, float, float, float, float, int >(( bp::arg("centre"), bp::arg("radius"), bp::arg("azMin"), bp::arg("azMax"), bp::arg("elevMin"), bp::arg("elevMax"), bp::arg("density") ), "\n    Construct by angle ranges. Note that the azimuth zero is the Y axis; specifying\n    an azimuth range from azMin -osg::PI/2.0f to azMax osg::PI/2.0f will cover the\n    top half of the circle in the XY plane. The elev angles are out of the zero\n    XY plane with +ve angles above the plane, and -ve angles below.\n    @param centre:       sphere centre\n    @param radius:       radius of sphere\n    @param azMin:        azimuth minimum\n    @param azMax:        azimuth maximum\n    @param elevMin:      elevation minimum\n    @param elevMax:      elevation maximum\n    @param density:      number of units to divide the azimuth and elevation ranges into\n") );
        SphereSegment_exposer.def( bp::init< osg::Vec3 const &, float, osg::Vec3 const &, float, float, int >(( bp::arg("centre"), bp::arg("radius"), bp::arg("vec"), bp::arg("azRange"), bp::arg("elevRange"), bp::arg("density") ), "\n    Construct by vector.\n    @param centre:       sphere centre\n    @param radius:       radius of sphere\n    @param vec:          vector pointing from sphere centre to centre point\n                        of rendered area on sphere surface\n    @param azRange:      azimuth range in radians (with centre along vec)\n    @param elevRange:    elevation range in radians (with centre along vec)\n    @param density:      number of units to divide the azimuth and elevation ranges into\n") );
        { //::osgSim::SphereSegment::accept
        
            typedef void ( ::osgSim::SphereSegment::*accept_function_type)( ::osg::NodeVisitor & ) ;
            typedef void ( SphereSegment_wrapper::*default_accept_function_type)( ::osg::NodeVisitor & ) ;
            
            SphereSegment_exposer.def( 
                "accept"
                , accept_function_type(&::osgSim::SphereSegment::accept)
                , default_accept_function_type(&SphereSegment_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osgSim::SphereSegment::className
        
            typedef char const * ( ::osgSim::SphereSegment::*className_function_type)(  ) const;
            typedef char const * ( SphereSegment_wrapper::*default_className_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "className"
                , className_function_type(&::osgSim::SphereSegment::className)
                , default_className_function_type(&SphereSegment_wrapper::default_className) );
        
        }
        { //::osgSim::SphereSegment::clone
        
            typedef ::osg::Object * ( ::osgSim::SphereSegment::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( SphereSegment_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            SphereSegment_exposer.def( 
                "clone"
                , clone_function_type(&::osgSim::SphereSegment::clone)
                , default_clone_function_type(&SphereSegment_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgSim::SphereSegment::cloneType
        
            typedef ::osg::Object * ( ::osgSim::SphereSegment::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( SphereSegment_wrapper::*default_cloneType_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgSim::SphereSegment::cloneType)
                , default_cloneType_function_type(&SphereSegment_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgSim::SphereSegment::computeIntersectionSubgraph
        
            typedef ::osg::Node * ( ::osgSim::SphereSegment::*computeIntersectionSubgraph_function_type)( ::osg::Matrixd const &,::osg::Node * ) ;
            
            SphereSegment_exposer.def( 
                "computeIntersectionSubgraph"
                , computeIntersectionSubgraph_function_type( &::osgSim::SphereSegment::computeIntersectionSubgraph )
                , ( bp::arg("matrix"), bp::arg("subgraph") )
                , bp::return_internal_reference< >()
                , " Compute the interesection lines between subgraph and this sphere segment.\n The matrix is the transform that takes the subgraph into the same coordiante frame as the sphere segment.\n The resulting intersections are in the coordinate frame of the sphere segment." );
        
        }
        { //::osgSim::SphereSegment::computeIntersectionSubgraph
        
            typedef ::osg::Node * ( ::osgSim::SphereSegment::*computeIntersectionSubgraph_function_type)( ::osg::Matrixd const &,::osg::Drawable * ) ;
            
            SphereSegment_exposer.def( 
                "computeIntersectionSubgraph"
                , computeIntersectionSubgraph_function_type( &::osgSim::SphereSegment::computeIntersectionSubgraph )
                , ( bp::arg("matrix"), bp::arg("drawable") )
                , bp::return_internal_reference< >()
                , " Compute the interesection lines between specified drawable and this sphere segment.\n The matrix is the transform that takes the subgraph into the same coordiante frame as the sphere segment.\n The resulting intersections are in the coordinate frame of the sphere segment." );
        
        }
        { //::osgSim::SphereSegment::getArea
        
            typedef void ( ::osgSim::SphereSegment::*getArea_function_type)( ::osg::Vec3 &,float &,float & ) const;
            
            SphereSegment_exposer.def( 
                "getArea"
                , getArea_function_type( &::osgSim::SphereSegment::getArea )
                , ( bp::arg("vec"), bp::arg("azRange"), bp::arg("elevRange") )
                , " Get the area of the sphere segment\n\n    @param vec:          vector pointing from sphere centre to centre point\n                        of rendered area on sphere surface (normalized)\n    @param azRange:      azimuth range in radians (with centre along vec)\n    @param elevRange:    elevation range in radians (with centre along vec)" );
        
        }
        { //::osgSim::SphereSegment::getArea
        
            typedef void ( ::osgSim::SphereSegment::*getArea_function_type)( float &,float &,float &,float & ) const;
            
            SphereSegment_exposer.def( 
                "getArea"
                , getArea_function_type( &::osgSim::SphereSegment::getArea )
                , ( bp::arg("azMin"), bp::arg("azMax"), bp::arg("elevMin"), bp::arg("elevMax") )
                , " Get the area of the sphere segment\n    @param azMin:        azimuth minimum\n    @param azMax:        azimuth maximum\n    @param elevMin:      elevation minimum\n    @param elevMax:      elevation maximum" );
        
        }
        { //::osgSim::SphereSegment::getCentre
        
            typedef ::osg::Vec3 const & ( ::osgSim::SphereSegment::*getCentre_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getCentre"
                , getCentre_function_type( &::osgSim::SphereSegment::getCentre )
                , bp::return_internal_reference< >()
                , " Get the centre point of the SphereSegment" );
        
        }
        { //::osgSim::SphereSegment::getDensity
        
            typedef int ( ::osgSim::SphereSegment::*getDensity_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getDensity"
                , getDensity_function_type( &::osgSim::SphereSegment::getDensity )
                , " Get the density of the sphere segment" );
        
        }
        { //::osgSim::SphereSegment::getDrawMask
        
            typedef int ( ::osgSim::SphereSegment::*getDrawMask_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getDrawMask"
                , getDrawMask_function_type( &::osgSim::SphereSegment::getDrawMask )
                , " Get the DrawMask" );
        
        }
        { //::osgSim::SphereSegment::getEdgeLineColor
        
            typedef ::osg::Vec4 const & ( ::osgSim::SphereSegment::*getEdgeLineColor_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getEdgeLineColor"
                , getEdgeLineColor_function_type( &::osgSim::SphereSegment::getEdgeLineColor )
                , bp::return_internal_reference< >()
                , " Get the color of the edge line." );
        
        }
        { //::osgSim::SphereSegment::getRadius
        
            typedef float ( ::osgSim::SphereSegment::*getRadius_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getRadius"
                , getRadius_function_type( &::osgSim::SphereSegment::getRadius )
                , " Get the radius of the SphereSegment" );
        
        }
        { //::osgSim::SphereSegment::getSideColor
        
            typedef ::osg::Vec4 const & ( ::osgSim::SphereSegment::*getSideColor_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getSideColor"
                , getSideColor_function_type( &::osgSim::SphereSegment::getSideColor )
                , bp::return_internal_reference< >()
                , " Get the color of the planes." );
        
        }
        { //::osgSim::SphereSegment::getSpokeColor
        
            typedef ::osg::Vec4 const & ( ::osgSim::SphereSegment::*getSpokeColor_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getSpokeColor"
                , getSpokeColor_function_type( &::osgSim::SphereSegment::getSpokeColor )
                , bp::return_internal_reference< >()
                , " Get the color of the spokes." );
        
        }
        { //::osgSim::SphereSegment::getSurfaceColor
        
            typedef ::osg::Vec4 const & ( ::osgSim::SphereSegment::*getSurfaceColor_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "getSurfaceColor"
                , getSurfaceColor_function_type( &::osgSim::SphereSegment::getSurfaceColor )
                , bp::return_internal_reference< >()
                , " Get the color of the surface." );
        
        }
        { //::osgSim::SphereSegment::isSameKindAs
        
            typedef bool ( ::osgSim::SphereSegment::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( SphereSegment_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            SphereSegment_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgSim::SphereSegment::isSameKindAs)
                , default_isSameKindAs_function_type(&SphereSegment_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgSim::SphereSegment::libraryName
        
            typedef char const * ( ::osgSim::SphereSegment::*libraryName_function_type)(  ) const;
            typedef char const * ( SphereSegment_wrapper::*default_libraryName_function_type)(  ) const;
            
            SphereSegment_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgSim::SphereSegment::libraryName)
                , default_libraryName_function_type(&SphereSegment_wrapper::default_libraryName) );
        
        }
        { //::osgSim::SphereSegment::setAllColors
        
            typedef void ( ::osgSim::SphereSegment::*setAllColors_function_type)( ::osg::Vec4 const & ) ;
            
            SphereSegment_exposer.def( 
                "setAllColors"
                , setAllColors_function_type( &::osgSim::SphereSegment::setAllColors )
                , ( bp::arg("c") )
                , " Set color of all components." );
        
        }
        { //::osgSim::SphereSegment::setArea
        
            typedef void ( ::osgSim::SphereSegment::*setArea_function_type)( ::osg::Vec3 const &,float,float ) ;
            
            SphereSegment_exposer.def( 
                "setArea"
                , setArea_function_type( &::osgSim::SphereSegment::setArea )
                , ( bp::arg("vec"), bp::arg("azRange"), bp::arg("elevRange") )
                , " Set the area of the sphere segment\n\n    @param vec:          vector pointing from sphere centre to centre point\n                        of rendered area on sphere surface\n    @param azRange:      azimuth range in radians (with centre along vec)\n    @param elevRange:    elevation range in radians (with centre along vec)" );
        
        }
        { //::osgSim::SphereSegment::setArea
        
            typedef void ( ::osgSim::SphereSegment::*setArea_function_type)( float,float,float,float ) ;
            
            SphereSegment_exposer.def( 
                "setArea"
                , setArea_function_type( &::osgSim::SphereSegment::setArea )
                , ( bp::arg("azMin"), bp::arg("azMax"), bp::arg("elevMin"), bp::arg("elevMax") )
                , " Set the area of the sphere segment\n    @param azMin:        azimuth minimum\n    @param azMax:        azimuth maximum\n    @param elevMin:      elevation minimum\n    @param elevMax:      elevation maximum" );
        
        }
        { //::osgSim::SphereSegment::setCentre
        
            typedef void ( ::osgSim::SphereSegment::*setCentre_function_type)( ::osg::Vec3 const & ) ;
            
            SphereSegment_exposer.def( 
                "setCentre"
                , setCentre_function_type( &::osgSim::SphereSegment::setCentre )
                , ( bp::arg("c") )
                , " Set the centre point of the SphereSegment" );
        
        }
        { //::osgSim::SphereSegment::setDensity
        
            typedef void ( ::osgSim::SphereSegment::*setDensity_function_type)( int ) ;
            
            SphereSegment_exposer.def( 
                "setDensity"
                , setDensity_function_type( &::osgSim::SphereSegment::setDensity )
                , ( bp::arg("d") )
                , " Set the density of the sphere segment" );
        
        }
        { //::osgSim::SphereSegment::setDrawMask
        
            typedef void ( ::osgSim::SphereSegment::*setDrawMask_function_type)( int ) ;
            
            SphereSegment_exposer.def( 
                "setDrawMask"
                , setDrawMask_function_type( &::osgSim::SphereSegment::setDrawMask )
                , ( bp::arg("dm") )
                , "    Specify the DrawMask.\n    @param dm:   Bitmask specifying which parts of the sphere segment should be drawn.\n    aee DrawMask" );
        
        }
        { //::osgSim::SphereSegment::setEdgeLineColor
        
            typedef void ( ::osgSim::SphereSegment::*setEdgeLineColor_function_type)( ::osg::Vec4 const & ) ;
            
            SphereSegment_exposer.def( 
                "setEdgeLineColor"
                , setEdgeLineColor_function_type( &::osgSim::SphereSegment::setEdgeLineColor )
                , ( bp::arg("c") )
                , " Set the color of the edge line." );
        
        }
        { //::osgSim::SphereSegment::setRadius
        
            typedef void ( ::osgSim::SphereSegment::*setRadius_function_type)( float ) ;
            
            SphereSegment_exposer.def( 
                "setRadius"
                , setRadius_function_type( &::osgSim::SphereSegment::setRadius )
                , ( bp::arg("r") )
                , " Set the radius of the SphereSegment" );
        
        }
        { //::osgSim::SphereSegment::setSideColor
        
            typedef void ( ::osgSim::SphereSegment::*setSideColor_function_type)( ::osg::Vec4 const & ) ;
            
            SphereSegment_exposer.def( 
                "setSideColor"
                , setSideColor_function_type( &::osgSim::SphereSegment::setSideColor )
                , ( bp::arg("c") )
                , " Set the color of the planes." );
        
        }
        { //::osgSim::SphereSegment::setSpokeColor
        
            typedef void ( ::osgSim::SphereSegment::*setSpokeColor_function_type)( ::osg::Vec4 const & ) ;
            
            SphereSegment_exposer.def( 
                "setSpokeColor"
                , setSpokeColor_function_type( &::osgSim::SphereSegment::setSpokeColor )
                , ( bp::arg("c") )
                , " Set the color of the spokes." );
        
        }
        { //::osgSim::SphereSegment::setSurfaceColor
        
            typedef void ( ::osgSim::SphereSegment::*setSurfaceColor_function_type)( ::osg::Vec4 const & ) ;
            
            SphereSegment_exposer.def( 
                "setSurfaceColor"
                , setSurfaceColor_function_type( &::osgSim::SphereSegment::setSurfaceColor )
                , ( bp::arg("c") )
                , " Set the color of the surface." );
        
        }
    }

}
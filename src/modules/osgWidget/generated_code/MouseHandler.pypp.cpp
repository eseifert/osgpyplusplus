// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "mousehandler.pypp.hpp"

namespace bp = boost::python;

struct MouseHandler_wrapper : osgWidget::MouseHandler, bp::wrapper< osgWidget::MouseHandler > {

    MouseHandler_wrapper(::osgWidget::WindowManager * arg0 )
    : osgWidget::MouseHandler( boost::python::ptr(arg0) )
      , bp::wrapper< osgWidget::MouseHandler >(){
        // constructor
    
    }

    virtual bool handle( ::osgGA::GUIEventAdapter const & arg0, ::osgGA::GUIActionAdapter & arg1, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), arg0, arg1, arg2, arg3 );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgWidget::MouseHandler::handle( boost::ref(arg0), boost::ref(arg1), boost::python::ptr(arg2), boost::python::ptr(arg3) );
        }
    }
    
    static boost::python::object default_handle( ::osgWidget::MouseHandler & inst, ::osgGA::GUIEventAdapter & arg0, ::osgGA::GUIActionAdapter & arg1, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ){
        bool result;
        if( dynamic_cast< MouseHandler_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgWidget::MouseHandler::handle(arg0, arg1, arg2, arg3);
        }
        else{
            result = inst.handle(arg0, arg1, arg2, arg3);
        }
        return bp::object( result );
    }

};

void register_MouseHandler_class(){

    { //::osgWidget::MouseHandler
        typedef bp::class_< MouseHandler_wrapper, osg::ref_ptr< ::osgWidget::MouseHandler >, boost::noncopyable > MouseHandler_exposer_t;
        MouseHandler_exposer_t MouseHandler_exposer = MouseHandler_exposer_t( "MouseHandler", bp::init< osgWidget::WindowManager * >(( bp::arg("arg0") )) );
        bp::scope MouseHandler_scope( MouseHandler_exposer );
        bp::implicitly_convertible< osgWidget::WindowManager *, osgWidget::MouseHandler >();
        { //::osgWidget::MouseHandler::handle
        
            typedef boost::python::object ( *default_handle_function_type )( ::osgWidget::MouseHandler &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter &,::osg::Object *,::osg::NodeVisitor * );
            
            MouseHandler_exposer.def( 
                "handle"
                , default_handle_function_type( &MouseHandler_wrapper::default_handle )
                , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2"), bp::arg("arg3") ) );
        
        }
    }

}
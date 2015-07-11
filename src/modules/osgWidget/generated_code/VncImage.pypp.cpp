// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "vncimage.pypp.hpp"

namespace bp = boost::python;

struct VncImage_wrapper : osgWidget::VncImage, bp::wrapper< osgWidget::VncImage > {

    virtual void close(  ){
        bp::override func_close = this->get_override( "close" );
        func_close(  );
    }

    virtual bool connect( ::std::string const & hostname ){
        bp::override func_connect = this->get_override( "connect" );
        return func_connect( hostname );
    }

};

void register_VncImage_class(){

    bp::class_< VncImage_wrapper, osg::ref_ptr< ::osgWidget::VncImage >, boost::noncopyable >( "VncImage", "\n Pure virtual base class for VncImage that is sublcassed by vnc plugin to provide the actual implementation.\n", bp::no_init )    
        .def( 
            "close"
            , bp::pure_virtual( (void ( ::osgWidget::VncImage::* )(  ) )(&::osgWidget::VncImage::close) ) )    
        .def( 
            "connect"
            , bp::pure_virtual( (bool ( ::osgWidget::VncImage::* )( ::std::string const & ) )(&::osgWidget::VncImage::connect) )
            , ( bp::arg("hostname") )
            , "\n Pure virtual base class for VncImage that is sublcassed by vnc plugin to provide the actual implementation.\n" );

}
// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "wrap_osgviewer.h"
#include "vector_less__osgviewer_scope_view_ptr___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osgViewer_scope_View_ptr___greater__class(){

    bp::class_< std::vector< osgViewer::View* > >("vector_less__osgViewer_scope_View_ptr___greater_")    
        .def( bp::vector_indexing_suite< ::std::vector< osgViewer::View* > >() );

}

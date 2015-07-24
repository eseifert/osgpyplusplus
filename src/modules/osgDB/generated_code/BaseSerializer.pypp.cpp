// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "baseserializer.pypp.hpp"

namespace bp = boost::python;

struct BaseSerializer_wrapper : osgDB::BaseSerializer, bp::wrapper< osgDB::BaseSerializer > {

    virtual ::std::string const & getName(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual bool read( ::osgDB::InputStream & arg0, ::osg::Object & arg1 ){
        bp::override func_read = this->get_override( "read" );
        return func_read( boost::ref(arg0), boost::ref(arg1) );
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

void register_BaseSerializer_class(){

    { //::osgDB::BaseSerializer
        typedef bp::class_< BaseSerializer_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< BaseSerializer_wrapper >, boost::noncopyable > BaseSerializer_exposer_t;
        BaseSerializer_exposer_t BaseSerializer_exposer = BaseSerializer_exposer_t( "BaseSerializer", bp::no_init );
        bp::scope BaseSerializer_scope( BaseSerializer_exposer );
        bp::enum_< osgDB::BaseSerializer::Type>("Type")
            .value("RW_UNDEFINED", osgDB::BaseSerializer::RW_UNDEFINED)
            .value("RW_USER", osgDB::BaseSerializer::RW_USER)
            .value("RW_OBJECT", osgDB::BaseSerializer::RW_OBJECT)
            .value("RW_IMAGE", osgDB::BaseSerializer::RW_IMAGE)
            .value("RW_LIST", osgDB::BaseSerializer::RW_LIST)
            .value("RW_BOOL", osgDB::BaseSerializer::RW_BOOL)
            .value("RW_CHAR", osgDB::BaseSerializer::RW_CHAR)
            .value("RW_UCHAR", osgDB::BaseSerializer::RW_UCHAR)
            .value("RW_SHORT", osgDB::BaseSerializer::RW_SHORT)
            .value("RW_USHORT", osgDB::BaseSerializer::RW_USHORT)
            .value("RW_INT", osgDB::BaseSerializer::RW_INT)
            .value("RW_UINT", osgDB::BaseSerializer::RW_UINT)
            .value("RW_FLOAT", osgDB::BaseSerializer::RW_FLOAT)
            .value("RW_DOUBLE", osgDB::BaseSerializer::RW_DOUBLE)
            .value("RW_VEC2F", osgDB::BaseSerializer::RW_VEC2F)
            .value("RW_VEC2D", osgDB::BaseSerializer::RW_VEC2D)
            .value("RW_VEC3F", osgDB::BaseSerializer::RW_VEC3F)
            .value("RW_VEC3D", osgDB::BaseSerializer::RW_VEC3D)
            .value("RW_VEC4F", osgDB::BaseSerializer::RW_VEC4F)
            .value("RW_VEC4D", osgDB::BaseSerializer::RW_VEC4D)
            .value("RW_QUAT", osgDB::BaseSerializer::RW_QUAT)
            .value("RW_PLANE", osgDB::BaseSerializer::RW_PLANE)
            .value("RW_MATRIXF", osgDB::BaseSerializer::RW_MATRIXF)
            .value("RW_MATRIXD", osgDB::BaseSerializer::RW_MATRIXD)
            .value("RW_MATRIX", osgDB::BaseSerializer::RW_MATRIX)
            .value("RW_GLENUM", osgDB::BaseSerializer::RW_GLENUM)
            .value("RW_STRING", osgDB::BaseSerializer::RW_STRING)
            .value("RW_ENUM", osgDB::BaseSerializer::RW_ENUM)
            .value("RW_VEC2B", osgDB::BaseSerializer::RW_VEC2B)
            .value("RW_VEC2UB", osgDB::BaseSerializer::RW_VEC2UB)
            .value("RW_VEC2S", osgDB::BaseSerializer::RW_VEC2S)
            .value("RW_VEC2US", osgDB::BaseSerializer::RW_VEC2US)
            .value("RW_VEC2I", osgDB::BaseSerializer::RW_VEC2I)
            .value("RW_VEC2UI", osgDB::BaseSerializer::RW_VEC2UI)
            .value("RW_VEC3B", osgDB::BaseSerializer::RW_VEC3B)
            .value("RW_VEC3UB", osgDB::BaseSerializer::RW_VEC3UB)
            .value("RW_VEC3S", osgDB::BaseSerializer::RW_VEC3S)
            .value("RW_VEC3US", osgDB::BaseSerializer::RW_VEC3US)
            .value("RW_VEC3I", osgDB::BaseSerializer::RW_VEC3I)
            .value("RW_VEC3UI", osgDB::BaseSerializer::RW_VEC3UI)
            .value("RW_VEC4B", osgDB::BaseSerializer::RW_VEC4B)
            .value("RW_VEC4UB", osgDB::BaseSerializer::RW_VEC4UB)
            .value("RW_VEC4S", osgDB::BaseSerializer::RW_VEC4S)
            .value("RW_VEC4US", osgDB::BaseSerializer::RW_VEC4US)
            .value("RW_VEC4I", osgDB::BaseSerializer::RW_VEC4I)
            .value("RE_VEC4UI", osgDB::BaseSerializer::RE_VEC4UI)
            .export_values()
            ;
        { //::osgDB::BaseSerializer::getName
        
            typedef ::std::string const & ( ::osgDB::BaseSerializer::*getName_function_type)(  ) const;
            
            BaseSerializer_exposer.def( 
                "getName"
                , bp::pure_virtual( getName_function_type(&::osgDB::BaseSerializer::getName) )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osgDB::BaseSerializer::read
        
            typedef bool ( ::osgDB::BaseSerializer::*read_function_type)( ::osgDB::InputStream &,::osg::Object & ) ;
            
            BaseSerializer_exposer.def( 
                "read"
                , bp::pure_virtual( read_function_type(&::osgDB::BaseSerializer::read) )
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
    }

}

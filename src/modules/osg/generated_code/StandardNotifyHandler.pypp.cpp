// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "standardnotifyhandler.pypp.hpp"

namespace bp = boost::python;

struct StandardNotifyHandler_wrapper : osg::StandardNotifyHandler, bp::wrapper< osg::StandardNotifyHandler > {

    StandardNotifyHandler_wrapper()
    : osg::StandardNotifyHandler()
      , bp::wrapper< osg::StandardNotifyHandler >(){
        // null constructor
        
    }

    virtual void notify( ::osg::NotifySeverity severity, char const * message ) {
        if( bp::override func_notify = this->get_override( "notify" ) )
            func_notify( severity, message );
        else{
            this->osg::StandardNotifyHandler::notify( severity, message );
        }
    }
    
    void default_notify( ::osg::NotifySeverity severity, char const * message ) {
        osg::StandardNotifyHandler::notify( severity, message );
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

void register_StandardNotifyHandler_class(){

    bp::class_< StandardNotifyHandler_wrapper, bp::bases< osg::NotifyHandler >, boost::noncopyable >( "StandardNotifyHandler" )    
        .def( 
            "notify"
            , (void ( ::osg::StandardNotifyHandler::* )( ::osg::NotifySeverity,char const * ))(&::osg::StandardNotifyHandler::notify)
            , (void ( StandardNotifyHandler_wrapper::* )( ::osg::NotifySeverity,char const * ))(&StandardNotifyHandler_wrapper::default_notify)
            , ( bp::arg("severity"), bp::arg("message") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( StandardNotifyHandler_wrapper::* )( bool ))(&StandardNotifyHandler_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
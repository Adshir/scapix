// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVAX_SQL_CONNECTIONEVENT_H
#define SCAPIX_JAVAX_SQL_CONNECTIONEVENT_H

namespace scapix::java_api {

namespace java::sql { class SQLException; }
namespace javax::sql { class PooledConnection; }

namespace javax::sql {

class ConnectionEvent : public object_base<SCAPIX_META_STRING("javax/sql/ConnectionEvent"),
	java::util::EventObject>
{
public:

	static ref<ConnectionEvent> new_object(ref<javax::sql::PooledConnection> con);
	static ref<ConnectionEvent> new_object(ref<javax::sql::PooledConnection> con, ref<java::sql::SQLException> ex);
	ref<java::sql::SQLException> getSQLException();

protected:

	ConnectionEvent(handle_type h) : base_(h) {}

};

} // namespace javax::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/sql/SQLException.h>
#include <scapix/java_api/javax/sql/PooledConnection.h>

namespace scapix::java_api {
namespace javax::sql {

inline ref<ConnectionEvent> ConnectionEvent::new_object(ref<javax::sql::PooledConnection> con) { return base_::new_object(con); }
inline ref<ConnectionEvent> ConnectionEvent::new_object(ref<javax::sql::PooledConnection> con, ref<java::sql::SQLException> ex) { return base_::new_object(con, ex); }
inline ref<java::sql::SQLException> ConnectionEvent::getSQLException() { return call_method<SCAPIX_META_STRING("getSQLException"), ref<java::sql::SQLException>>(); }

} // namespace javax::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SQL_CONNECTIONEVENT_H
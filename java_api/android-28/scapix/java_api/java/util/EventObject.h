// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_EVENTOBJECT_H
#define SCAPIX_JAVA_UTIL_EVENTOBJECT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util {

class EventObject : public object_base<SCAPIX_META_STRING("java/util/EventObject"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<EventObject> new_object(ref<java::lang::Object> source);
	ref<java::lang::Object> getSource();
	ref<java::lang::String> toString();

protected:

	EventObject(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util {

inline ref<EventObject> EventObject::new_object(ref<java::lang::Object> source) { return base_::new_object(source); }
inline ref<java::lang::Object> EventObject::getSource() { return call_method<SCAPIX_META_STRING("getSource"), ref<java::lang::Object>>(); }
inline ref<java::lang::String> EventObject::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_EVENTOBJECT_H

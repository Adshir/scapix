// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_DOUBLECONSUMER_H
#define SCAPIX_JAVA_UTIL_FUNCTION_DOUBLECONSUMER_H

namespace scapix::java_api {


namespace java::util::function {

class DoubleConsumer : public object_base<SCAPIX_META_STRING("java/util/function/DoubleConsumer"),
	java::lang::Object>
{
public:

	void accept(jdouble p1);
	ref<java::util::function::DoubleConsumer> andThen(ref<java::util::function::DoubleConsumer> after);

protected:

	DoubleConsumer(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline void DoubleConsumer::accept(jdouble p1) { return call_method<SCAPIX_META_STRING("accept"), void>(p1); }
inline ref<java::util::function::DoubleConsumer> DoubleConsumer::andThen(ref<java::util::function::DoubleConsumer> after) { return call_method<SCAPIX_META_STRING("andThen"), ref<java::util::function::DoubleConsumer>>(after); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_DOUBLECONSUMER_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_ORG_W3C_DOM_PROCESSINGINSTRUCTION_H
#define SCAPIX_ORG_W3C_DOM_PROCESSINGINSTRUCTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace org::w3c::dom {

class ProcessingInstruction : public object_base<SCAPIX_META_STRING("org/w3c/dom/ProcessingInstruction"),
	java::lang::Object,
	org::w3c::dom::Node>
{
public:

	ref<java::lang::String> getTarget();
	ref<java::lang::String> getData();
	void setData(ref<java::lang::String> p1);

protected:

	ProcessingInstruction(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline ref<java::lang::String> ProcessingInstruction::getTarget() { return call_method<SCAPIX_META_STRING("getTarget"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ProcessingInstruction::getData() { return call_method<SCAPIX_META_STRING("getData"), ref<java::lang::String>>(); }
inline void ProcessingInstruction::setData(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("setData"), void>(p1); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_PROCESSINGINSTRUCTION_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_DOMERROR_H
#define SCAPIX_ORG_W3C_DOM_DOMERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::w3c::dom { class DOMLocator; }

namespace org::w3c::dom {

class DOMError : public object_base<SCAPIX_META_STRING("org/w3c/dom/DOMError"),
	java::lang::Object>
{
public:

	static jshort SEVERITY_ERROR_();
	static jshort SEVERITY_FATAL_ERROR_();
	static jshort SEVERITY_WARNING_();

	jshort getSeverity();
	ref<java::lang::String> getMessage();
	ref<java::lang::String> getType();
	ref<java::lang::Object> getRelatedException();
	ref<java::lang::Object> getRelatedData();
	ref<org::w3c::dom::DOMLocator> getLocation();

protected:

	DOMError(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMLocator.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline jshort DOMError::SEVERITY_ERROR_() { return get_static_field<SCAPIX_META_STRING("SEVERITY_ERROR"), jshort>(); }
inline jshort DOMError::SEVERITY_FATAL_ERROR_() { return get_static_field<SCAPIX_META_STRING("SEVERITY_FATAL_ERROR"), jshort>(); }
inline jshort DOMError::SEVERITY_WARNING_() { return get_static_field<SCAPIX_META_STRING("SEVERITY_WARNING"), jshort>(); }
inline jshort DOMError::getSeverity() { return call_method<SCAPIX_META_STRING("getSeverity"), jshort>(); }
inline ref<java::lang::String> DOMError::getMessage() { return call_method<SCAPIX_META_STRING("getMessage"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DOMError::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }
inline ref<java::lang::Object> DOMError::getRelatedException() { return call_method<SCAPIX_META_STRING("getRelatedException"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> DOMError::getRelatedData() { return call_method<SCAPIX_META_STRING("getRelatedData"), ref<java::lang::Object>>(); }
inline ref<org::w3c::dom::DOMLocator> DOMError::getLocation() { return call_method<SCAPIX_META_STRING("getLocation"), ref<org::w3c::dom::DOMLocator>>(); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_DOMERROR_H

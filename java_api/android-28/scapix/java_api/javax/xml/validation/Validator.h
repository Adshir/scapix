// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_VALIDATION_VALIDATOR_H
#define SCAPIX_JAVAX_XML_VALIDATION_VALIDATOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::xml::transform { class Result; }
namespace javax::xml::transform { class Source; }
namespace org::w3c::dom::ls { class LSResourceResolver; }
namespace org::xml::sax { class ErrorHandler; }

namespace javax::xml::validation {

class Validator : public object_base<SCAPIX_META_STRING("javax/xml/validation/Validator"),
	java::lang::Object>
{
public:

	void reset();
	void validate(ref<javax::xml::transform::Source> source);
	void validate(ref<javax::xml::transform::Source> p1, ref<javax::xml::transform::Result> p2);
	void setErrorHandler(ref<org::xml::sax::ErrorHandler> p1);
	ref<org::xml::sax::ErrorHandler> getErrorHandler();
	void setResourceResolver(ref<org::w3c::dom::ls::LSResourceResolver> p1);
	ref<org::w3c::dom::ls::LSResourceResolver> getResourceResolver();
	jboolean getFeature(ref<java::lang::String> name);
	void setFeature(ref<java::lang::String> name, jboolean value);
	void setProperty(ref<java::lang::String> name, ref<java::lang::Object> object);
	ref<java::lang::Object> getProperty(ref<java::lang::String> name);

protected:

	Validator(handle_type h) : base_(h) {}

};

} // namespace javax::xml::validation
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/Result.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/org/w3c/dom/ls/LSResourceResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>

namespace scapix::java_api {
namespace javax::xml::validation {

inline void Validator::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline void Validator::validate(ref<javax::xml::transform::Source> source) { return call_method<SCAPIX_META_STRING("validate"), void>(source); }
inline void Validator::validate(ref<javax::xml::transform::Source> p1, ref<javax::xml::transform::Result> p2) { return call_method<SCAPIX_META_STRING("validate"), void>(p1, p2); }
inline void Validator::setErrorHandler(ref<org::xml::sax::ErrorHandler> p1) { return call_method<SCAPIX_META_STRING("setErrorHandler"), void>(p1); }
inline ref<org::xml::sax::ErrorHandler> Validator::getErrorHandler() { return call_method<SCAPIX_META_STRING("getErrorHandler"), ref<org::xml::sax::ErrorHandler>>(); }
inline void Validator::setResourceResolver(ref<org::w3c::dom::ls::LSResourceResolver> p1) { return call_method<SCAPIX_META_STRING("setResourceResolver"), void>(p1); }
inline ref<org::w3c::dom::ls::LSResourceResolver> Validator::getResourceResolver() { return call_method<SCAPIX_META_STRING("getResourceResolver"), ref<org::w3c::dom::ls::LSResourceResolver>>(); }
inline jboolean Validator::getFeature(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getFeature"), jboolean>(name); }
inline void Validator::setFeature(ref<java::lang::String> name, jboolean value) { return call_method<SCAPIX_META_STRING("setFeature"), void>(name, value); }
inline void Validator::setProperty(ref<java::lang::String> name, ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("setProperty"), void>(name, object); }
inline ref<java::lang::Object> Validator::getProperty(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getProperty"), ref<java::lang::Object>>(name); }

} // namespace javax::xml::validation
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_VALIDATION_VALIDATOR_H
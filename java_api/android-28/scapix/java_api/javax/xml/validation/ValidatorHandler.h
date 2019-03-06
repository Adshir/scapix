// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVAX_XML_VALIDATION_VALIDATORHANDLER_H
#define SCAPIX_JAVAX_XML_VALIDATION_VALIDATORHANDLER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::xml::validation { class TypeInfoProvider; }
namespace org::w3c::dom::ls { class LSResourceResolver; }
namespace org::xml::sax { class ErrorHandler; }

namespace javax::xml::validation {

class ValidatorHandler : public object_base<SCAPIX_META_STRING("javax/xml/validation/ValidatorHandler"),
	java::lang::Object,
	org::xml::sax::ContentHandler>
{
public:

	void setContentHandler(ref<org::xml::sax::ContentHandler> p1);
	ref<org::xml::sax::ContentHandler> getContentHandler();
	void setErrorHandler(ref<org::xml::sax::ErrorHandler> p1);
	ref<org::xml::sax::ErrorHandler> getErrorHandler();
	void setResourceResolver(ref<org::w3c::dom::ls::LSResourceResolver> p1);
	ref<org::w3c::dom::ls::LSResourceResolver> getResourceResolver();
	ref<javax::xml::validation::TypeInfoProvider> getTypeInfoProvider();
	jboolean getFeature(ref<java::lang::String> name);
	void setFeature(ref<java::lang::String> name, jboolean value);
	void setProperty(ref<java::lang::String> name, ref<java::lang::Object> object);
	ref<java::lang::Object> getProperty(ref<java::lang::String> name);

protected:

	ValidatorHandler(handle_type h) : base_(h) {}

};

} // namespace javax::xml::validation
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/validation/TypeInfoProvider.h>
#include <scapix/java_api/org/w3c/dom/ls/LSResourceResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>

namespace scapix::java_api {
namespace javax::xml::validation {

inline void ValidatorHandler::setContentHandler(ref<org::xml::sax::ContentHandler> p1) { return call_method<SCAPIX_META_STRING("setContentHandler"), void>(p1); }
inline ref<org::xml::sax::ContentHandler> ValidatorHandler::getContentHandler() { return call_method<SCAPIX_META_STRING("getContentHandler"), ref<org::xml::sax::ContentHandler>>(); }
inline void ValidatorHandler::setErrorHandler(ref<org::xml::sax::ErrorHandler> p1) { return call_method<SCAPIX_META_STRING("setErrorHandler"), void>(p1); }
inline ref<org::xml::sax::ErrorHandler> ValidatorHandler::getErrorHandler() { return call_method<SCAPIX_META_STRING("getErrorHandler"), ref<org::xml::sax::ErrorHandler>>(); }
inline void ValidatorHandler::setResourceResolver(ref<org::w3c::dom::ls::LSResourceResolver> p1) { return call_method<SCAPIX_META_STRING("setResourceResolver"), void>(p1); }
inline ref<org::w3c::dom::ls::LSResourceResolver> ValidatorHandler::getResourceResolver() { return call_method<SCAPIX_META_STRING("getResourceResolver"), ref<org::w3c::dom::ls::LSResourceResolver>>(); }
inline ref<javax::xml::validation::TypeInfoProvider> ValidatorHandler::getTypeInfoProvider() { return call_method<SCAPIX_META_STRING("getTypeInfoProvider"), ref<javax::xml::validation::TypeInfoProvider>>(); }
inline jboolean ValidatorHandler::getFeature(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getFeature"), jboolean>(name); }
inline void ValidatorHandler::setFeature(ref<java::lang::String> name, jboolean value) { return call_method<SCAPIX_META_STRING("setFeature"), void>(name, value); }
inline void ValidatorHandler::setProperty(ref<java::lang::String> name, ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("setProperty"), void>(name, object); }
inline ref<java::lang::Object> ValidatorHandler::getProperty(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getProperty"), ref<java::lang::Object>>(name); }

} // namespace javax::xml::validation
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_VALIDATION_VALIDATORHANDLER_H
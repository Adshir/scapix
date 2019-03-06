// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/DocumentHandler.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>

#ifndef SCAPIX_ORG_XML_SAX_HANDLERBASE_H
#define SCAPIX_ORG_XML_SAX_HANDLERBASE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::xml::sax { class AttributeList; }
namespace org::xml::sax { class InputSource; }
namespace org::xml::sax { class Locator; }
namespace org::xml::sax { class SAXParseException; }

namespace org::xml::sax {

class HandlerBase : public object_base<SCAPIX_META_STRING("org/xml/sax/HandlerBase"),
	java::lang::Object,
	org::xml::sax::EntityResolver,
	org::xml::sax::DTDHandler,
	org::xml::sax::DocumentHandler,
	org::xml::sax::ErrorHandler>
{
public:

	static ref<HandlerBase> new_object();
	ref<org::xml::sax::InputSource> resolveEntity(ref<java::lang::String> publicId, ref<java::lang::String> systemId);
	void notationDecl(ref<java::lang::String> name, ref<java::lang::String> publicId, ref<java::lang::String> systemId);
	void unparsedEntityDecl(ref<java::lang::String> name, ref<java::lang::String> publicId, ref<java::lang::String> systemId, ref<java::lang::String> notationName);
	void setDocumentLocator(ref<org::xml::sax::Locator> locator);
	void startDocument();
	void endDocument();
	void startElement(ref<java::lang::String> name, ref<org::xml::sax::AttributeList> attributes);
	void endElement(ref<java::lang::String> name);
	void characters(ref<link::java::array<jchar>> ch, jint start, jint length);
	void ignorableWhitespace(ref<link::java::array<jchar>> ch, jint start, jint length);
	void processingInstruction(ref<java::lang::String> target, ref<java::lang::String> data);
	void warning(ref<org::xml::sax::SAXParseException> e);
	void error(ref<org::xml::sax::SAXParseException> e);
	void fatalError(ref<org::xml::sax::SAXParseException> e);

protected:

	HandlerBase(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/AttributeList.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#include <scapix/java_api/org/xml/sax/SAXParseException.h>

namespace scapix::java_api {
namespace org::xml::sax {

inline ref<HandlerBase> HandlerBase::new_object() { return base_::new_object(); }
inline ref<org::xml::sax::InputSource> HandlerBase::resolveEntity(ref<java::lang::String> publicId, ref<java::lang::String> systemId) { return call_method<SCAPIX_META_STRING("resolveEntity"), ref<org::xml::sax::InputSource>>(publicId, systemId); }
inline void HandlerBase::notationDecl(ref<java::lang::String> name, ref<java::lang::String> publicId, ref<java::lang::String> systemId) { return call_method<SCAPIX_META_STRING("notationDecl"), void>(name, publicId, systemId); }
inline void HandlerBase::unparsedEntityDecl(ref<java::lang::String> name, ref<java::lang::String> publicId, ref<java::lang::String> systemId, ref<java::lang::String> notationName) { return call_method<SCAPIX_META_STRING("unparsedEntityDecl"), void>(name, publicId, systemId, notationName); }
inline void HandlerBase::setDocumentLocator(ref<org::xml::sax::Locator> locator) { return call_method<SCAPIX_META_STRING("setDocumentLocator"), void>(locator); }
inline void HandlerBase::startDocument() { return call_method<SCAPIX_META_STRING("startDocument"), void>(); }
inline void HandlerBase::endDocument() { return call_method<SCAPIX_META_STRING("endDocument"), void>(); }
inline void HandlerBase::startElement(ref<java::lang::String> name, ref<org::xml::sax::AttributeList> attributes) { return call_method<SCAPIX_META_STRING("startElement"), void>(name, attributes); }
inline void HandlerBase::endElement(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("endElement"), void>(name); }
inline void HandlerBase::characters(ref<link::java::array<jchar>> ch, jint start, jint length) { return call_method<SCAPIX_META_STRING("characters"), void>(ch, start, length); }
inline void HandlerBase::ignorableWhitespace(ref<link::java::array<jchar>> ch, jint start, jint length) { return call_method<SCAPIX_META_STRING("ignorableWhitespace"), void>(ch, start, length); }
inline void HandlerBase::processingInstruction(ref<java::lang::String> target, ref<java::lang::String> data) { return call_method<SCAPIX_META_STRING("processingInstruction"), void>(target, data); }
inline void HandlerBase::warning(ref<org::xml::sax::SAXParseException> e) { return call_method<SCAPIX_META_STRING("warning"), void>(e); }
inline void HandlerBase::error(ref<org::xml::sax::SAXParseException> e) { return call_method<SCAPIX_META_STRING("error"), void>(e); }
inline void HandlerBase::fatalError(ref<org::xml::sax::SAXParseException> e) { return call_method<SCAPIX_META_STRING("fatalError"), void>(e); }

} // namespace org::xml::sax
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_HANDLERBASE_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XML_SAX_DOCUMENTHANDLER_H
#define SCAPIX_ORG_XML_SAX_DOCUMENTHANDLER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::xml::sax { class AttributeList; }
namespace org::xml::sax { class Locator; }

namespace org::xml::sax {

class DocumentHandler : public object_base<SCAPIX_META_STRING("org/xml/sax/DocumentHandler"),
	java::lang::Object>
{
public:

	void setDocumentLocator(ref<org::xml::sax::Locator> p1);
	void startDocument();
	void endDocument();
	void startElement(ref<java::lang::String> p1, ref<org::xml::sax::AttributeList> p2);
	void endElement(ref<java::lang::String> p1);
	void characters(ref<link::java::array<jchar>> p1, jint p2, jint p3);
	void ignorableWhitespace(ref<link::java::array<jchar>> p1, jint p2, jint p3);
	void processingInstruction(ref<java::lang::String> p1, ref<java::lang::String> p2);

protected:

	DocumentHandler(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/AttributeList.h>
#include <scapix/java_api/org/xml/sax/Locator.h>

namespace scapix::java_api {
namespace org::xml::sax {

inline void DocumentHandler::setDocumentLocator(ref<org::xml::sax::Locator> p1) { return call_method<SCAPIX_META_STRING("setDocumentLocator"), void>(p1); }
inline void DocumentHandler::startDocument() { return call_method<SCAPIX_META_STRING("startDocument"), void>(); }
inline void DocumentHandler::endDocument() { return call_method<SCAPIX_META_STRING("endDocument"), void>(); }
inline void DocumentHandler::startElement(ref<java::lang::String> p1, ref<org::xml::sax::AttributeList> p2) { return call_method<SCAPIX_META_STRING("startElement"), void>(p1, p2); }
inline void DocumentHandler::endElement(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("endElement"), void>(p1); }
inline void DocumentHandler::characters(ref<link::java::array<jchar>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("characters"), void>(p1, p2, p3); }
inline void DocumentHandler::ignorableWhitespace(ref<link::java::array<jchar>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("ignorableWhitespace"), void>(p1, p2, p3); }
inline void DocumentHandler::processingInstruction(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("processingInstruction"), void>(p1, p2); }

} // namespace org::xml::sax
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_DOCUMENTHANDLER_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XML_SAX_CONTENTHANDLER_H
#define SCAPIX_ORG_XML_SAX_CONTENTHANDLER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::xml::sax { class Attributes; }
namespace org::xml::sax { class Locator; }

namespace org::xml::sax {

class ContentHandler : public object_base<SCAPIX_META_STRING("org/xml/sax/ContentHandler"),
	java::lang::Object>
{
public:

	void setDocumentLocator(ref<org::xml::sax::Locator> p1);
	void startDocument();
	void endDocument();
	void startPrefixMapping(ref<java::lang::String> p1, ref<java::lang::String> p2);
	void endPrefixMapping(ref<java::lang::String> p1);
	void startElement(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3, ref<org::xml::sax::Attributes> p4);
	void endElement(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3);
	void characters(ref<link::java::array<jchar>> p1, jint p2, jint p3);
	void ignorableWhitespace(ref<link::java::array<jchar>> p1, jint p2, jint p3);
	void processingInstruction(ref<java::lang::String> p1, ref<java::lang::String> p2);
	void skippedEntity(ref<java::lang::String> p1);

protected:

	ContentHandler(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/Locator.h>

namespace scapix::java_api {
namespace org::xml::sax {

inline void ContentHandler::setDocumentLocator(ref<org::xml::sax::Locator> p1) { return call_method<SCAPIX_META_STRING("setDocumentLocator"), void>(p1); }
inline void ContentHandler::startDocument() { return call_method<SCAPIX_META_STRING("startDocument"), void>(); }
inline void ContentHandler::endDocument() { return call_method<SCAPIX_META_STRING("endDocument"), void>(); }
inline void ContentHandler::startPrefixMapping(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("startPrefixMapping"), void>(p1, p2); }
inline void ContentHandler::endPrefixMapping(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("endPrefixMapping"), void>(p1); }
inline void ContentHandler::startElement(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3, ref<org::xml::sax::Attributes> p4) { return call_method<SCAPIX_META_STRING("startElement"), void>(p1, p2, p3, p4); }
inline void ContentHandler::endElement(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3) { return call_method<SCAPIX_META_STRING("endElement"), void>(p1, p2, p3); }
inline void ContentHandler::characters(ref<link::java::array<jchar>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("characters"), void>(p1, p2, p3); }
inline void ContentHandler::ignorableWhitespace(ref<link::java::array<jchar>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("ignorableWhitespace"), void>(p1, p2, p3); }
inline void ContentHandler::processingInstruction(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("processingInstruction"), void>(p1, p2); }
inline void ContentHandler::skippedEntity(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("skippedEntity"), void>(p1); }

} // namespace org::xml::sax
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_CONTENTHANDLER_H
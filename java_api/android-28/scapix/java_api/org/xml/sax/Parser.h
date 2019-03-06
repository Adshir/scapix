// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XML_SAX_PARSER_H
#define SCAPIX_ORG_XML_SAX_PARSER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Locale; }
namespace org::xml::sax { class DTDHandler; }
namespace org::xml::sax { class DocumentHandler; }
namespace org::xml::sax { class EntityResolver; }
namespace org::xml::sax { class ErrorHandler; }
namespace org::xml::sax { class InputSource; }

namespace org::xml::sax {

class Parser : public object_base<SCAPIX_META_STRING("org/xml/sax/Parser"),
	java::lang::Object>
{
public:

	void setLocale(ref<java::util::Locale> p1);
	void setEntityResolver(ref<org::xml::sax::EntityResolver> p1);
	void setDTDHandler(ref<org::xml::sax::DTDHandler> p1);
	void setDocumentHandler(ref<org::xml::sax::DocumentHandler> p1);
	void setErrorHandler(ref<org::xml::sax::ErrorHandler> p1);
	void parse(ref<org::xml::sax::InputSource> p1);
	void parse(ref<java::lang::String> p1);

protected:

	Parser(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/DocumentHandler.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>

namespace scapix::java_api {
namespace org::xml::sax {

inline void Parser::setLocale(ref<java::util::Locale> p1) { return call_method<SCAPIX_META_STRING("setLocale"), void>(p1); }
inline void Parser::setEntityResolver(ref<org::xml::sax::EntityResolver> p1) { return call_method<SCAPIX_META_STRING("setEntityResolver"), void>(p1); }
inline void Parser::setDTDHandler(ref<org::xml::sax::DTDHandler> p1) { return call_method<SCAPIX_META_STRING("setDTDHandler"), void>(p1); }
inline void Parser::setDocumentHandler(ref<org::xml::sax::DocumentHandler> p1) { return call_method<SCAPIX_META_STRING("setDocumentHandler"), void>(p1); }
inline void Parser::setErrorHandler(ref<org::xml::sax::ErrorHandler> p1) { return call_method<SCAPIX_META_STRING("setErrorHandler"), void>(p1); }
inline void Parser::parse(ref<org::xml::sax::InputSource> p1) { return call_method<SCAPIX_META_STRING("parse"), void>(p1); }
inline void Parser::parse(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("parse"), void>(p1); }

} // namespace org::xml::sax
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_PARSER_H
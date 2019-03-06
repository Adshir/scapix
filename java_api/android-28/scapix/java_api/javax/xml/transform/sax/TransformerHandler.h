// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/ext/LexicalHandler.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_H
#define SCAPIX_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::xml::transform { class Result; }
namespace javax::xml::transform { class Transformer; }

namespace javax::xml::transform::sax {

class TransformerHandler : public object_base<SCAPIX_META_STRING("javax/xml/transform/sax/TransformerHandler"),
	java::lang::Object,
	org::xml::sax::ContentHandler,
	org::xml::sax::ext::LexicalHandler,
	org::xml::sax::DTDHandler>
{
public:

	void setResult(ref<javax::xml::transform::Result> p1);
	void setSystemId(ref<java::lang::String> p1);
	ref<java::lang::String> getSystemId();
	ref<javax::xml::transform::Transformer> getTransformer();

protected:

	TransformerHandler(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/Result.h>
#include <scapix/java_api/javax/xml/transform/Transformer.h>

namespace scapix::java_api {
namespace javax::xml::transform::sax {

inline void TransformerHandler::setResult(ref<javax::xml::transform::Result> p1) { return call_method<SCAPIX_META_STRING("setResult"), void>(p1); }
inline void TransformerHandler::setSystemId(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("setSystemId"), void>(p1); }
inline ref<java::lang::String> TransformerHandler::getSystemId() { return call_method<SCAPIX_META_STRING("getSystemId"), ref<java::lang::String>>(); }
inline ref<javax::xml::transform::Transformer> TransformerHandler::getTransformer() { return call_method<SCAPIX_META_STRING("getTransformer"), ref<javax::xml::transform::Transformer>>(); }

} // namespace javax::xml::transform::sax
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_H
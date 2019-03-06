// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/javax/xml/xpath/XPathException.h>

#ifndef SCAPIX_JAVAX_XML_XPATH_XPATHEXPRESSIONEXCEPTION_H
#define SCAPIX_JAVAX_XML_XPATH_XPATHEXPRESSIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace javax::xml::xpath {

class XPathExpressionException : public object_base<SCAPIX_META_STRING("javax/xml/xpath/XPathExpressionException"),
	javax::xml::xpath::XPathException>
{
public:

	static ref<XPathExpressionException> new_object(ref<java::lang::String> message);
	static ref<XPathExpressionException> new_object(ref<java::lang::Throwable> cause);

protected:

	XPathExpressionException(handle_type h) : base_(h) {}

};

} // namespace javax::xml::xpath
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace javax::xml::xpath {

inline ref<XPathExpressionException> XPathExpressionException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<XPathExpressionException> XPathExpressionException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace javax::xml::xpath
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_XPATH_XPATHEXPRESSIONEXCEPTION_H
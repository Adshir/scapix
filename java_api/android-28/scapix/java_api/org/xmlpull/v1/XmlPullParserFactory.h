// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_H
#define SCAPIX_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace org::xmlpull::v1 { class XmlPullParser; }
namespace org::xmlpull::v1 { class XmlSerializer; }

namespace org::xmlpull::v1 {

class XmlPullParserFactory : public object_base<SCAPIX_META_STRING("org/xmlpull/v1/XmlPullParserFactory"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> PROPERTY_NAME_();

	void setFeature(ref<java::lang::String> name, jboolean state);
	jboolean getFeature(ref<java::lang::String> name);
	void setNamespaceAware(jboolean awareness);
	jboolean isNamespaceAware();
	void setValidating(jboolean validating);
	jboolean isValidating();
	ref<org::xmlpull::v1::XmlPullParser> newPullParser();
	ref<org::xmlpull::v1::XmlSerializer> newSerializer();
	static ref<org::xmlpull::v1::XmlPullParserFactory> newInstance();
	static ref<org::xmlpull::v1::XmlPullParserFactory> newInstance(ref<java::lang::String> unused, ref<java::lang::Class> unused2);

protected:

	XmlPullParserFactory(handle_type h) : base_(h) {}

};

} // namespace org::xmlpull::v1
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#include <scapix/java_api/org/xmlpull/v1/XmlSerializer.h>

namespace scapix::java_api {
namespace org::xmlpull::v1 {

inline ref<java::lang::String> XmlPullParserFactory::PROPERTY_NAME_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_NAME"), ref<java::lang::String>>(); }
inline void XmlPullParserFactory::setFeature(ref<java::lang::String> name, jboolean state) { return call_method<SCAPIX_META_STRING("setFeature"), void>(name, state); }
inline jboolean XmlPullParserFactory::getFeature(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getFeature"), jboolean>(name); }
inline void XmlPullParserFactory::setNamespaceAware(jboolean awareness) { return call_method<SCAPIX_META_STRING("setNamespaceAware"), void>(awareness); }
inline jboolean XmlPullParserFactory::isNamespaceAware() { return call_method<SCAPIX_META_STRING("isNamespaceAware"), jboolean>(); }
inline void XmlPullParserFactory::setValidating(jboolean validating) { return call_method<SCAPIX_META_STRING("setValidating"), void>(validating); }
inline jboolean XmlPullParserFactory::isValidating() { return call_method<SCAPIX_META_STRING("isValidating"), jboolean>(); }
inline ref<org::xmlpull::v1::XmlPullParser> XmlPullParserFactory::newPullParser() { return call_method<SCAPIX_META_STRING("newPullParser"), ref<org::xmlpull::v1::XmlPullParser>>(); }
inline ref<org::xmlpull::v1::XmlSerializer> XmlPullParserFactory::newSerializer() { return call_method<SCAPIX_META_STRING("newSerializer"), ref<org::xmlpull::v1::XmlSerializer>>(); }
inline ref<org::xmlpull::v1::XmlPullParserFactory> XmlPullParserFactory::newInstance() { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<org::xmlpull::v1::XmlPullParserFactory>>(); }
inline ref<org::xmlpull::v1::XmlPullParserFactory> XmlPullParserFactory::newInstance(ref<java::lang::String> unused, ref<java::lang::Class> unused2) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<org::xmlpull::v1::XmlPullParserFactory>>(unused, unused2); }

} // namespace org::xmlpull::v1
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_H

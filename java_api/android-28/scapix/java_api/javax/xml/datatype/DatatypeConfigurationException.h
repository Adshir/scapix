// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_H
#define SCAPIX_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_H

namespace scapix::java_api {

namespace java::io { class PrintStream; }
namespace java::io { class PrintWriter; }
namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace javax::xml::datatype {

class DatatypeConfigurationException : public object_base<SCAPIX_META_STRING("javax/xml/datatype/DatatypeConfigurationException"),
	java::lang::Exception>
{
public:

	static ref<DatatypeConfigurationException> new_object();
	static ref<DatatypeConfigurationException> new_object(ref<java::lang::String> message);
	static ref<DatatypeConfigurationException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<DatatypeConfigurationException> new_object(ref<java::lang::Throwable> cause);
	void printStackTrace();
	void printStackTrace(ref<java::io::PrintStream> s);
	void printStackTrace(ref<java::io::PrintWriter> s);

protected:

	DatatypeConfigurationException(handle_type h) : base_(h) {}

};

} // namespace javax::xml::datatype
} // namespace scapix::java_api

#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace javax::xml::datatype {

inline ref<DatatypeConfigurationException> DatatypeConfigurationException::new_object() { return base_::new_object(); }
inline ref<DatatypeConfigurationException> DatatypeConfigurationException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<DatatypeConfigurationException> DatatypeConfigurationException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<DatatypeConfigurationException> DatatypeConfigurationException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline void DatatypeConfigurationException::printStackTrace() { return call_method<SCAPIX_META_STRING("printStackTrace"), void>(); }
inline void DatatypeConfigurationException::printStackTrace(ref<java::io::PrintStream> s) { return call_method<SCAPIX_META_STRING("printStackTrace"), void>(s); }
inline void DatatypeConfigurationException::printStackTrace(ref<java::io::PrintWriter> s) { return call_method<SCAPIX_META_STRING("printStackTrace"), void>(s); }

} // namespace javax::xml::datatype
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_H
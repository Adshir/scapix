// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC_H
#define SCAPIX_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC_H

namespace scapix::java_api {
namespace javax::crypto::spec {

class RC5ParameterSpec : public object_base<SCAPIX_META_STRING("javax/crypto/spec/RC5ParameterSpec"),
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static ref<RC5ParameterSpec> new_object(jint version, jint rounds, jint wordSize);
	static ref<RC5ParameterSpec> new_object(jint version, jint rounds, jint wordSize, ref<link::java::array<jbyte>> iv);
	static ref<RC5ParameterSpec> new_object(jint version, jint rounds, jint wordSize, ref<link::java::array<jbyte>> iv, jint offset);
	jint getVersion();
	jint getRounds();
	jint getWordSize();
	ref<link::java::array<jbyte>> getIV();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();

protected:

	RC5ParameterSpec(handle_type h) : base_(h) {}

};

} // namespace javax::crypto::spec
} // namespace scapix::java_api


namespace scapix::java_api {
namespace javax::crypto::spec {

inline ref<RC5ParameterSpec> RC5ParameterSpec::new_object(jint version, jint rounds, jint wordSize) { return base_::new_object(version, rounds, wordSize); }
inline ref<RC5ParameterSpec> RC5ParameterSpec::new_object(jint version, jint rounds, jint wordSize, ref<link::java::array<jbyte>> iv) { return base_::new_object(version, rounds, wordSize, iv); }
inline ref<RC5ParameterSpec> RC5ParameterSpec::new_object(jint version, jint rounds, jint wordSize, ref<link::java::array<jbyte>> iv, jint offset) { return base_::new_object(version, rounds, wordSize, iv, offset); }
inline jint RC5ParameterSpec::getVersion() { return call_method<SCAPIX_META_STRING("getVersion"), jint>(); }
inline jint RC5ParameterSpec::getRounds() { return call_method<SCAPIX_META_STRING("getRounds"), jint>(); }
inline jint RC5ParameterSpec::getWordSize() { return call_method<SCAPIX_META_STRING("getWordSize"), jint>(); }
inline ref<link::java::array<jbyte>> RC5ParameterSpec::getIV() { return call_method<SCAPIX_META_STRING("getIV"), ref<link::java::array<jbyte>>>(); }
inline jboolean RC5ParameterSpec::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint RC5ParameterSpec::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace javax::crypto::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_CRYPTO_KEYGENERATOR_H
#define SCAPIX_JAVAX_CRYPTO_KEYGENERATOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class Provider; }
namespace java::security { class SecureRandom; }
namespace java::security::spec { class AlgorithmParameterSpec; }
namespace javax::crypto { class SecretKey; }

namespace javax::crypto {

class KeyGenerator : public object_base<SCAPIX_META_STRING("javax/crypto/KeyGenerator"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getAlgorithm();
	static ref<javax::crypto::KeyGenerator> getInstance(ref<java::lang::String> algorithm);
	static ref<javax::crypto::KeyGenerator> getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider);
	static ref<javax::crypto::KeyGenerator> getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider);
	ref<java::security::Provider> getProvider();
	void init(ref<java::security::SecureRandom> random);
	void init(ref<java::security::spec::AlgorithmParameterSpec> params);
	void init(ref<java::security::spec::AlgorithmParameterSpec> params, ref<java::security::SecureRandom> random);
	void init(jint keysize);
	void init(jint keysize, ref<java::security::SecureRandom> random);
	ref<javax::crypto::SecretKey> generateKey();

protected:

	KeyGenerator(handle_type h) : base_(h) {}

};

} // namespace javax::crypto
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>

namespace scapix::java_api {
namespace javax::crypto {

inline ref<java::lang::String> KeyGenerator::getAlgorithm() { return call_method<SCAPIX_META_STRING("getAlgorithm"), ref<java::lang::String>>(); }
inline ref<javax::crypto::KeyGenerator> KeyGenerator::getInstance(ref<java::lang::String> algorithm) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::crypto::KeyGenerator>>(algorithm); }
inline ref<javax::crypto::KeyGenerator> KeyGenerator::getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::crypto::KeyGenerator>>(algorithm, provider); }
inline ref<javax::crypto::KeyGenerator> KeyGenerator::getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::crypto::KeyGenerator>>(algorithm, provider); }
inline ref<java::security::Provider> KeyGenerator::getProvider() { return call_method<SCAPIX_META_STRING("getProvider"), ref<java::security::Provider>>(); }
inline void KeyGenerator::init(ref<java::security::SecureRandom> random) { return call_method<SCAPIX_META_STRING("init"), void>(random); }
inline void KeyGenerator::init(ref<java::security::spec::AlgorithmParameterSpec> params) { return call_method<SCAPIX_META_STRING("init"), void>(params); }
inline void KeyGenerator::init(ref<java::security::spec::AlgorithmParameterSpec> params, ref<java::security::SecureRandom> random) { return call_method<SCAPIX_META_STRING("init"), void>(params, random); }
inline void KeyGenerator::init(jint keysize) { return call_method<SCAPIX_META_STRING("init"), void>(keysize); }
inline void KeyGenerator::init(jint keysize, ref<java::security::SecureRandom> random) { return call_method<SCAPIX_META_STRING("init"), void>(keysize, random); }
inline ref<javax::crypto::SecretKey> KeyGenerator::generateKey() { return call_method<SCAPIX_META_STRING("generateKey"), ref<javax::crypto::SecretKey>>(); }

} // namespace javax::crypto
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_KEYGENERATOR_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_CRYPTO_CIPHERSPI_H
#define SCAPIX_JAVAX_CRYPTO_CIPHERSPI_H

namespace scapix::java_api {
namespace javax::crypto {

class CipherSpi : public object_base<SCAPIX_META_STRING("javax/crypto/CipherSpi"),
	java::lang::Object>
{
public:

	static ref<CipherSpi> new_object();

protected:

	CipherSpi(handle_type h) : base_(h) {}

};

} // namespace javax::crypto
} // namespace scapix::java_api


namespace scapix::java_api {
namespace javax::crypto {

inline ref<CipherSpi> CipherSpi::new_object() { return base_::new_object(); }

} // namespace javax::crypto
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_CIPHERSPI_H
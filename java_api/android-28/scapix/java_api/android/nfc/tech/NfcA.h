// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/nfc/tech/TagTechnology.h>

#ifndef SCAPIX_ANDROID_NFC_TECH_NFCA_H
#define SCAPIX_ANDROID_NFC_TECH_NFCA_H

namespace scapix::java_api {

namespace android::nfc { class Tag; }

namespace android::nfc::tech {

class NfcA : public object_base<SCAPIX_META_STRING("android/nfc/tech/NfcA"),
	java::lang::Object,
	android::nfc::tech::TagTechnology>
{
public:

	static ref<android::nfc::tech::NfcA> get(ref<android::nfc::Tag> tag);
	ref<link::java::array<jbyte>> getAtqa();
	jshort getSak();
	ref<link::java::array<jbyte>> transceive(ref<link::java::array<jbyte>> data);
	jint getMaxTransceiveLength();
	void setTimeout(jint timeout);
	jint getTimeout();
	jboolean isConnected();
	ref<android::nfc::Tag> getTag();
	void close();
	void connect();

protected:

	NfcA(handle_type h) : base_(h) {}

};

} // namespace android::nfc::tech
} // namespace scapix::java_api

#include <scapix/java_api/android/nfc/Tag.h>

namespace scapix::java_api {
namespace android::nfc::tech {

inline ref<android::nfc::tech::NfcA> NfcA::get(ref<android::nfc::Tag> tag) { return call_static_method<SCAPIX_META_STRING("get"), ref<android::nfc::tech::NfcA>>(tag); }
inline ref<link::java::array<jbyte>> NfcA::getAtqa() { return call_method<SCAPIX_META_STRING("getAtqa"), ref<link::java::array<jbyte>>>(); }
inline jshort NfcA::getSak() { return call_method<SCAPIX_META_STRING("getSak"), jshort>(); }
inline ref<link::java::array<jbyte>> NfcA::transceive(ref<link::java::array<jbyte>> data) { return call_method<SCAPIX_META_STRING("transceive"), ref<link::java::array<jbyte>>>(data); }
inline jint NfcA::getMaxTransceiveLength() { return call_method<SCAPIX_META_STRING("getMaxTransceiveLength"), jint>(); }
inline void NfcA::setTimeout(jint timeout) { return call_method<SCAPIX_META_STRING("setTimeout"), void>(timeout); }
inline jint NfcA::getTimeout() { return call_method<SCAPIX_META_STRING("getTimeout"), jint>(); }
inline jboolean NfcA::isConnected() { return call_method<SCAPIX_META_STRING("isConnected"), jboolean>(); }
inline ref<android::nfc::Tag> NfcA::getTag() { return call_method<SCAPIX_META_STRING("getTag"), ref<android::nfc::Tag>>(); }
inline void NfcA::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void NfcA::connect() { return call_method<SCAPIX_META_STRING("connect"), void>(); }

} // namespace android::nfc::tech
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_TECH_NFCA_H

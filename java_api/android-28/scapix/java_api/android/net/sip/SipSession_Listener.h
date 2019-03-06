// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_SIP_SIPSESSION_LISTENER_H
#define SCAPIX_ANDROID_NET_SIP_SIPSESSION_LISTENER_H

namespace scapix::java_api {

namespace android::net::sip { class SipProfile; }
namespace android::net::sip { class SipSession; }
namespace java::lang { class String; }

namespace android::net::sip {

class SipSession_Listener : public object_base<SCAPIX_META_STRING("android/net/sip/SipSession$Listener"),
	java::lang::Object>
{
public:

	static ref<SipSession_Listener> new_object();
	void onCalling(ref<android::net::sip::SipSession> session);
	void onRinging(ref<android::net::sip::SipSession> session, ref<android::net::sip::SipProfile> caller, ref<java::lang::String> sessionDescription);
	void onRingingBack(ref<android::net::sip::SipSession> session);
	void onCallEstablished(ref<android::net::sip::SipSession> session, ref<java::lang::String> sessionDescription);
	void onCallEnded(ref<android::net::sip::SipSession> session);
	void onCallBusy(ref<android::net::sip::SipSession> session);
	void onError(ref<android::net::sip::SipSession> session, jint errorCode, ref<java::lang::String> errorMessage);
	void onCallChangeFailed(ref<android::net::sip::SipSession> session, jint errorCode, ref<java::lang::String> errorMessage);
	void onRegistering(ref<android::net::sip::SipSession> session);
	void onRegistrationDone(ref<android::net::sip::SipSession> session, jint duration);
	void onRegistrationFailed(ref<android::net::sip::SipSession> session, jint errorCode, ref<java::lang::String> errorMessage);
	void onRegistrationTimeout(ref<android::net::sip::SipSession> session);

protected:

	SipSession_Listener(handle_type h) : base_(h) {}

};

} // namespace android::net::sip
} // namespace scapix::java_api

#include <scapix/java_api/android/net/sip/SipProfile.h>
#include <scapix/java_api/android/net/sip/SipSession.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::sip {

inline ref<SipSession_Listener> SipSession_Listener::new_object() { return base_::new_object(); }
inline void SipSession_Listener::onCalling(ref<android::net::sip::SipSession> session) { return call_method<SCAPIX_META_STRING("onCalling"), void>(session); }
inline void SipSession_Listener::onRinging(ref<android::net::sip::SipSession> session, ref<android::net::sip::SipProfile> caller, ref<java::lang::String> sessionDescription) { return call_method<SCAPIX_META_STRING("onRinging"), void>(session, caller, sessionDescription); }
inline void SipSession_Listener::onRingingBack(ref<android::net::sip::SipSession> session) { return call_method<SCAPIX_META_STRING("onRingingBack"), void>(session); }
inline void SipSession_Listener::onCallEstablished(ref<android::net::sip::SipSession> session, ref<java::lang::String> sessionDescription) { return call_method<SCAPIX_META_STRING("onCallEstablished"), void>(session, sessionDescription); }
inline void SipSession_Listener::onCallEnded(ref<android::net::sip::SipSession> session) { return call_method<SCAPIX_META_STRING("onCallEnded"), void>(session); }
inline void SipSession_Listener::onCallBusy(ref<android::net::sip::SipSession> session) { return call_method<SCAPIX_META_STRING("onCallBusy"), void>(session); }
inline void SipSession_Listener::onError(ref<android::net::sip::SipSession> session, jint errorCode, ref<java::lang::String> errorMessage) { return call_method<SCAPIX_META_STRING("onError"), void>(session, errorCode, errorMessage); }
inline void SipSession_Listener::onCallChangeFailed(ref<android::net::sip::SipSession> session, jint errorCode, ref<java::lang::String> errorMessage) { return call_method<SCAPIX_META_STRING("onCallChangeFailed"), void>(session, errorCode, errorMessage); }
inline void SipSession_Listener::onRegistering(ref<android::net::sip::SipSession> session) { return call_method<SCAPIX_META_STRING("onRegistering"), void>(session); }
inline void SipSession_Listener::onRegistrationDone(ref<android::net::sip::SipSession> session, jint duration) { return call_method<SCAPIX_META_STRING("onRegistrationDone"), void>(session, duration); }
inline void SipSession_Listener::onRegistrationFailed(ref<android::net::sip::SipSession> session, jint errorCode, ref<java::lang::String> errorMessage) { return call_method<SCAPIX_META_STRING("onRegistrationFailed"), void>(session, errorCode, errorMessage); }
inline void SipSession_Listener::onRegistrationTimeout(ref<android::net::sip::SipSession> session) { return call_method<SCAPIX_META_STRING("onRegistrationTimeout"), void>(session); }

} // namespace android::net::sip
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_SIP_SIPSESSION_LISTENER_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MTP_MTPEVENT_H
#define SCAPIX_ANDROID_MTP_MTPEVENT_H

namespace scapix::java_api {
namespace android::mtp {

class MtpEvent : public object_base<SCAPIX_META_STRING("android/mtp/MtpEvent"),
	java::lang::Object>
{
public:

	static jint EVENT_CANCEL_TRANSACTION_();
	static jint EVENT_CAPTURE_COMPLETE_();
	static jint EVENT_DEVICE_INFO_CHANGED_();
	static jint EVENT_DEVICE_PROP_CHANGED_();
	static jint EVENT_DEVICE_RESET_();
	static jint EVENT_OBJECT_ADDED_();
	static jint EVENT_OBJECT_INFO_CHANGED_();
	static jint EVENT_OBJECT_PROP_CHANGED_();
	static jint EVENT_OBJECT_PROP_DESC_CHANGED_();
	static jint EVENT_OBJECT_REFERENCES_CHANGED_();
	static jint EVENT_OBJECT_REMOVED_();
	static jint EVENT_REQUEST_OBJECT_TRANSFER_();
	static jint EVENT_STORAGE_INFO_CHANGED_();
	static jint EVENT_STORE_ADDED_();
	static jint EVENT_STORE_FULL_();
	static jint EVENT_STORE_REMOVED_();
	static jint EVENT_UNDEFINED_();
	static jint EVENT_UNREPORTED_STATUS_();

	jint getEventCode();
	jint getParameter1();
	jint getParameter2();
	jint getParameter3();
	jint getObjectHandle();
	jint getStorageId();
	jint getDevicePropCode();
	jint getTransactionId();
	jint getObjectPropCode();
	jint getObjectFormatCode();

protected:

	MtpEvent(handle_type h) : base_(h) {}

};

} // namespace android::mtp
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::mtp {

inline jint MtpEvent::EVENT_CANCEL_TRANSACTION_() { return get_static_field<SCAPIX_META_STRING("EVENT_CANCEL_TRANSACTION"), jint>(); }
inline jint MtpEvent::EVENT_CAPTURE_COMPLETE_() { return get_static_field<SCAPIX_META_STRING("EVENT_CAPTURE_COMPLETE"), jint>(); }
inline jint MtpEvent::EVENT_DEVICE_INFO_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_DEVICE_INFO_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_DEVICE_PROP_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_DEVICE_PROP_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_DEVICE_RESET_() { return get_static_field<SCAPIX_META_STRING("EVENT_DEVICE_RESET"), jint>(); }
inline jint MtpEvent::EVENT_OBJECT_ADDED_() { return get_static_field<SCAPIX_META_STRING("EVENT_OBJECT_ADDED"), jint>(); }
inline jint MtpEvent::EVENT_OBJECT_INFO_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_OBJECT_INFO_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_OBJECT_PROP_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_OBJECT_PROP_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_OBJECT_PROP_DESC_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_OBJECT_PROP_DESC_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_OBJECT_REFERENCES_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_OBJECT_REFERENCES_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_OBJECT_REMOVED_() { return get_static_field<SCAPIX_META_STRING("EVENT_OBJECT_REMOVED"), jint>(); }
inline jint MtpEvent::EVENT_REQUEST_OBJECT_TRANSFER_() { return get_static_field<SCAPIX_META_STRING("EVENT_REQUEST_OBJECT_TRANSFER"), jint>(); }
inline jint MtpEvent::EVENT_STORAGE_INFO_CHANGED_() { return get_static_field<SCAPIX_META_STRING("EVENT_STORAGE_INFO_CHANGED"), jint>(); }
inline jint MtpEvent::EVENT_STORE_ADDED_() { return get_static_field<SCAPIX_META_STRING("EVENT_STORE_ADDED"), jint>(); }
inline jint MtpEvent::EVENT_STORE_FULL_() { return get_static_field<SCAPIX_META_STRING("EVENT_STORE_FULL"), jint>(); }
inline jint MtpEvent::EVENT_STORE_REMOVED_() { return get_static_field<SCAPIX_META_STRING("EVENT_STORE_REMOVED"), jint>(); }
inline jint MtpEvent::EVENT_UNDEFINED_() { return get_static_field<SCAPIX_META_STRING("EVENT_UNDEFINED"), jint>(); }
inline jint MtpEvent::EVENT_UNREPORTED_STATUS_() { return get_static_field<SCAPIX_META_STRING("EVENT_UNREPORTED_STATUS"), jint>(); }
inline jint MtpEvent::getEventCode() { return call_method<SCAPIX_META_STRING("getEventCode"), jint>(); }
inline jint MtpEvent::getParameter1() { return call_method<SCAPIX_META_STRING("getParameter1"), jint>(); }
inline jint MtpEvent::getParameter2() { return call_method<SCAPIX_META_STRING("getParameter2"), jint>(); }
inline jint MtpEvent::getParameter3() { return call_method<SCAPIX_META_STRING("getParameter3"), jint>(); }
inline jint MtpEvent::getObjectHandle() { return call_method<SCAPIX_META_STRING("getObjectHandle"), jint>(); }
inline jint MtpEvent::getStorageId() { return call_method<SCAPIX_META_STRING("getStorageId"), jint>(); }
inline jint MtpEvent::getDevicePropCode() { return call_method<SCAPIX_META_STRING("getDevicePropCode"), jint>(); }
inline jint MtpEvent::getTransactionId() { return call_method<SCAPIX_META_STRING("getTransactionId"), jint>(); }
inline jint MtpEvent::getObjectPropCode() { return call_method<SCAPIX_META_STRING("getObjectPropCode"), jint>(); }
inline jint MtpEvent::getObjectFormatCode() { return call_method<SCAPIX_META_STRING("getObjectFormatCode"), jint>(); }

} // namespace android::mtp
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MTP_MTPEVENT_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHADAPTER_LESCANCALLBACK_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHADAPTER_LESCANCALLBACK_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }

namespace android::bluetooth {

class BluetoothAdapter_LeScanCallback : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothAdapter$LeScanCallback"),
	java::lang::Object>
{
public:

	void onLeScan(ref<android::bluetooth::BluetoothDevice> p1, jint p2, ref<link::java::array<jbyte>> p3);

protected:

	BluetoothAdapter_LeScanCallback(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline void BluetoothAdapter_LeScanCallback::onLeScan(ref<android::bluetooth::BluetoothDevice> p1, jint p2, ref<link::java::array<jbyte>> p3) { return call_method<SCAPIX_META_STRING("onLeScan"), void>(p1, p2, p3); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHADAPTER_LESCANCALLBACK_H
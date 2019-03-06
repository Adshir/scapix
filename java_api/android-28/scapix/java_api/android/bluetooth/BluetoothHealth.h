// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEALTH_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEALTH_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::bluetooth { class BluetoothHealthAppConfiguration; }
namespace android::bluetooth { class BluetoothHealthCallback; }
namespace android::os { class ParcelFileDescriptor; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::bluetooth {

class BluetoothHealth : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothHealth"),
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	static jint APP_CONFIG_REGISTRATION_FAILURE_();
	static jint APP_CONFIG_REGISTRATION_SUCCESS_();
	static jint APP_CONFIG_UNREGISTRATION_FAILURE_();
	static jint APP_CONFIG_UNREGISTRATION_SUCCESS_();
	static jint CHANNEL_TYPE_RELIABLE_();
	static jint CHANNEL_TYPE_STREAMING_();
	static jint SINK_ROLE_();
	static jint SOURCE_ROLE_();
	static jint STATE_CHANNEL_CONNECTED_();
	static jint STATE_CHANNEL_CONNECTING_();
	static jint STATE_CHANNEL_DISCONNECTED_();
	static jint STATE_CHANNEL_DISCONNECTING_();

	jboolean registerSinkAppConfiguration(ref<java::lang::String> name, jint dataType, ref<android::bluetooth::BluetoothHealthCallback> callback);
	jboolean unregisterAppConfiguration(ref<android::bluetooth::BluetoothHealthAppConfiguration> config);
	jboolean connectChannelToSource(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::BluetoothHealthAppConfiguration> config);
	jboolean disconnectChannel(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::BluetoothHealthAppConfiguration> config, jint channelId);
	ref<android::os::ParcelFileDescriptor> getMainChannelFd(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::BluetoothHealthAppConfiguration> config);
	jint getConnectionState(ref<android::bluetooth::BluetoothDevice> device);
	ref<java::util::List> getConnectedDevices();
	ref<java::util::List> getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states);

protected:

	BluetoothHealth(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothHealthAppConfiguration.h>
#include <scapix/java_api/android/bluetooth/BluetoothHealthCallback.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline jint BluetoothHealth::APP_CONFIG_REGISTRATION_FAILURE_() { return get_static_field<SCAPIX_META_STRING("APP_CONFIG_REGISTRATION_FAILURE"), jint>(); }
inline jint BluetoothHealth::APP_CONFIG_REGISTRATION_SUCCESS_() { return get_static_field<SCAPIX_META_STRING("APP_CONFIG_REGISTRATION_SUCCESS"), jint>(); }
inline jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_FAILURE_() { return get_static_field<SCAPIX_META_STRING("APP_CONFIG_UNREGISTRATION_FAILURE"), jint>(); }
inline jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_SUCCESS_() { return get_static_field<SCAPIX_META_STRING("APP_CONFIG_UNREGISTRATION_SUCCESS"), jint>(); }
inline jint BluetoothHealth::CHANNEL_TYPE_RELIABLE_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_TYPE_RELIABLE"), jint>(); }
inline jint BluetoothHealth::CHANNEL_TYPE_STREAMING_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_TYPE_STREAMING"), jint>(); }
inline jint BluetoothHealth::SINK_ROLE_() { return get_static_field<SCAPIX_META_STRING("SINK_ROLE"), jint>(); }
inline jint BluetoothHealth::SOURCE_ROLE_() { return get_static_field<SCAPIX_META_STRING("SOURCE_ROLE"), jint>(); }
inline jint BluetoothHealth::STATE_CHANNEL_CONNECTED_() { return get_static_field<SCAPIX_META_STRING("STATE_CHANNEL_CONNECTED"), jint>(); }
inline jint BluetoothHealth::STATE_CHANNEL_CONNECTING_() { return get_static_field<SCAPIX_META_STRING("STATE_CHANNEL_CONNECTING"), jint>(); }
inline jint BluetoothHealth::STATE_CHANNEL_DISCONNECTED_() { return get_static_field<SCAPIX_META_STRING("STATE_CHANNEL_DISCONNECTED"), jint>(); }
inline jint BluetoothHealth::STATE_CHANNEL_DISCONNECTING_() { return get_static_field<SCAPIX_META_STRING("STATE_CHANNEL_DISCONNECTING"), jint>(); }
inline jboolean BluetoothHealth::registerSinkAppConfiguration(ref<java::lang::String> name, jint dataType, ref<android::bluetooth::BluetoothHealthCallback> callback) { return call_method<SCAPIX_META_STRING("registerSinkAppConfiguration"), jboolean>(name, dataType, callback); }
inline jboolean BluetoothHealth::unregisterAppConfiguration(ref<android::bluetooth::BluetoothHealthAppConfiguration> config) { return call_method<SCAPIX_META_STRING("unregisterAppConfiguration"), jboolean>(config); }
inline jboolean BluetoothHealth::connectChannelToSource(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::BluetoothHealthAppConfiguration> config) { return call_method<SCAPIX_META_STRING("connectChannelToSource"), jboolean>(device, config); }
inline jboolean BluetoothHealth::disconnectChannel(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::BluetoothHealthAppConfiguration> config, jint channelId) { return call_method<SCAPIX_META_STRING("disconnectChannel"), jboolean>(device, config, channelId); }
inline ref<android::os::ParcelFileDescriptor> BluetoothHealth::getMainChannelFd(ref<android::bluetooth::BluetoothDevice> device, ref<android::bluetooth::BluetoothHealthAppConfiguration> config) { return call_method<SCAPIX_META_STRING("getMainChannelFd"), ref<android::os::ParcelFileDescriptor>>(device, config); }
inline jint BluetoothHealth::getConnectionState(ref<android::bluetooth::BluetoothDevice> device) { return call_method<SCAPIX_META_STRING("getConnectionState"), jint>(device); }
inline ref<java::util::List> BluetoothHealth::getConnectedDevices() { return call_method<SCAPIX_META_STRING("getConnectedDevices"), ref<java::util::List>>(); }
inline ref<java::util::List> BluetoothHealth::getDevicesMatchingConnectionStates(ref<link::java::array<jint>> states) { return call_method<SCAPIX_META_STRING("getDevicesMatchingConnectionStates"), ref<java::util::List>>(states); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHHEALTH_H
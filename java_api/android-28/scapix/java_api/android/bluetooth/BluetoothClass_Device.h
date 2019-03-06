// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothClass_Device_Major; }

namespace android::bluetooth {

class BluetoothClass_Device : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothClass$Device"),
	java::lang::Object>
{
public:

	using Major = BluetoothClass_Device_Major;

	static jint AUDIO_VIDEO_CAMCORDER_();
	static jint AUDIO_VIDEO_CAR_AUDIO_();
	static jint AUDIO_VIDEO_HANDSFREE_();
	static jint AUDIO_VIDEO_HEADPHONES_();
	static jint AUDIO_VIDEO_HIFI_AUDIO_();
	static jint AUDIO_VIDEO_LOUDSPEAKER_();
	static jint AUDIO_VIDEO_MICROPHONE_();
	static jint AUDIO_VIDEO_PORTABLE_AUDIO_();
	static jint AUDIO_VIDEO_SET_TOP_BOX_();
	static jint AUDIO_VIDEO_UNCATEGORIZED_();
	static jint AUDIO_VIDEO_VCR_();
	static jint AUDIO_VIDEO_VIDEO_CAMERA_();
	static jint AUDIO_VIDEO_VIDEO_CONFERENCING_();
	static jint AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER_();
	static jint AUDIO_VIDEO_VIDEO_GAMING_TOY_();
	static jint AUDIO_VIDEO_VIDEO_MONITOR_();
	static jint AUDIO_VIDEO_WEARABLE_HEADSET_();
	static jint COMPUTER_DESKTOP_();
	static jint COMPUTER_HANDHELD_PC_PDA_();
	static jint COMPUTER_LAPTOP_();
	static jint COMPUTER_PALM_SIZE_PC_PDA_();
	static jint COMPUTER_SERVER_();
	static jint COMPUTER_UNCATEGORIZED_();
	static jint COMPUTER_WEARABLE_();
	static jint HEALTH_BLOOD_PRESSURE_();
	static jint HEALTH_DATA_DISPLAY_();
	static jint HEALTH_GLUCOSE_();
	static jint HEALTH_PULSE_OXIMETER_();
	static jint HEALTH_PULSE_RATE_();
	static jint HEALTH_THERMOMETER_();
	static jint HEALTH_UNCATEGORIZED_();
	static jint HEALTH_WEIGHING_();
	static jint PHONE_CELLULAR_();
	static jint PHONE_CORDLESS_();
	static jint PHONE_ISDN_();
	static jint PHONE_MODEM_OR_GATEWAY_();
	static jint PHONE_SMART_();
	static jint PHONE_UNCATEGORIZED_();
	static jint TOY_CONTROLLER_();
	static jint TOY_DOLL_ACTION_FIGURE_();
	static jint TOY_GAME_();
	static jint TOY_ROBOT_();
	static jint TOY_UNCATEGORIZED_();
	static jint TOY_VEHICLE_();
	static jint WEARABLE_GLASSES_();
	static jint WEARABLE_HELMET_();
	static jint WEARABLE_JACKET_();
	static jint WEARABLE_PAGER_();
	static jint WEARABLE_UNCATEGORIZED_();
	static jint WEARABLE_WRIST_WATCH_();

	static ref<BluetoothClass_Device> new_object();

protected:

	BluetoothClass_Device(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::bluetooth {

inline jint BluetoothClass_Device::AUDIO_VIDEO_CAMCORDER_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_CAMCORDER"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_CAR_AUDIO_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_CAR_AUDIO"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_HANDSFREE_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_HANDSFREE"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_HEADPHONES_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_HEADPHONES"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_HIFI_AUDIO_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_HIFI_AUDIO"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_LOUDSPEAKER_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_LOUDSPEAKER"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_MICROPHONE_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_MICROPHONE"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_PORTABLE_AUDIO_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_PORTABLE_AUDIO"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_SET_TOP_BOX_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_SET_TOP_BOX"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_VCR_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_VCR"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_CAMERA_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_VIDEO_CAMERA"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_CONFERENCING_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_VIDEO_CONFERENCING"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_GAMING_TOY_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_VIDEO_GAMING_TOY"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_MONITOR_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_VIDEO_MONITOR"), jint>(); }
inline jint BluetoothClass_Device::AUDIO_VIDEO_WEARABLE_HEADSET_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO_WEARABLE_HEADSET"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_DESKTOP_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_DESKTOP"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_HANDHELD_PC_PDA_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_HANDHELD_PC_PDA"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_LAPTOP_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_LAPTOP"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_PALM_SIZE_PC_PDA_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_PALM_SIZE_PC_PDA"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_SERVER_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_SERVER"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device::COMPUTER_WEARABLE_() { return get_static_field<SCAPIX_META_STRING("COMPUTER_WEARABLE"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_BLOOD_PRESSURE_() { return get_static_field<SCAPIX_META_STRING("HEALTH_BLOOD_PRESSURE"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_DATA_DISPLAY_() { return get_static_field<SCAPIX_META_STRING("HEALTH_DATA_DISPLAY"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_GLUCOSE_() { return get_static_field<SCAPIX_META_STRING("HEALTH_GLUCOSE"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_PULSE_OXIMETER_() { return get_static_field<SCAPIX_META_STRING("HEALTH_PULSE_OXIMETER"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_PULSE_RATE_() { return get_static_field<SCAPIX_META_STRING("HEALTH_PULSE_RATE"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_THERMOMETER_() { return get_static_field<SCAPIX_META_STRING("HEALTH_THERMOMETER"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("HEALTH_UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device::HEALTH_WEIGHING_() { return get_static_field<SCAPIX_META_STRING("HEALTH_WEIGHING"), jint>(); }
inline jint BluetoothClass_Device::PHONE_CELLULAR_() { return get_static_field<SCAPIX_META_STRING("PHONE_CELLULAR"), jint>(); }
inline jint BluetoothClass_Device::PHONE_CORDLESS_() { return get_static_field<SCAPIX_META_STRING("PHONE_CORDLESS"), jint>(); }
inline jint BluetoothClass_Device::PHONE_ISDN_() { return get_static_field<SCAPIX_META_STRING("PHONE_ISDN"), jint>(); }
inline jint BluetoothClass_Device::PHONE_MODEM_OR_GATEWAY_() { return get_static_field<SCAPIX_META_STRING("PHONE_MODEM_OR_GATEWAY"), jint>(); }
inline jint BluetoothClass_Device::PHONE_SMART_() { return get_static_field<SCAPIX_META_STRING("PHONE_SMART"), jint>(); }
inline jint BluetoothClass_Device::PHONE_UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("PHONE_UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device::TOY_CONTROLLER_() { return get_static_field<SCAPIX_META_STRING("TOY_CONTROLLER"), jint>(); }
inline jint BluetoothClass_Device::TOY_DOLL_ACTION_FIGURE_() { return get_static_field<SCAPIX_META_STRING("TOY_DOLL_ACTION_FIGURE"), jint>(); }
inline jint BluetoothClass_Device::TOY_GAME_() { return get_static_field<SCAPIX_META_STRING("TOY_GAME"), jint>(); }
inline jint BluetoothClass_Device::TOY_ROBOT_() { return get_static_field<SCAPIX_META_STRING("TOY_ROBOT"), jint>(); }
inline jint BluetoothClass_Device::TOY_UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("TOY_UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device::TOY_VEHICLE_() { return get_static_field<SCAPIX_META_STRING("TOY_VEHICLE"), jint>(); }
inline jint BluetoothClass_Device::WEARABLE_GLASSES_() { return get_static_field<SCAPIX_META_STRING("WEARABLE_GLASSES"), jint>(); }
inline jint BluetoothClass_Device::WEARABLE_HELMET_() { return get_static_field<SCAPIX_META_STRING("WEARABLE_HELMET"), jint>(); }
inline jint BluetoothClass_Device::WEARABLE_JACKET_() { return get_static_field<SCAPIX_META_STRING("WEARABLE_JACKET"), jint>(); }
inline jint BluetoothClass_Device::WEARABLE_PAGER_() { return get_static_field<SCAPIX_META_STRING("WEARABLE_PAGER"), jint>(); }
inline jint BluetoothClass_Device::WEARABLE_UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("WEARABLE_UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device::WEARABLE_WRIST_WATCH_() { return get_static_field<SCAPIX_META_STRING("WEARABLE_WRIST_WATCH"), jint>(); }
inline ref<BluetoothClass_Device> BluetoothClass_Device::new_object() { return base_::new_object(); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_H
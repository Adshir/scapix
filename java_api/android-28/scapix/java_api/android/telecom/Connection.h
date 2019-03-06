// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/telecom/Conferenceable.h>

#ifndef SCAPIX_ANDROID_TELECOM_CONNECTION_H
#define SCAPIX_ANDROID_TELECOM_CONNECTION_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::telecom { class CallAudioState; }
namespace android::telecom { class Conference; }
namespace android::telecom { class Connection_RttTextStream; }
namespace android::telecom { class Connection_VideoProvider; }
namespace android::telecom { class DisconnectCause; }
namespace android::telecom { class StatusHints; }
namespace java::lang { class String; }
namespace java::util { class List; }
namespace android::telecom { class Connection_RttModifyStatus; }

namespace android::telecom {

class Connection : public object_base<SCAPIX_META_STRING("android/telecom/Connection"),
	android::telecom::Conferenceable>
{
public:

	using VideoProvider = Connection_VideoProvider;
	using RttTextStream = Connection_RttTextStream;
	using RttModifyStatus = Connection_RttModifyStatus;

	static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO_();
	static jint CAPABILITY_CAN_PAUSE_VIDEO_();
	static jint CAPABILITY_CAN_PULL_CALL_();
	static jint CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION_();
	static jint CAPABILITY_CAN_UPGRADE_TO_VIDEO_();
	static jint CAPABILITY_DISCONNECT_FROM_CONFERENCE_();
	static jint CAPABILITY_HOLD_();
	static jint CAPABILITY_MANAGE_CONFERENCE_();
	static jint CAPABILITY_MERGE_CONFERENCE_();
	static jint CAPABILITY_MUTE_();
	static jint CAPABILITY_RESPOND_VIA_TEXT_();
	static jint CAPABILITY_SEPARATE_FROM_CONFERENCE_();
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL_();
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_RX_();
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_TX_();
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL_();
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_RX_();
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_TX_();
	static jint CAPABILITY_SUPPORT_DEFLECT_();
	static jint CAPABILITY_SUPPORT_HOLD_();
	static jint CAPABILITY_SWAP_CONFERENCE_();
	static ref<java::lang::String> EVENT_CALL_MERGE_FAILED_();
	static ref<java::lang::String> EVENT_CALL_PULL_FAILED_();
	static ref<java::lang::String> EXTRA_ANSWERING_DROPS_FG_CALL_();
	static ref<java::lang::String> EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME_();
	static ref<java::lang::String> EXTRA_CALL_SUBJECT_();
	static ref<java::lang::String> EXTRA_CHILD_ADDRESS_();
	static ref<java::lang::String> EXTRA_LAST_FORWARDED_NUMBER_();
	static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY_();
	static jint PROPERTY_IS_EXTERNAL_CALL_();
	static jint PROPERTY_IS_RTT_();
	static jint PROPERTY_SELF_MANAGED_();
	static jint STATE_ACTIVE_();
	static jint STATE_DIALING_();
	static jint STATE_DISCONNECTED_();
	static jint STATE_HOLDING_();
	static jint STATE_INITIALIZING_();
	static jint STATE_NEW_();
	static jint STATE_PULLING_CALL_();
	static jint STATE_RINGING_();

	static ref<Connection> new_object();
	static ref<java::lang::String> capabilitiesToString(jint capabilities);
	static ref<java::lang::String> propertiesToString(jint properties);
	ref<android::net::Uri> getAddress();
	jint getAddressPresentation();
	ref<java::lang::String> getCallerDisplayName();
	jint getCallerDisplayNamePresentation();
	jint getState();
	ref<android::telecom::CallAudioState> getCallAudioState();
	ref<android::telecom::Conference> getConference();
	jboolean isRingbackRequested();
	jboolean getAudioModeIsVoip();
	ref<android::telecom::StatusHints> getStatusHints();
	ref<android::os::Bundle> getExtras();
	ref<android::telecom::DisconnectCause> getDisconnectCause();
	static ref<java::lang::String> stateToString(jint state);
	jint getConnectionCapabilities();
	jint getConnectionProperties();
	void setAddress(ref<android::net::Uri> address, jint presentation);
	void setCallerDisplayName(ref<java::lang::String> callerDisplayName, jint presentation);
	void setVideoState(jint videoState);
	void setActive();
	void setRinging();
	void setInitializing();
	void setInitialized();
	void setDialing();
	void setPulling();
	void setOnHold();
	void setVideoProvider(ref<android::telecom::Connection_VideoProvider> videoProvider);
	ref<android::telecom::Connection_VideoProvider> getVideoProvider();
	void setDisconnected(ref<android::telecom::DisconnectCause> disconnectCause);
	void setPostDialWait(ref<java::lang::String> remaining);
	void setNextPostDialChar(jchar nextChar);
	void setRingbackRequested(jboolean ringback);
	void setConnectionCapabilities(jint connectionCapabilities);
	void setConnectionProperties(jint connectionProperties);
	void destroy();
	void setAudioModeIsVoip(jboolean isVoip);
	void setStatusHints(ref<android::telecom::StatusHints> statusHints);
	void setConferenceableConnections(ref<java::util::List> conferenceableConnections);
	void setConferenceables(ref<java::util::List> conferenceables);
	ref<java::util::List> getConferenceables();
	void setExtras(ref<android::os::Bundle> extras);
	void putExtras(ref<android::os::Bundle> extras);
	void removeExtras(ref<java::util::List> keys);
	void removeExtras(ref<link::java::array<java::lang::String>> keys);
	void setAudioRoute(jint route);
	void requestBluetoothAudio(ref<android::bluetooth::BluetoothDevice> bluetoothDevice);
	void sendRttInitiationSuccess();
	void sendRttInitiationFailure(jint reason);
	void sendRttSessionRemotelyTerminated();
	void sendRemoteRttRequest();
	void onCallAudioStateChanged(ref<android::telecom::CallAudioState> state);
	void onStateChanged(jint state);
	void onPlayDtmfTone(jchar c);
	void onStopDtmfTone();
	void onDisconnect();
	void onSeparate();
	void onAbort();
	void onHold();
	void onUnhold();
	void onAnswer(jint videoState);
	void onAnswer();
	void onDeflect(ref<android::net::Uri> address);
	void onReject();
	void onReject(ref<java::lang::String> replyMessage);
	void onPostDialContinue(jboolean proceed);
	void onPullExternalCall();
	void onCallEvent(ref<java::lang::String> event, ref<android::os::Bundle> extras);
	void onHandoverComplete();
	void onExtrasChanged(ref<android::os::Bundle> extras);
	void onShowIncomingCallUi();
	void onStartRtt(ref<android::telecom::Connection_RttTextStream> rttTextStream);
	void onStopRtt();
	void handleRttUpgradeResponse(ref<android::telecom::Connection_RttTextStream> rttTextStream);
	static ref<android::telecom::Connection> createFailedConnection(ref<android::telecom::DisconnectCause> disconnectCause);
	static ref<android::telecom::Connection> createCanceledConnection();
	void sendConnectionEvent(ref<java::lang::String> event, ref<android::os::Bundle> extras);

protected:

	Connection(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telecom/CallAudioState.h>
#include <scapix/java_api/android/telecom/Conference.h>
#include <scapix/java_api/android/telecom/Connection_RttTextStream.h>
#include <scapix/java_api/android/telecom/Connection_VideoProvider.h>
#include <scapix/java_api/android/telecom/DisconnectCause.h>
#include <scapix/java_api/android/telecom/StatusHints.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::telecom {

inline jint Connection::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"), jint>(); }
inline jint Connection::CAPABILITY_CAN_PAUSE_VIDEO_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CAN_PAUSE_VIDEO"), jint>(); }
inline jint Connection::CAPABILITY_CAN_PULL_CALL_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CAN_PULL_CALL"), jint>(); }
inline jint Connection::CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION"), jint>(); }
inline jint Connection::CAPABILITY_CAN_UPGRADE_TO_VIDEO_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CAN_UPGRADE_TO_VIDEO"), jint>(); }
inline jint Connection::CAPABILITY_DISCONNECT_FROM_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_DISCONNECT_FROM_CONFERENCE"), jint>(); }
inline jint Connection::CAPABILITY_HOLD_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_HOLD"), jint>(); }
inline jint Connection::CAPABILITY_MANAGE_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_MANAGE_CONFERENCE"), jint>(); }
inline jint Connection::CAPABILITY_MERGE_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_MERGE_CONFERENCE"), jint>(); }
inline jint Connection::CAPABILITY_MUTE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_MUTE"), jint>(); }
inline jint Connection::CAPABILITY_RESPOND_VIA_TEXT_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_RESPOND_VIA_TEXT"), jint>(); }
inline jint Connection::CAPABILITY_SEPARATE_FROM_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SEPARATE_FROM_CONFERENCE"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_RX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_LOCAL_RX"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_TX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_LOCAL_TX"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_RX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_REMOTE_RX"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_TX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_REMOTE_TX"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORT_DEFLECT_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORT_DEFLECT"), jint>(); }
inline jint Connection::CAPABILITY_SUPPORT_HOLD_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORT_HOLD"), jint>(); }
inline jint Connection::CAPABILITY_SWAP_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SWAP_CONFERENCE"), jint>(); }
inline ref<java::lang::String> Connection::EVENT_CALL_MERGE_FAILED_() { return get_static_field<SCAPIX_META_STRING("EVENT_CALL_MERGE_FAILED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Connection::EVENT_CALL_PULL_FAILED_() { return get_static_field<SCAPIX_META_STRING("EVENT_CALL_PULL_FAILED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Connection::EXTRA_ANSWERING_DROPS_FG_CALL_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ANSWERING_DROPS_FG_CALL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Connection::EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Connection::EXTRA_CALL_SUBJECT_() { return get_static_field<SCAPIX_META_STRING("EXTRA_CALL_SUBJECT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Connection::EXTRA_CHILD_ADDRESS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_CHILD_ADDRESS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Connection::EXTRA_LAST_FORWARDED_NUMBER_() { return get_static_field<SCAPIX_META_STRING("EXTRA_LAST_FORWARDED_NUMBER"), ref<java::lang::String>>(); }
inline jint Connection::PROPERTY_HAS_CDMA_VOICE_PRIVACY_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_HAS_CDMA_VOICE_PRIVACY"), jint>(); }
inline jint Connection::PROPERTY_IS_EXTERNAL_CALL_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_IS_EXTERNAL_CALL"), jint>(); }
inline jint Connection::PROPERTY_IS_RTT_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_IS_RTT"), jint>(); }
inline jint Connection::PROPERTY_SELF_MANAGED_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_SELF_MANAGED"), jint>(); }
inline jint Connection::STATE_ACTIVE_() { return get_static_field<SCAPIX_META_STRING("STATE_ACTIVE"), jint>(); }
inline jint Connection::STATE_DIALING_() { return get_static_field<SCAPIX_META_STRING("STATE_DIALING"), jint>(); }
inline jint Connection::STATE_DISCONNECTED_() { return get_static_field<SCAPIX_META_STRING("STATE_DISCONNECTED"), jint>(); }
inline jint Connection::STATE_HOLDING_() { return get_static_field<SCAPIX_META_STRING("STATE_HOLDING"), jint>(); }
inline jint Connection::STATE_INITIALIZING_() { return get_static_field<SCAPIX_META_STRING("STATE_INITIALIZING"), jint>(); }
inline jint Connection::STATE_NEW_() { return get_static_field<SCAPIX_META_STRING("STATE_NEW"), jint>(); }
inline jint Connection::STATE_PULLING_CALL_() { return get_static_field<SCAPIX_META_STRING("STATE_PULLING_CALL"), jint>(); }
inline jint Connection::STATE_RINGING_() { return get_static_field<SCAPIX_META_STRING("STATE_RINGING"), jint>(); }
inline ref<Connection> Connection::new_object() { return base_::new_object(); }
inline ref<java::lang::String> Connection::capabilitiesToString(jint capabilities) { return call_static_method<SCAPIX_META_STRING("capabilitiesToString"), ref<java::lang::String>>(capabilities); }
inline ref<java::lang::String> Connection::propertiesToString(jint properties) { return call_static_method<SCAPIX_META_STRING("propertiesToString"), ref<java::lang::String>>(properties); }
inline ref<android::net::Uri> Connection::getAddress() { return call_method<SCAPIX_META_STRING("getAddress"), ref<android::net::Uri>>(); }
inline jint Connection::getAddressPresentation() { return call_method<SCAPIX_META_STRING("getAddressPresentation"), jint>(); }
inline ref<java::lang::String> Connection::getCallerDisplayName() { return call_method<SCAPIX_META_STRING("getCallerDisplayName"), ref<java::lang::String>>(); }
inline jint Connection::getCallerDisplayNamePresentation() { return call_method<SCAPIX_META_STRING("getCallerDisplayNamePresentation"), jint>(); }
inline jint Connection::getState() { return call_method<SCAPIX_META_STRING("getState"), jint>(); }
inline ref<android::telecom::CallAudioState> Connection::getCallAudioState() { return call_method<SCAPIX_META_STRING("getCallAudioState"), ref<android::telecom::CallAudioState>>(); }
inline ref<android::telecom::Conference> Connection::getConference() { return call_method<SCAPIX_META_STRING("getConference"), ref<android::telecom::Conference>>(); }
inline jboolean Connection::isRingbackRequested() { return call_method<SCAPIX_META_STRING("isRingbackRequested"), jboolean>(); }
inline jboolean Connection::getAudioModeIsVoip() { return call_method<SCAPIX_META_STRING("getAudioModeIsVoip"), jboolean>(); }
inline ref<android::telecom::StatusHints> Connection::getStatusHints() { return call_method<SCAPIX_META_STRING("getStatusHints"), ref<android::telecom::StatusHints>>(); }
inline ref<android::os::Bundle> Connection::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline ref<android::telecom::DisconnectCause> Connection::getDisconnectCause() { return call_method<SCAPIX_META_STRING("getDisconnectCause"), ref<android::telecom::DisconnectCause>>(); }
inline ref<java::lang::String> Connection::stateToString(jint state) { return call_static_method<SCAPIX_META_STRING("stateToString"), ref<java::lang::String>>(state); }
inline jint Connection::getConnectionCapabilities() { return call_method<SCAPIX_META_STRING("getConnectionCapabilities"), jint>(); }
inline jint Connection::getConnectionProperties() { return call_method<SCAPIX_META_STRING("getConnectionProperties"), jint>(); }
inline void Connection::setAddress(ref<android::net::Uri> address, jint presentation) { return call_method<SCAPIX_META_STRING("setAddress"), void>(address, presentation); }
inline void Connection::setCallerDisplayName(ref<java::lang::String> callerDisplayName, jint presentation) { return call_method<SCAPIX_META_STRING("setCallerDisplayName"), void>(callerDisplayName, presentation); }
inline void Connection::setVideoState(jint videoState) { return call_method<SCAPIX_META_STRING("setVideoState"), void>(videoState); }
inline void Connection::setActive() { return call_method<SCAPIX_META_STRING("setActive"), void>(); }
inline void Connection::setRinging() { return call_method<SCAPIX_META_STRING("setRinging"), void>(); }
inline void Connection::setInitializing() { return call_method<SCAPIX_META_STRING("setInitializing"), void>(); }
inline void Connection::setInitialized() { return call_method<SCAPIX_META_STRING("setInitialized"), void>(); }
inline void Connection::setDialing() { return call_method<SCAPIX_META_STRING("setDialing"), void>(); }
inline void Connection::setPulling() { return call_method<SCAPIX_META_STRING("setPulling"), void>(); }
inline void Connection::setOnHold() { return call_method<SCAPIX_META_STRING("setOnHold"), void>(); }
inline void Connection::setVideoProvider(ref<android::telecom::Connection_VideoProvider> videoProvider) { return call_method<SCAPIX_META_STRING("setVideoProvider"), void>(videoProvider); }
inline ref<android::telecom::Connection_VideoProvider> Connection::getVideoProvider() { return call_method<SCAPIX_META_STRING("getVideoProvider"), ref<android::telecom::Connection_VideoProvider>>(); }
inline void Connection::setDisconnected(ref<android::telecom::DisconnectCause> disconnectCause) { return call_method<SCAPIX_META_STRING("setDisconnected"), void>(disconnectCause); }
inline void Connection::setPostDialWait(ref<java::lang::String> remaining) { return call_method<SCAPIX_META_STRING("setPostDialWait"), void>(remaining); }
inline void Connection::setNextPostDialChar(jchar nextChar) { return call_method<SCAPIX_META_STRING("setNextPostDialChar"), void>(nextChar); }
inline void Connection::setRingbackRequested(jboolean ringback) { return call_method<SCAPIX_META_STRING("setRingbackRequested"), void>(ringback); }
inline void Connection::setConnectionCapabilities(jint connectionCapabilities) { return call_method<SCAPIX_META_STRING("setConnectionCapabilities"), void>(connectionCapabilities); }
inline void Connection::setConnectionProperties(jint connectionProperties) { return call_method<SCAPIX_META_STRING("setConnectionProperties"), void>(connectionProperties); }
inline void Connection::destroy() { return call_method<SCAPIX_META_STRING("destroy"), void>(); }
inline void Connection::setAudioModeIsVoip(jboolean isVoip) { return call_method<SCAPIX_META_STRING("setAudioModeIsVoip"), void>(isVoip); }
inline void Connection::setStatusHints(ref<android::telecom::StatusHints> statusHints) { return call_method<SCAPIX_META_STRING("setStatusHints"), void>(statusHints); }
inline void Connection::setConferenceableConnections(ref<java::util::List> conferenceableConnections) { return call_method<SCAPIX_META_STRING("setConferenceableConnections"), void>(conferenceableConnections); }
inline void Connection::setConferenceables(ref<java::util::List> conferenceables) { return call_method<SCAPIX_META_STRING("setConferenceables"), void>(conferenceables); }
inline ref<java::util::List> Connection::getConferenceables() { return call_method<SCAPIX_META_STRING("getConferenceables"), ref<java::util::List>>(); }
inline void Connection::setExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setExtras"), void>(extras); }
inline void Connection::putExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("putExtras"), void>(extras); }
inline void Connection::removeExtras(ref<java::util::List> keys) { return call_method<SCAPIX_META_STRING("removeExtras"), void>(keys); }
inline void Connection::removeExtras(ref<link::java::array<java::lang::String>> keys) { return call_method<SCAPIX_META_STRING("removeExtras"), void>(keys); }
inline void Connection::setAudioRoute(jint route) { return call_method<SCAPIX_META_STRING("setAudioRoute"), void>(route); }
inline void Connection::requestBluetoothAudio(ref<android::bluetooth::BluetoothDevice> bluetoothDevice) { return call_method<SCAPIX_META_STRING("requestBluetoothAudio"), void>(bluetoothDevice); }
inline void Connection::sendRttInitiationSuccess() { return call_method<SCAPIX_META_STRING("sendRttInitiationSuccess"), void>(); }
inline void Connection::sendRttInitiationFailure(jint reason) { return call_method<SCAPIX_META_STRING("sendRttInitiationFailure"), void>(reason); }
inline void Connection::sendRttSessionRemotelyTerminated() { return call_method<SCAPIX_META_STRING("sendRttSessionRemotelyTerminated"), void>(); }
inline void Connection::sendRemoteRttRequest() { return call_method<SCAPIX_META_STRING("sendRemoteRttRequest"), void>(); }
inline void Connection::onCallAudioStateChanged(ref<android::telecom::CallAudioState> state) { return call_method<SCAPIX_META_STRING("onCallAudioStateChanged"), void>(state); }
inline void Connection::onStateChanged(jint state) { return call_method<SCAPIX_META_STRING("onStateChanged"), void>(state); }
inline void Connection::onPlayDtmfTone(jchar c) { return call_method<SCAPIX_META_STRING("onPlayDtmfTone"), void>(c); }
inline void Connection::onStopDtmfTone() { return call_method<SCAPIX_META_STRING("onStopDtmfTone"), void>(); }
inline void Connection::onDisconnect() { return call_method<SCAPIX_META_STRING("onDisconnect"), void>(); }
inline void Connection::onSeparate() { return call_method<SCAPIX_META_STRING("onSeparate"), void>(); }
inline void Connection::onAbort() { return call_method<SCAPIX_META_STRING("onAbort"), void>(); }
inline void Connection::onHold() { return call_method<SCAPIX_META_STRING("onHold"), void>(); }
inline void Connection::onUnhold() { return call_method<SCAPIX_META_STRING("onUnhold"), void>(); }
inline void Connection::onAnswer(jint videoState) { return call_method<SCAPIX_META_STRING("onAnswer"), void>(videoState); }
inline void Connection::onAnswer() { return call_method<SCAPIX_META_STRING("onAnswer"), void>(); }
inline void Connection::onDeflect(ref<android::net::Uri> address) { return call_method<SCAPIX_META_STRING("onDeflect"), void>(address); }
inline void Connection::onReject() { return call_method<SCAPIX_META_STRING("onReject"), void>(); }
inline void Connection::onReject(ref<java::lang::String> replyMessage) { return call_method<SCAPIX_META_STRING("onReject"), void>(replyMessage); }
inline void Connection::onPostDialContinue(jboolean proceed) { return call_method<SCAPIX_META_STRING("onPostDialContinue"), void>(proceed); }
inline void Connection::onPullExternalCall() { return call_method<SCAPIX_META_STRING("onPullExternalCall"), void>(); }
inline void Connection::onCallEvent(ref<java::lang::String> event, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onCallEvent"), void>(event, extras); }
inline void Connection::onHandoverComplete() { return call_method<SCAPIX_META_STRING("onHandoverComplete"), void>(); }
inline void Connection::onExtrasChanged(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onExtrasChanged"), void>(extras); }
inline void Connection::onShowIncomingCallUi() { return call_method<SCAPIX_META_STRING("onShowIncomingCallUi"), void>(); }
inline void Connection::onStartRtt(ref<android::telecom::Connection_RttTextStream> rttTextStream) { return call_method<SCAPIX_META_STRING("onStartRtt"), void>(rttTextStream); }
inline void Connection::onStopRtt() { return call_method<SCAPIX_META_STRING("onStopRtt"), void>(); }
inline void Connection::handleRttUpgradeResponse(ref<android::telecom::Connection_RttTextStream> rttTextStream) { return call_method<SCAPIX_META_STRING("handleRttUpgradeResponse"), void>(rttTextStream); }
inline ref<android::telecom::Connection> Connection::createFailedConnection(ref<android::telecom::DisconnectCause> disconnectCause) { return call_static_method<SCAPIX_META_STRING("createFailedConnection"), ref<android::telecom::Connection>>(disconnectCause); }
inline ref<android::telecom::Connection> Connection::createCanceledConnection() { return call_static_method<SCAPIX_META_STRING("createCanceledConnection"), ref<android::telecom::Connection>>(); }
inline void Connection::sendConnectionEvent(ref<java::lang::String> event, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("sendConnectionEvent"), void>(event, extras); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_CONNECTION_H
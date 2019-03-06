// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MIDI_MIDISENDER_H
#define SCAPIX_ANDROID_MEDIA_MIDI_MIDISENDER_H

namespace scapix::java_api {

namespace android::media::midi { class MidiReceiver; }

namespace android::media::midi {

class MidiSender : public object_base<SCAPIX_META_STRING("android/media/midi/MidiSender"),
	java::lang::Object>
{
public:

	static ref<MidiSender> new_object();
	void connect(ref<android::media::midi::MidiReceiver> receiver);
	void disconnect(ref<android::media::midi::MidiReceiver> receiver);
	void onConnect(ref<android::media::midi::MidiReceiver> p1);
	void onDisconnect(ref<android::media::midi::MidiReceiver> p1);

protected:

	MidiSender(handle_type h) : base_(h) {}

};

} // namespace android::media::midi
} // namespace scapix::java_api

#include <scapix/java_api/android/media/midi/MidiReceiver.h>

namespace scapix::java_api {
namespace android::media::midi {

inline ref<MidiSender> MidiSender::new_object() { return base_::new_object(); }
inline void MidiSender::connect(ref<android::media::midi::MidiReceiver> receiver) { return call_method<SCAPIX_META_STRING("connect"), void>(receiver); }
inline void MidiSender::disconnect(ref<android::media::midi::MidiReceiver> receiver) { return call_method<SCAPIX_META_STRING("disconnect"), void>(receiver); }
inline void MidiSender::onConnect(ref<android::media::midi::MidiReceiver> p1) { return call_method<SCAPIX_META_STRING("onConnect"), void>(p1); }
inline void MidiSender::onDisconnect(ref<android::media::midi::MidiReceiver> p1) { return call_method<SCAPIX_META_STRING("onDisconnect"), void>(p1); }

} // namespace android::media::midi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MIDI_MIDISENDER_H
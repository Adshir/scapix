// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE_H
#define SCAPIX_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE_H

namespace scapix::java_api {

namespace android::speech::tts { class TextToSpeech; }
namespace java::lang { class String; }

namespace android::speech::tts {

class TextToSpeech_Engine : public object_base<SCAPIX_META_STRING("android/speech/tts/TextToSpeech$Engine"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ACTION_CHECK_TTS_DATA_();
	static ref<java::lang::String> ACTION_GET_SAMPLE_TEXT_();
	static ref<java::lang::String> ACTION_INSTALL_TTS_DATA_();
	static ref<java::lang::String> ACTION_TTS_DATA_INSTALLED_();
	static jint CHECK_VOICE_DATA_BAD_DATA_();
	static jint CHECK_VOICE_DATA_FAIL_();
	static jint CHECK_VOICE_DATA_MISSING_DATA_();
	static jint CHECK_VOICE_DATA_MISSING_VOLUME_();
	static jint CHECK_VOICE_DATA_PASS_();
	static jint DEFAULT_STREAM_();
	static ref<java::lang::String> EXTRA_AVAILABLE_VOICES_();
	static ref<java::lang::String> EXTRA_CHECK_VOICE_DATA_FOR_();
	static ref<java::lang::String> EXTRA_SAMPLE_TEXT_();
	static ref<java::lang::String> EXTRA_TTS_DATA_INSTALLED_();
	static ref<java::lang::String> EXTRA_UNAVAILABLE_VOICES_();
	static ref<java::lang::String> EXTRA_VOICE_DATA_FILES_();
	static ref<java::lang::String> EXTRA_VOICE_DATA_FILES_INFO_();
	static ref<java::lang::String> EXTRA_VOICE_DATA_ROOT_DIRECTORY_();
	static ref<java::lang::String> INTENT_ACTION_TTS_SERVICE_();
	static ref<java::lang::String> KEY_FEATURE_EMBEDDED_SYNTHESIS_();
	static ref<java::lang::String> KEY_FEATURE_NETWORK_RETRIES_COUNT_();
	static ref<java::lang::String> KEY_FEATURE_NETWORK_SYNTHESIS_();
	static ref<java::lang::String> KEY_FEATURE_NETWORK_TIMEOUT_MS_();
	static ref<java::lang::String> KEY_FEATURE_NOT_INSTALLED_();
	static ref<java::lang::String> KEY_PARAM_PAN_();
	static ref<java::lang::String> KEY_PARAM_SESSION_ID_();
	static ref<java::lang::String> KEY_PARAM_STREAM_();
	static ref<java::lang::String> KEY_PARAM_UTTERANCE_ID_();
	static ref<java::lang::String> KEY_PARAM_VOLUME_();
	static ref<java::lang::String> SERVICE_META_DATA_();

	static ref<TextToSpeech_Engine> new_object(ref<android::speech::tts::TextToSpeech> this_0);

protected:

	TextToSpeech_Engine(handle_type h) : base_(h) {}

};

} // namespace android::speech::tts
} // namespace scapix::java_api

#include <scapix/java_api/android/speech/tts/TextToSpeech.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::speech::tts {

inline ref<java::lang::String> TextToSpeech_Engine::ACTION_CHECK_TTS_DATA_() { return get_static_field<SCAPIX_META_STRING("ACTION_CHECK_TTS_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::ACTION_GET_SAMPLE_TEXT_() { return get_static_field<SCAPIX_META_STRING("ACTION_GET_SAMPLE_TEXT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::ACTION_INSTALL_TTS_DATA_() { return get_static_field<SCAPIX_META_STRING("ACTION_INSTALL_TTS_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::ACTION_TTS_DATA_INSTALLED_() { return get_static_field<SCAPIX_META_STRING("ACTION_TTS_DATA_INSTALLED"), ref<java::lang::String>>(); }
inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_BAD_DATA_() { return get_static_field<SCAPIX_META_STRING("CHECK_VOICE_DATA_BAD_DATA"), jint>(); }
inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_FAIL_() { return get_static_field<SCAPIX_META_STRING("CHECK_VOICE_DATA_FAIL"), jint>(); }
inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_DATA_() { return get_static_field<SCAPIX_META_STRING("CHECK_VOICE_DATA_MISSING_DATA"), jint>(); }
inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_VOLUME_() { return get_static_field<SCAPIX_META_STRING("CHECK_VOICE_DATA_MISSING_VOLUME"), jint>(); }
inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_PASS_() { return get_static_field<SCAPIX_META_STRING("CHECK_VOICE_DATA_PASS"), jint>(); }
inline jint TextToSpeech_Engine::DEFAULT_STREAM_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_STREAM"), jint>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_AVAILABLE_VOICES_() { return get_static_field<SCAPIX_META_STRING("EXTRA_AVAILABLE_VOICES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_CHECK_VOICE_DATA_FOR_() { return get_static_field<SCAPIX_META_STRING("EXTRA_CHECK_VOICE_DATA_FOR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_SAMPLE_TEXT_() { return get_static_field<SCAPIX_META_STRING("EXTRA_SAMPLE_TEXT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_TTS_DATA_INSTALLED_() { return get_static_field<SCAPIX_META_STRING("EXTRA_TTS_DATA_INSTALLED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_UNAVAILABLE_VOICES_() { return get_static_field<SCAPIX_META_STRING("EXTRA_UNAVAILABLE_VOICES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_DATA_FILES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES_INFO_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_DATA_FILES_INFO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::EXTRA_VOICE_DATA_ROOT_DIRECTORY_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_DATA_ROOT_DIRECTORY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::INTENT_ACTION_TTS_SERVICE_() { return get_static_field<SCAPIX_META_STRING("INTENT_ACTION_TTS_SERVICE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_FEATURE_EMBEDDED_SYNTHESIS_() { return get_static_field<SCAPIX_META_STRING("KEY_FEATURE_EMBEDDED_SYNTHESIS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_FEATURE_NETWORK_RETRIES_COUNT_() { return get_static_field<SCAPIX_META_STRING("KEY_FEATURE_NETWORK_RETRIES_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_FEATURE_NETWORK_SYNTHESIS_() { return get_static_field<SCAPIX_META_STRING("KEY_FEATURE_NETWORK_SYNTHESIS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_FEATURE_NETWORK_TIMEOUT_MS_() { return get_static_field<SCAPIX_META_STRING("KEY_FEATURE_NETWORK_TIMEOUT_MS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_FEATURE_NOT_INSTALLED_() { return get_static_field<SCAPIX_META_STRING("KEY_FEATURE_NOT_INSTALLED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_PARAM_PAN_() { return get_static_field<SCAPIX_META_STRING("KEY_PARAM_PAN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_PARAM_SESSION_ID_() { return get_static_field<SCAPIX_META_STRING("KEY_PARAM_SESSION_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_PARAM_STREAM_() { return get_static_field<SCAPIX_META_STRING("KEY_PARAM_STREAM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_PARAM_UTTERANCE_ID_() { return get_static_field<SCAPIX_META_STRING("KEY_PARAM_UTTERANCE_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::KEY_PARAM_VOLUME_() { return get_static_field<SCAPIX_META_STRING("KEY_PARAM_VOLUME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TextToSpeech_Engine::SERVICE_META_DATA_() { return get_static_field<SCAPIX_META_STRING("SERVICE_META_DATA"), ref<java::lang::String>>(); }
inline ref<TextToSpeech_Engine> TextToSpeech_Engine::new_object(ref<android::speech::tts::TextToSpeech> this_0) { return base_::new_object(this_0); }

} // namespace android::speech::tts
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE_H

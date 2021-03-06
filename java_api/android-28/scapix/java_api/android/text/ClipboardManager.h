// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_CLIPBOARDMANAGER_H
#define SCAPIX_ANDROID_TEXT_CLIPBOARDMANAGER_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }

namespace android::text {

class ClipboardManager : public object_base<SCAPIX_META_STRING("android/text/ClipboardManager"),
	java::lang::Object>
{
public:

	static ref<ClipboardManager> new_object();
	ref<java::lang::CharSequence> getText();
	void setText(ref<java::lang::CharSequence> p1);
	jboolean hasText();

protected:

	ClipboardManager(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::text {

inline ref<ClipboardManager> ClipboardManager::new_object() { return base_::new_object(); }
inline ref<java::lang::CharSequence> ClipboardManager::getText() { return call_method<SCAPIX_META_STRING("getText"), ref<java::lang::CharSequence>>(); }
inline void ClipboardManager::setText(ref<java::lang::CharSequence> p1) { return call_method<SCAPIX_META_STRING("setText"), void>(p1); }
inline jboolean ClipboardManager::hasText() { return call_method<SCAPIX_META_STRING("hasText"), jboolean>(); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_CLIPBOARDMANAGER_H

// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GESTURE_GESTURELIBRARY_H
#define SCAPIX_ANDROID_GESTURE_GESTURELIBRARY_H

namespace scapix::java_api {

namespace android::gesture { class Gesture; }
namespace java::lang { class String; }
namespace java::util { class ArrayList; }
namespace java::util { class Set; }

namespace android::gesture {

class GestureLibrary : public object_base<SCAPIX_META_STRING("android/gesture/GestureLibrary"),
	java::lang::Object>
{
public:

	jboolean save();
	jboolean load();
	jboolean isReadOnly();
	void setOrientationStyle(jint style);
	jint getOrientationStyle();
	void setSequenceType(jint type);
	jint getSequenceType();
	ref<java::util::Set> getGestureEntries();
	ref<java::util::ArrayList> recognize(ref<android::gesture::Gesture> gesture);
	void addGesture(ref<java::lang::String> entryName, ref<android::gesture::Gesture> gesture);
	void removeGesture(ref<java::lang::String> entryName, ref<android::gesture::Gesture> gesture);
	void removeEntry(ref<java::lang::String> entryName);
	ref<java::util::ArrayList> getGestures(ref<java::lang::String> entryName);

protected:

	GestureLibrary(handle_type h) : base_(h) {}

};

} // namespace android::gesture
} // namespace scapix::java_api

#include <scapix/java_api/android/gesture/Gesture.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace android::gesture {

inline jboolean GestureLibrary::save() { return call_method<SCAPIX_META_STRING("save"), jboolean>(); }
inline jboolean GestureLibrary::load() { return call_method<SCAPIX_META_STRING("load"), jboolean>(); }
inline jboolean GestureLibrary::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline void GestureLibrary::setOrientationStyle(jint style) { return call_method<SCAPIX_META_STRING("setOrientationStyle"), void>(style); }
inline jint GestureLibrary::getOrientationStyle() { return call_method<SCAPIX_META_STRING("getOrientationStyle"), jint>(); }
inline void GestureLibrary::setSequenceType(jint type) { return call_method<SCAPIX_META_STRING("setSequenceType"), void>(type); }
inline jint GestureLibrary::getSequenceType() { return call_method<SCAPIX_META_STRING("getSequenceType"), jint>(); }
inline ref<java::util::Set> GestureLibrary::getGestureEntries() { return call_method<SCAPIX_META_STRING("getGestureEntries"), ref<java::util::Set>>(); }
inline ref<java::util::ArrayList> GestureLibrary::recognize(ref<android::gesture::Gesture> gesture) { return call_method<SCAPIX_META_STRING("recognize"), ref<java::util::ArrayList>>(gesture); }
inline void GestureLibrary::addGesture(ref<java::lang::String> entryName, ref<android::gesture::Gesture> gesture) { return call_method<SCAPIX_META_STRING("addGesture"), void>(entryName, gesture); }
inline void GestureLibrary::removeGesture(ref<java::lang::String> entryName, ref<android::gesture::Gesture> gesture) { return call_method<SCAPIX_META_STRING("removeGesture"), void>(entryName, gesture); }
inline void GestureLibrary::removeEntry(ref<java::lang::String> entryName) { return call_method<SCAPIX_META_STRING("removeEntry"), void>(entryName); }
inline ref<java::util::ArrayList> GestureLibrary::getGestures(ref<java::lang::String> entryName) { return call_method<SCAPIX_META_STRING("getGestures"), ref<java::util::ArrayList>>(entryName); }

} // namespace android::gesture
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GESTURE_GESTURELIBRARY_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_ANDROID_OS_HANDLERTHREAD_H
#define SCAPIX_ANDROID_OS_HANDLERTHREAD_H

namespace scapix::java_api {

namespace android::os { class Looper; }
namespace java::lang { class String; }

namespace android::os {

class HandlerThread : public object_base<SCAPIX_META_STRING("android/os/HandlerThread"),
	java::lang::Thread>
{
public:

	static ref<HandlerThread> new_object(ref<java::lang::String> name);
	static ref<HandlerThread> new_object(ref<java::lang::String> name, jint priority);
	void run();
	ref<android::os::Looper> getLooper();
	jboolean quit();
	jboolean quitSafely();
	jint getThreadId();

protected:

	HandlerThread(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<HandlerThread> HandlerThread::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<HandlerThread> HandlerThread::new_object(ref<java::lang::String> name, jint priority) { return base_::new_object(name, priority); }
inline void HandlerThread::run() { return call_method<SCAPIX_META_STRING("run"), void>(); }
inline ref<android::os::Looper> HandlerThread::getLooper() { return call_method<SCAPIX_META_STRING("getLooper"), ref<android::os::Looper>>(); }
inline jboolean HandlerThread::quit() { return call_method<SCAPIX_META_STRING("quit"), jboolean>(); }
inline jboolean HandlerThread::quitSafely() { return call_method<SCAPIX_META_STRING("quitSafely"), jboolean>(); }
inline jint HandlerThread::getThreadId() { return call_method<SCAPIX_META_STRING("getThreadId"), jint>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_HANDLERTHREAD_H
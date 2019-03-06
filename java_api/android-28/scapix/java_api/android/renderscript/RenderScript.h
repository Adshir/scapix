// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_RENDERSCRIPT_H
#define SCAPIX_ANDROID_RENDERSCRIPT_RENDERSCRIPT_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::renderscript { class RenderScript_ContextType; }
namespace android::renderscript { class RenderScript_Priority; }
namespace android::renderscript { class RenderScript_RSErrorHandler; }
namespace android::renderscript { class RenderScript_RSMessageHandler; }

namespace android::renderscript {

class RenderScript : public object_base<SCAPIX_META_STRING("android/renderscript/RenderScript"),
	java::lang::Object>
{
public:

	using RSMessageHandler = RenderScript_RSMessageHandler;
	using RSErrorHandler = RenderScript_RSErrorHandler;
	using Priority = RenderScript_Priority;
	using ContextType = RenderScript_ContextType;

	static jint CREATE_FLAG_LOW_LATENCY_();
	static jint CREATE_FLAG_LOW_POWER_();
	static jint CREATE_FLAG_NONE_();

	static jlong getMinorVersion();
	void setMessageHandler(ref<android::renderscript::RenderScript_RSMessageHandler> msg);
	ref<android::renderscript::RenderScript_RSMessageHandler> getMessageHandler();
	void sendMessage(jint id, ref<link::java::array<jint>> data);
	void setErrorHandler(ref<android::renderscript::RenderScript_RSErrorHandler> msg);
	ref<android::renderscript::RenderScript_RSErrorHandler> getErrorHandler();
	void setPriority(ref<android::renderscript::RenderScript_Priority> p);
	ref<android::content::Context> getApplicationContext();
	static ref<android::renderscript::RenderScript> create(ref<android::content::Context> ctx);
	static ref<android::renderscript::RenderScript> create(ref<android::content::Context> ctx, ref<android::renderscript::RenderScript_ContextType> ct);
	static ref<android::renderscript::RenderScript> create(ref<android::content::Context> ctx, ref<android::renderscript::RenderScript_ContextType> ct, jint flags);
	static void releaseAllContexts();
	static ref<android::renderscript::RenderScript> createMultiContext(ref<android::content::Context> ctx, ref<android::renderscript::RenderScript_ContextType> ct, jint flags, jint API_number);
	void contextDump();
	void finish();
	void destroy();

protected:

	RenderScript(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/renderscript/RenderScript_ContextType.h>
#include <scapix/java_api/android/renderscript/RenderScript_Priority.h>
#include <scapix/java_api/android/renderscript/RenderScript_RSErrorHandler.h>
#include <scapix/java_api/android/renderscript/RenderScript_RSMessageHandler.h>

namespace scapix::java_api {
namespace android::renderscript {

inline jint RenderScript::CREATE_FLAG_LOW_LATENCY_() { return get_static_field<SCAPIX_META_STRING("CREATE_FLAG_LOW_LATENCY"), jint>(); }
inline jint RenderScript::CREATE_FLAG_LOW_POWER_() { return get_static_field<SCAPIX_META_STRING("CREATE_FLAG_LOW_POWER"), jint>(); }
inline jint RenderScript::CREATE_FLAG_NONE_() { return get_static_field<SCAPIX_META_STRING("CREATE_FLAG_NONE"), jint>(); }
inline jlong RenderScript::getMinorVersion() { return call_static_method<SCAPIX_META_STRING("getMinorVersion"), jlong>(); }
inline void RenderScript::setMessageHandler(ref<android::renderscript::RenderScript_RSMessageHandler> msg) { return call_method<SCAPIX_META_STRING("setMessageHandler"), void>(msg); }
inline ref<android::renderscript::RenderScript_RSMessageHandler> RenderScript::getMessageHandler() { return call_method<SCAPIX_META_STRING("getMessageHandler"), ref<android::renderscript::RenderScript_RSMessageHandler>>(); }
inline void RenderScript::sendMessage(jint id, ref<link::java::array<jint>> data) { return call_method<SCAPIX_META_STRING("sendMessage"), void>(id, data); }
inline void RenderScript::setErrorHandler(ref<android::renderscript::RenderScript_RSErrorHandler> msg) { return call_method<SCAPIX_META_STRING("setErrorHandler"), void>(msg); }
inline ref<android::renderscript::RenderScript_RSErrorHandler> RenderScript::getErrorHandler() { return call_method<SCAPIX_META_STRING("getErrorHandler"), ref<android::renderscript::RenderScript_RSErrorHandler>>(); }
inline void RenderScript::setPriority(ref<android::renderscript::RenderScript_Priority> p) { return call_method<SCAPIX_META_STRING("setPriority"), void>(p); }
inline ref<android::content::Context> RenderScript::getApplicationContext() { return call_method<SCAPIX_META_STRING("getApplicationContext"), ref<android::content::Context>>(); }
inline ref<android::renderscript::RenderScript> RenderScript::create(ref<android::content::Context> ctx) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::RenderScript>>(ctx); }
inline ref<android::renderscript::RenderScript> RenderScript::create(ref<android::content::Context> ctx, ref<android::renderscript::RenderScript_ContextType> ct) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::RenderScript>>(ctx, ct); }
inline ref<android::renderscript::RenderScript> RenderScript::create(ref<android::content::Context> ctx, ref<android::renderscript::RenderScript_ContextType> ct, jint flags) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::RenderScript>>(ctx, ct, flags); }
inline void RenderScript::releaseAllContexts() { return call_static_method<SCAPIX_META_STRING("releaseAllContexts"), void>(); }
inline ref<android::renderscript::RenderScript> RenderScript::createMultiContext(ref<android::content::Context> ctx, ref<android::renderscript::RenderScript_ContextType> ct, jint flags, jint API_number) { return call_static_method<SCAPIX_META_STRING("createMultiContext"), ref<android::renderscript::RenderScript>>(ctx, ct, flags, API_number); }
inline void RenderScript::contextDump() { return call_method<SCAPIX_META_STRING("contextDump"), void>(); }
inline void RenderScript::finish() { return call_method<SCAPIX_META_STRING("finish"), void>(); }
inline void RenderScript::destroy() { return call_method<SCAPIX_META_STRING("destroy"), void>(); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_RENDERSCRIPT_H
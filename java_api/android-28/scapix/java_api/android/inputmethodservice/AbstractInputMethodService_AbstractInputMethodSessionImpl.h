// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSession.h>

#ifndef SCAPIX_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODSESSIONIMPL_H
#define SCAPIX_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODSESSIONIMPL_H

namespace scapix::java_api {

namespace android::inputmethodservice { class AbstractInputMethodService; }
namespace android::view { class KeyEvent; }
namespace android::view { class MotionEvent; }
namespace android::view::inputmethod { class InputMethodSession_EventCallback; }

namespace android::inputmethodservice {

class AbstractInputMethodService_AbstractInputMethodSessionImpl : public object_base<SCAPIX_META_STRING("android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl"),
	java::lang::Object,
	android::view::inputmethod::InputMethodSession>
{
public:

	static ref<AbstractInputMethodService_AbstractInputMethodSessionImpl> new_object(ref<android::inputmethodservice::AbstractInputMethodService> this_0);
	jboolean isEnabled();
	jboolean isRevoked();
	void setEnabled(jboolean enabled);
	void revokeSelf();
	void dispatchKeyEvent(jint seq, ref<android::view::KeyEvent> event, ref<android::view::inputmethod::InputMethodSession_EventCallback> callback);
	void dispatchTrackballEvent(jint seq, ref<android::view::MotionEvent> event, ref<android::view::inputmethod::InputMethodSession_EventCallback> callback);
	void dispatchGenericMotionEvent(jint seq, ref<android::view::MotionEvent> event, ref<android::view::inputmethod::InputMethodSession_EventCallback> callback);

protected:

	AbstractInputMethodService_AbstractInputMethodSessionImpl(handle_type h) : base_(h) {}

};

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSession_EventCallback.h>

namespace scapix::java_api {
namespace android::inputmethodservice {

inline ref<AbstractInputMethodService_AbstractInputMethodSessionImpl> AbstractInputMethodService_AbstractInputMethodSessionImpl::new_object(ref<android::inputmethodservice::AbstractInputMethodService> this_0) { return base_::new_object(this_0); }
inline jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isEnabled() { return call_method<SCAPIX_META_STRING("isEnabled"), jboolean>(); }
inline jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isRevoked() { return call_method<SCAPIX_META_STRING("isRevoked"), jboolean>(); }
inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::setEnabled(jboolean enabled) { return call_method<SCAPIX_META_STRING("setEnabled"), void>(enabled); }
inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::revokeSelf() { return call_method<SCAPIX_META_STRING("revokeSelf"), void>(); }
inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchKeyEvent(jint seq, ref<android::view::KeyEvent> event, ref<android::view::inputmethod::InputMethodSession_EventCallback> callback) { return call_method<SCAPIX_META_STRING("dispatchKeyEvent"), void>(seq, event, callback); }
inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchTrackballEvent(jint seq, ref<android::view::MotionEvent> event, ref<android::view::inputmethod::InputMethodSession_EventCallback> callback) { return call_method<SCAPIX_META_STRING("dispatchTrackballEvent"), void>(seq, event, callback); }
inline void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchGenericMotionEvent(jint seq, ref<android::view::MotionEvent> event, ref<android::view::inputmethod::InputMethodSession_EventCallback> callback) { return call_method<SCAPIX_META_STRING("dispatchGenericMotionEvent"), void>(seq, event, callback); }

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODSESSIONIMPL_H

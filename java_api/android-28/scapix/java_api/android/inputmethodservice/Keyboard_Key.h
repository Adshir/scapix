// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY_H
#define SCAPIX_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY_H

namespace scapix::java_api {

namespace android::content::res { class Resources; }
namespace android::content::res { class XmlResourceParser; }
namespace android::graphics::drawable { class Drawable; }
namespace android::inputmethodservice { class Keyboard_Row; }
namespace java::lang { class CharSequence; }

namespace android::inputmethodservice {

class Keyboard_Key : public object_base<SCAPIX_META_STRING("android/inputmethodservice/Keyboard$Key"),
	java::lang::Object>
{
public:

	ref<link::java::array<jint>> codes();
	void codes(ref<link::java::array<jint>>);
	jint edgeFlags();
	void edgeFlags(jint);
	jint gap();
	void gap(jint);
	jint height();
	void height(jint);
	ref<android::graphics::drawable::Drawable> icon();
	void icon(ref<android::graphics::drawable::Drawable>);
	ref<android::graphics::drawable::Drawable> iconPreview();
	void iconPreview(ref<android::graphics::drawable::Drawable>);
	ref<java::lang::CharSequence> label();
	void label(ref<java::lang::CharSequence>);
	jboolean modifier();
	void modifier(jboolean);
	jboolean on();
	void on(jboolean);
	ref<java::lang::CharSequence> popupCharacters();
	void popupCharacters(ref<java::lang::CharSequence>);
	jint popupResId();
	void popupResId(jint);
	jboolean pressed();
	void pressed(jboolean);
	jboolean repeatable();
	void repeatable(jboolean);
	jboolean sticky();
	void sticky(jboolean);
	ref<java::lang::CharSequence> text();
	void text(ref<java::lang::CharSequence>);
	jint width();
	void width(jint);
	jint x();
	void x(jint);
	jint y();
	void y(jint);

	static ref<Keyboard_Key> new_object(ref<android::inputmethodservice::Keyboard_Row> parent);
	static ref<Keyboard_Key> new_object(ref<android::content::res::Resources> res, ref<android::inputmethodservice::Keyboard_Row> parent, jint x, jint y, ref<android::content::res::XmlResourceParser> parser);
	void onPressed();
	void onReleased(jboolean inside);
	jboolean isInside(jint x, jint y);
	jint squaredDistanceFrom(jint x, jint y);
	ref<link::java::array<jint>> getCurrentDrawableState();

protected:

	Keyboard_Key(handle_type h) : base_(h) {}

};

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/inputmethodservice/Keyboard_Row.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::inputmethodservice {

inline ref<link::java::array<jint>> Keyboard_Key::codes() { return get_field<SCAPIX_META_STRING("codes"), ref<link::java::array<jint>>>(); }
inline void Keyboard_Key::codes(ref<link::java::array<jint>> v) { set_field<SCAPIX_META_STRING("codes"), ref<link::java::array<jint>>>(v); }
inline jint Keyboard_Key::edgeFlags() { return get_field<SCAPIX_META_STRING("edgeFlags"), jint>(); }
inline void Keyboard_Key::edgeFlags(jint v) { set_field<SCAPIX_META_STRING("edgeFlags"), jint>(v); }
inline jint Keyboard_Key::gap() { return get_field<SCAPIX_META_STRING("gap"), jint>(); }
inline void Keyboard_Key::gap(jint v) { set_field<SCAPIX_META_STRING("gap"), jint>(v); }
inline jint Keyboard_Key::height() { return get_field<SCAPIX_META_STRING("height"), jint>(); }
inline void Keyboard_Key::height(jint v) { set_field<SCAPIX_META_STRING("height"), jint>(v); }
inline ref<android::graphics::drawable::Drawable> Keyboard_Key::icon() { return get_field<SCAPIX_META_STRING("icon"), ref<android::graphics::drawable::Drawable>>(); }
inline void Keyboard_Key::icon(ref<android::graphics::drawable::Drawable> v) { set_field<SCAPIX_META_STRING("icon"), ref<android::graphics::drawable::Drawable>>(v); }
inline ref<android::graphics::drawable::Drawable> Keyboard_Key::iconPreview() { return get_field<SCAPIX_META_STRING("iconPreview"), ref<android::graphics::drawable::Drawable>>(); }
inline void Keyboard_Key::iconPreview(ref<android::graphics::drawable::Drawable> v) { set_field<SCAPIX_META_STRING("iconPreview"), ref<android::graphics::drawable::Drawable>>(v); }
inline ref<java::lang::CharSequence> Keyboard_Key::label() { return get_field<SCAPIX_META_STRING("label"), ref<java::lang::CharSequence>>(); }
inline void Keyboard_Key::label(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("label"), ref<java::lang::CharSequence>>(v); }
inline jboolean Keyboard_Key::modifier() { return get_field<SCAPIX_META_STRING("modifier"), jboolean>(); }
inline void Keyboard_Key::modifier(jboolean v) { set_field<SCAPIX_META_STRING("modifier"), jboolean>(v); }
inline jboolean Keyboard_Key::on() { return get_field<SCAPIX_META_STRING("on"), jboolean>(); }
inline void Keyboard_Key::on(jboolean v) { set_field<SCAPIX_META_STRING("on"), jboolean>(v); }
inline ref<java::lang::CharSequence> Keyboard_Key::popupCharacters() { return get_field<SCAPIX_META_STRING("popupCharacters"), ref<java::lang::CharSequence>>(); }
inline void Keyboard_Key::popupCharacters(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("popupCharacters"), ref<java::lang::CharSequence>>(v); }
inline jint Keyboard_Key::popupResId() { return get_field<SCAPIX_META_STRING("popupResId"), jint>(); }
inline void Keyboard_Key::popupResId(jint v) { set_field<SCAPIX_META_STRING("popupResId"), jint>(v); }
inline jboolean Keyboard_Key::pressed() { return get_field<SCAPIX_META_STRING("pressed"), jboolean>(); }
inline void Keyboard_Key::pressed(jboolean v) { set_field<SCAPIX_META_STRING("pressed"), jboolean>(v); }
inline jboolean Keyboard_Key::repeatable() { return get_field<SCAPIX_META_STRING("repeatable"), jboolean>(); }
inline void Keyboard_Key::repeatable(jboolean v) { set_field<SCAPIX_META_STRING("repeatable"), jboolean>(v); }
inline jboolean Keyboard_Key::sticky() { return get_field<SCAPIX_META_STRING("sticky"), jboolean>(); }
inline void Keyboard_Key::sticky(jboolean v) { set_field<SCAPIX_META_STRING("sticky"), jboolean>(v); }
inline ref<java::lang::CharSequence> Keyboard_Key::text() { return get_field<SCAPIX_META_STRING("text"), ref<java::lang::CharSequence>>(); }
inline void Keyboard_Key::text(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("text"), ref<java::lang::CharSequence>>(v); }
inline jint Keyboard_Key::width() { return get_field<SCAPIX_META_STRING("width"), jint>(); }
inline void Keyboard_Key::width(jint v) { set_field<SCAPIX_META_STRING("width"), jint>(v); }
inline jint Keyboard_Key::x() { return get_field<SCAPIX_META_STRING("x"), jint>(); }
inline void Keyboard_Key::x(jint v) { set_field<SCAPIX_META_STRING("x"), jint>(v); }
inline jint Keyboard_Key::y() { return get_field<SCAPIX_META_STRING("y"), jint>(); }
inline void Keyboard_Key::y(jint v) { set_field<SCAPIX_META_STRING("y"), jint>(v); }
inline ref<Keyboard_Key> Keyboard_Key::new_object(ref<android::inputmethodservice::Keyboard_Row> parent) { return base_::new_object(parent); }
inline ref<Keyboard_Key> Keyboard_Key::new_object(ref<android::content::res::Resources> res, ref<android::inputmethodservice::Keyboard_Row> parent, jint x, jint y, ref<android::content::res::XmlResourceParser> parser) { return base_::new_object(res, parent, x, y, parser); }
inline void Keyboard_Key::onPressed() { return call_method<SCAPIX_META_STRING("onPressed"), void>(); }
inline void Keyboard_Key::onReleased(jboolean inside) { return call_method<SCAPIX_META_STRING("onReleased"), void>(inside); }
inline jboolean Keyboard_Key::isInside(jint x, jint y) { return call_method<SCAPIX_META_STRING("isInside"), jboolean>(x, y); }
inline jint Keyboard_Key::squaredDistanceFrom(jint x, jint y) { return call_method<SCAPIX_META_STRING("squaredDistanceFrom"), jint>(x, y); }
inline ref<link::java::array<jint>> Keyboard_Key::getCurrentDrawableState() { return call_method<SCAPIX_META_STRING("getCurrentDrawableState"), ref<link::java::array<jint>>>(); }

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY_H
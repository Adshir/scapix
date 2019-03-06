// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup_MarginLayoutParams.h>

#ifndef SCAPIX_ANDROID_WIDGET_LINEARLAYOUT_LAYOUTPARAMS_H
#define SCAPIX_ANDROID_WIDGET_LINEARLAYOUT_LAYOUTPARAMS_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class ViewGroup_LayoutParams; }
namespace java::lang { class String; }

namespace android::widget {

class LinearLayout_LayoutParams : public object_base<SCAPIX_META_STRING("android/widget/LinearLayout$LayoutParams"),
	android::view::ViewGroup_MarginLayoutParams>
{
public:

	jint gravity();
	void gravity(jint);
	jfloat weight();
	void weight(jfloat);

	static ref<LinearLayout_LayoutParams> new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs);
	static ref<LinearLayout_LayoutParams> new_object(jint width, jint height);
	static ref<LinearLayout_LayoutParams> new_object(jint width, jint height, jfloat weight);
	static ref<LinearLayout_LayoutParams> new_object(ref<android::view::ViewGroup_LayoutParams> p);
	static ref<LinearLayout_LayoutParams> new_object(ref<android::view::ViewGroup_MarginLayoutParams> source);
	static ref<LinearLayout_LayoutParams> new_object(ref<android::widget::LinearLayout_LayoutParams> source);
	ref<java::lang::String> debug(ref<java::lang::String> output);

protected:

	LinearLayout_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline jint LinearLayout_LayoutParams::gravity() { return get_field<SCAPIX_META_STRING("gravity"), jint>(); }
inline void LinearLayout_LayoutParams::gravity(jint v) { set_field<SCAPIX_META_STRING("gravity"), jint>(v); }
inline jfloat LinearLayout_LayoutParams::weight() { return get_field<SCAPIX_META_STRING("weight"), jfloat>(); }
inline void LinearLayout_LayoutParams::weight(jfloat v) { set_field<SCAPIX_META_STRING("weight"), jfloat>(v); }
inline ref<LinearLayout_LayoutParams> LinearLayout_LayoutParams::new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
inline ref<LinearLayout_LayoutParams> LinearLayout_LayoutParams::new_object(jint width, jint height) { return base_::new_object(width, height); }
inline ref<LinearLayout_LayoutParams> LinearLayout_LayoutParams::new_object(jint width, jint height, jfloat weight) { return base_::new_object(width, height, weight); }
inline ref<LinearLayout_LayoutParams> LinearLayout_LayoutParams::new_object(ref<android::view::ViewGroup_LayoutParams> p) { return base_::new_object(p); }
inline ref<LinearLayout_LayoutParams> LinearLayout_LayoutParams::new_object(ref<android::view::ViewGroup_MarginLayoutParams> source) { return base_::new_object(source); }
inline ref<LinearLayout_LayoutParams> LinearLayout_LayoutParams::new_object(ref<android::widget::LinearLayout_LayoutParams> source) { return base_::new_object(source); }
inline ref<java::lang::String> LinearLayout_LayoutParams::debug(ref<java::lang::String> output) { return call_method<SCAPIX_META_STRING("debug"), ref<java::lang::String>>(output); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_LINEARLAYOUT_LAYOUTPARAMS_H
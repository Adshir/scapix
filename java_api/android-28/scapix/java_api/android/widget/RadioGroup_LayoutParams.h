// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout_LayoutParams.h>

#ifndef SCAPIX_ANDROID_WIDGET_RADIOGROUP_LAYOUTPARAMS_H
#define SCAPIX_ANDROID_WIDGET_RADIOGROUP_LAYOUTPARAMS_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class ViewGroup_LayoutParams; }
namespace android::view { class ViewGroup_MarginLayoutParams; }

namespace android::widget {

class RadioGroup_LayoutParams : public object_base<SCAPIX_META_STRING("android/widget/RadioGroup$LayoutParams"),
	android::widget::LinearLayout_LayoutParams>
{
public:

	static ref<RadioGroup_LayoutParams> new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs);
	static ref<RadioGroup_LayoutParams> new_object(jint w, jint h);
	static ref<RadioGroup_LayoutParams> new_object(jint w, jint h, jfloat initWeight);
	static ref<RadioGroup_LayoutParams> new_object(ref<android::view::ViewGroup_LayoutParams> p);
	static ref<RadioGroup_LayoutParams> new_object(ref<android::view::ViewGroup_MarginLayoutParams> source);

protected:

	RadioGroup_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/ViewGroup_MarginLayoutParams.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<RadioGroup_LayoutParams> RadioGroup_LayoutParams::new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
inline ref<RadioGroup_LayoutParams> RadioGroup_LayoutParams::new_object(jint w, jint h) { return base_::new_object(w, h); }
inline ref<RadioGroup_LayoutParams> RadioGroup_LayoutParams::new_object(jint w, jint h, jfloat initWeight) { return base_::new_object(w, h, initWeight); }
inline ref<RadioGroup_LayoutParams> RadioGroup_LayoutParams::new_object(ref<android::view::ViewGroup_LayoutParams> p) { return base_::new_object(p); }
inline ref<RadioGroup_LayoutParams> RadioGroup_LayoutParams::new_object(ref<android::view::ViewGroup_MarginLayoutParams> source) { return base_::new_object(source); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_RADIOGROUP_LAYOUTPARAMS_H
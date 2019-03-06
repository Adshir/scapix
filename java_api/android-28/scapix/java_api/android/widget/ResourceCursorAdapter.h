// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/CursorAdapter.h>

#ifndef SCAPIX_ANDROID_WIDGET_RESOURCECURSORADAPTER_H
#define SCAPIX_ANDROID_WIDGET_RESOURCECURSORADAPTER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content::res { class Resources_Theme; }
namespace android::database { class Cursor; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }

namespace android::widget {

class ResourceCursorAdapter : public object_base<SCAPIX_META_STRING("android/widget/ResourceCursorAdapter"),
	android::widget::CursorAdapter>
{
public:

	static ref<ResourceCursorAdapter> new_object(ref<android::content::Context> context, jint layout, ref<android::database::Cursor> c);
	static ref<ResourceCursorAdapter> new_object(ref<android::content::Context> context, jint layout, ref<android::database::Cursor> c, jboolean autoRequery);
	static ref<ResourceCursorAdapter> new_object(ref<android::content::Context> context, jint layout, ref<android::database::Cursor> c, jint flags);
	void setDropDownViewTheme(ref<android::content::res::Resources_Theme> theme);
	ref<android::view::View> newView(ref<android::content::Context> context, ref<android::database::Cursor> cursor, ref<android::view::ViewGroup> parent);
	ref<android::view::View> newDropDownView(ref<android::content::Context> context, ref<android::database::Cursor> cursor, ref<android::view::ViewGroup> parent);
	void setViewResource(jint layout);
	void setDropDownViewResource(jint dropDownLayout);

protected:

	ResourceCursorAdapter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<ResourceCursorAdapter> ResourceCursorAdapter::new_object(ref<android::content::Context> context, jint layout, ref<android::database::Cursor> c) { return base_::new_object(context, layout, c); }
inline ref<ResourceCursorAdapter> ResourceCursorAdapter::new_object(ref<android::content::Context> context, jint layout, ref<android::database::Cursor> c, jboolean autoRequery) { return base_::new_object(context, layout, c, autoRequery); }
inline ref<ResourceCursorAdapter> ResourceCursorAdapter::new_object(ref<android::content::Context> context, jint layout, ref<android::database::Cursor> c, jint flags) { return base_::new_object(context, layout, c, flags); }
inline void ResourceCursorAdapter::setDropDownViewTheme(ref<android::content::res::Resources_Theme> theme) { return call_method<SCAPIX_META_STRING("setDropDownViewTheme"), void>(theme); }
inline ref<android::view::View> ResourceCursorAdapter::newView(ref<android::content::Context> context, ref<android::database::Cursor> cursor, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("newView"), ref<android::view::View>>(context, cursor, parent); }
inline ref<android::view::View> ResourceCursorAdapter::newDropDownView(ref<android::content::Context> context, ref<android::database::Cursor> cursor, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("newDropDownView"), ref<android::view::View>>(context, cursor, parent); }
inline void ResourceCursorAdapter::setViewResource(jint layout) { return call_method<SCAPIX_META_STRING("setViewResource"), void>(layout); }
inline void ResourceCursorAdapter::setDropDownViewResource(jint dropDownLayout) { return call_method<SCAPIX_META_STRING("setDropDownViewResource"), void>(dropDownLayout); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_RESOURCECURSORADAPTER_H
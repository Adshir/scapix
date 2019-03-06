// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/ListActivity.h>

#ifndef SCAPIX_ANDROID_APP_LAUNCHERACTIVITY_H
#define SCAPIX_ANDROID_APP_LAUNCHERACTIVITY_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::util { class List; }
namespace android::app { class LauncherActivity_ListItem; }
namespace android::app { class LauncherActivity_IconResizer; }

namespace android::app {

class LauncherActivity : public object_base<SCAPIX_META_STRING("android/app/LauncherActivity"),
	android::app::ListActivity>
{
public:

	using ListItem = LauncherActivity_ListItem;
	using IconResizer = LauncherActivity_IconResizer;

	static ref<LauncherActivity> new_object();
	void setTitle(ref<java::lang::CharSequence> title);
	void setTitle(jint titleId);
	ref<java::util::List> makeListItems();

protected:

	LauncherActivity(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::app {

inline ref<LauncherActivity> LauncherActivity::new_object() { return base_::new_object(); }
inline void LauncherActivity::setTitle(ref<java::lang::CharSequence> title) { return call_method<SCAPIX_META_STRING("setTitle"), void>(title); }
inline void LauncherActivity::setTitle(jint titleId) { return call_method<SCAPIX_META_STRING("setTitle"), void>(titleId); }
inline ref<java::util::List> LauncherActivity::makeListItems() { return call_method<SCAPIX_META_STRING("makeListItems"), ref<java::util::List>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_LAUNCHERACTIVITY_H
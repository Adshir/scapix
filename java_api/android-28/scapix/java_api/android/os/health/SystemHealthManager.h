// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_HEALTH_SYSTEMHEALTHMANAGER_H
#define SCAPIX_ANDROID_OS_HEALTH_SYSTEMHEALTHMANAGER_H

namespace scapix::java_api {

namespace android::os::health { class HealthStats; }

namespace android::os::health {

class SystemHealthManager : public object_base<SCAPIX_META_STRING("android/os/health/SystemHealthManager"),
	java::lang::Object>
{
public:

	ref<android::os::health::HealthStats> takeUidSnapshot(jint uid);
	ref<android::os::health::HealthStats> takeMyUidSnapshot();
	ref<link::java::array<android::os::health::HealthStats>> takeUidSnapshots(ref<link::java::array<jint>> uids);

protected:

	SystemHealthManager(handle_type h) : base_(h) {}

};

} // namespace android::os::health
} // namespace scapix::java_api

#include <scapix/java_api/android/os/health/HealthStats.h>

namespace scapix::java_api {
namespace android::os::health {

inline ref<android::os::health::HealthStats> SystemHealthManager::takeUidSnapshot(jint uid) { return call_method<SCAPIX_META_STRING("takeUidSnapshot"), ref<android::os::health::HealthStats>>(uid); }
inline ref<android::os::health::HealthStats> SystemHealthManager::takeMyUidSnapshot() { return call_method<SCAPIX_META_STRING("takeMyUidSnapshot"), ref<android::os::health::HealthStats>>(); }
inline ref<link::java::array<android::os::health::HealthStats>> SystemHealthManager::takeUidSnapshots(ref<link::java::array<jint>> uids) { return call_method<SCAPIX_META_STRING("takeUidSnapshots"), ref<link::java::array<android::os::health::HealthStats>>>(uids); }

} // namespace android::os::health
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_HEALTH_SYSTEMHEALTHMANAGER_H
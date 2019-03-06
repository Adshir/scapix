// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_LOCATION_LOCATIONPROVIDER_H
#define SCAPIX_ANDROID_LOCATION_LOCATIONPROVIDER_H

namespace scapix::java_api {

namespace android::location { class Criteria; }
namespace java::lang { class String; }

namespace android::location {

class LocationProvider : public object_base<SCAPIX_META_STRING("android/location/LocationProvider"),
	java::lang::Object>
{
public:

	static jint AVAILABLE_();
	static jint OUT_OF_SERVICE_();
	static jint TEMPORARILY_UNAVAILABLE_();

	ref<java::lang::String> getName();
	jboolean meetsCriteria(ref<android::location::Criteria> criteria);
	jboolean requiresNetwork();
	jboolean requiresSatellite();
	jboolean requiresCell();
	jboolean hasMonetaryCost();
	jboolean supportsAltitude();
	jboolean supportsSpeed();
	jboolean supportsBearing();
	jint getPowerRequirement();
	jint getAccuracy();

protected:

	LocationProvider(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api

#include <scapix/java_api/android/location/Criteria.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::location {

inline jint LocationProvider::AVAILABLE_() { return get_static_field<SCAPIX_META_STRING("AVAILABLE"), jint>(); }
inline jint LocationProvider::OUT_OF_SERVICE_() { return get_static_field<SCAPIX_META_STRING("OUT_OF_SERVICE"), jint>(); }
inline jint LocationProvider::TEMPORARILY_UNAVAILABLE_() { return get_static_field<SCAPIX_META_STRING("TEMPORARILY_UNAVAILABLE"), jint>(); }
inline ref<java::lang::String> LocationProvider::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline jboolean LocationProvider::meetsCriteria(ref<android::location::Criteria> criteria) { return call_method<SCAPIX_META_STRING("meetsCriteria"), jboolean>(criteria); }
inline jboolean LocationProvider::requiresNetwork() { return call_method<SCAPIX_META_STRING("requiresNetwork"), jboolean>(); }
inline jboolean LocationProvider::requiresSatellite() { return call_method<SCAPIX_META_STRING("requiresSatellite"), jboolean>(); }
inline jboolean LocationProvider::requiresCell() { return call_method<SCAPIX_META_STRING("requiresCell"), jboolean>(); }
inline jboolean LocationProvider::hasMonetaryCost() { return call_method<SCAPIX_META_STRING("hasMonetaryCost"), jboolean>(); }
inline jboolean LocationProvider::supportsAltitude() { return call_method<SCAPIX_META_STRING("supportsAltitude"), jboolean>(); }
inline jboolean LocationProvider::supportsSpeed() { return call_method<SCAPIX_META_STRING("supportsSpeed"), jboolean>(); }
inline jboolean LocationProvider::supportsBearing() { return call_method<SCAPIX_META_STRING("supportsBearing"), jboolean>(); }
inline jint LocationProvider::getPowerRequirement() { return call_method<SCAPIX_META_STRING("getPowerRequirement"), jint>(); }
inline jint LocationProvider::getAccuracy() { return call_method<SCAPIX_META_STRING("getAccuracy"), jint>(); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_LOCATIONPROVIDER_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_LOCATION_LOCATIONMANAGER_H
#define SCAPIX_ANDROID_LOCATION_LOCATIONMANAGER_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::location { class Criteria; }
namespace android::location { class GnssMeasurementsEvent_Callback; }
namespace android::location { class GnssNavigationMessage_Callback; }
namespace android::location { class GnssStatus_Callback; }
namespace android::location { class GpsStatus; }
namespace android::location { class GpsStatus_Listener; }
namespace android::location { class GpsStatus_NmeaListener; }
namespace android::location { class Location; }
namespace android::location { class LocationListener; }
namespace android::location { class LocationProvider; }
namespace android::location { class OnNmeaMessageListener; }
namespace android::os { class Bundle; }
namespace android::os { class Handler; }
namespace android::os { class Looper; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::location {

class LocationManager : public object_base<SCAPIX_META_STRING("android/location/LocationManager"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> GPS_PROVIDER_();
	static ref<java::lang::String> KEY_LOCATION_CHANGED_();
	static ref<java::lang::String> KEY_PROVIDER_ENABLED_();
	static ref<java::lang::String> KEY_PROXIMITY_ENTERING_();
	static ref<java::lang::String> KEY_STATUS_CHANGED_();
	static ref<java::lang::String> MODE_CHANGED_ACTION_();
	static ref<java::lang::String> NETWORK_PROVIDER_();
	static ref<java::lang::String> PASSIVE_PROVIDER_();
	static ref<java::lang::String> PROVIDERS_CHANGED_ACTION_();

	ref<java::util::List> getAllProviders();
	ref<java::util::List> getProviders(jboolean enabledOnly);
	ref<android::location::LocationProvider> getProvider(ref<java::lang::String> name);
	ref<java::util::List> getProviders(ref<android::location::Criteria> criteria, jboolean enabledOnly);
	ref<java::lang::String> getBestProvider(ref<android::location::Criteria> criteria, jboolean enabledOnly);
	void requestLocationUpdates(ref<java::lang::String> provider, jlong minTime, jfloat p3, ref<android::location::LocationListener> minDistance);
	void requestLocationUpdates(ref<java::lang::String> provider, jlong minTime, jfloat p3, ref<android::location::LocationListener> minDistance, ref<android::os::Looper> listener);
	void requestLocationUpdates(jlong minTime, jfloat p2, ref<android::location::Criteria> minDistance, ref<android::location::LocationListener> criteria, ref<android::os::Looper> listener);
	void requestLocationUpdates(ref<java::lang::String> provider, jlong minTime, jfloat p3, ref<android::app::PendingIntent> minDistance);
	void requestLocationUpdates(jlong minTime, jfloat p2, ref<android::location::Criteria> minDistance, ref<android::app::PendingIntent> criteria);
	void requestSingleUpdate(ref<java::lang::String> provider, ref<android::location::LocationListener> listener, ref<android::os::Looper> looper);
	void requestSingleUpdate(ref<android::location::Criteria> criteria, ref<android::location::LocationListener> listener, ref<android::os::Looper> looper);
	void requestSingleUpdate(ref<java::lang::String> provider, ref<android::app::PendingIntent> intent);
	void requestSingleUpdate(ref<android::location::Criteria> criteria, ref<android::app::PendingIntent> intent);
	void removeUpdates(ref<android::location::LocationListener> listener);
	void removeUpdates(ref<android::app::PendingIntent> intent);
	void addProximityAlert(jdouble latitude, jdouble p2, jfloat longitude, jlong p4, ref<android::app::PendingIntent> radius);
	void removeProximityAlert(ref<android::app::PendingIntent> intent);
	jboolean isLocationEnabled();
	jboolean isProviderEnabled(ref<java::lang::String> provider);
	ref<android::location::Location> getLastKnownLocation(ref<java::lang::String> provider);
	void addTestProvider(ref<java::lang::String> name, jboolean requiresNetwork, jboolean requiresSatellite, jboolean requiresCell, jboolean hasMonetaryCost, jboolean supportsAltitude, jboolean supportsSpeed, jboolean supportsBearing, jint powerRequirement, jint accuracy);
	void removeTestProvider(ref<java::lang::String> provider);
	void setTestProviderLocation(ref<java::lang::String> provider, ref<android::location::Location> loc);
	void clearTestProviderLocation(ref<java::lang::String> provider);
	void setTestProviderEnabled(ref<java::lang::String> provider, jboolean enabled);
	void clearTestProviderEnabled(ref<java::lang::String> provider);
	void setTestProviderStatus(ref<java::lang::String> provider, jint status, ref<android::os::Bundle> extras, jlong updateTime);
	void clearTestProviderStatus(ref<java::lang::String> provider);
	jboolean addGpsStatusListener(ref<android::location::GpsStatus_Listener> listener);
	void removeGpsStatusListener(ref<android::location::GpsStatus_Listener> listener);
	jboolean registerGnssStatusCallback(ref<android::location::GnssStatus_Callback> callback);
	jboolean registerGnssStatusCallback(ref<android::location::GnssStatus_Callback> callback, ref<android::os::Handler> handler);
	void unregisterGnssStatusCallback(ref<android::location::GnssStatus_Callback> callback);
	jboolean addNmeaListener(ref<android::location::GpsStatus_NmeaListener> listener);
	void removeNmeaListener(ref<android::location::GpsStatus_NmeaListener> listener);
	jboolean addNmeaListener(ref<android::location::OnNmeaMessageListener> listener);
	jboolean addNmeaListener(ref<android::location::OnNmeaMessageListener> listener, ref<android::os::Handler> handler);
	void removeNmeaListener(ref<android::location::OnNmeaMessageListener> listener);
	jboolean registerGnssMeasurementsCallback(ref<android::location::GnssMeasurementsEvent_Callback> callback);
	jboolean registerGnssMeasurementsCallback(ref<android::location::GnssMeasurementsEvent_Callback> callback, ref<android::os::Handler> handler);
	void unregisterGnssMeasurementsCallback(ref<android::location::GnssMeasurementsEvent_Callback> callback);
	jboolean registerGnssNavigationMessageCallback(ref<android::location::GnssNavigationMessage_Callback> callback);
	jboolean registerGnssNavigationMessageCallback(ref<android::location::GnssNavigationMessage_Callback> callback, ref<android::os::Handler> handler);
	void unregisterGnssNavigationMessageCallback(ref<android::location::GnssNavigationMessage_Callback> callback);
	ref<android::location::GpsStatus> getGpsStatus(ref<android::location::GpsStatus> status);
	jint getGnssYearOfHardware();
	ref<java::lang::String> getGnssHardwareModelName();
	jboolean sendExtraCommand(ref<java::lang::String> provider, ref<java::lang::String> command, ref<android::os::Bundle> extras);

protected:

	LocationManager(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/location/Criteria.h>
#include <scapix/java_api/android/location/GnssMeasurementsEvent_Callback.h>
#include <scapix/java_api/android/location/GnssNavigationMessage_Callback.h>
#include <scapix/java_api/android/location/GnssStatus_Callback.h>
#include <scapix/java_api/android/location/GpsStatus.h>
#include <scapix/java_api/android/location/GpsStatus_Listener.h>
#include <scapix/java_api/android/location/GpsStatus_NmeaListener.h>
#include <scapix/java_api/android/location/Location.h>
#include <scapix/java_api/android/location/LocationListener.h>
#include <scapix/java_api/android/location/LocationProvider.h>
#include <scapix/java_api/android/location/OnNmeaMessageListener.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::location {

inline ref<java::lang::String> LocationManager::GPS_PROVIDER_() { return get_static_field<SCAPIX_META_STRING("GPS_PROVIDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::KEY_LOCATION_CHANGED_() { return get_static_field<SCAPIX_META_STRING("KEY_LOCATION_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::KEY_PROVIDER_ENABLED_() { return get_static_field<SCAPIX_META_STRING("KEY_PROVIDER_ENABLED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::KEY_PROXIMITY_ENTERING_() { return get_static_field<SCAPIX_META_STRING("KEY_PROXIMITY_ENTERING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::KEY_STATUS_CHANGED_() { return get_static_field<SCAPIX_META_STRING("KEY_STATUS_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::MODE_CHANGED_ACTION_() { return get_static_field<SCAPIX_META_STRING("MODE_CHANGED_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::NETWORK_PROVIDER_() { return get_static_field<SCAPIX_META_STRING("NETWORK_PROVIDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::PASSIVE_PROVIDER_() { return get_static_field<SCAPIX_META_STRING("PASSIVE_PROVIDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> LocationManager::PROVIDERS_CHANGED_ACTION_() { return get_static_field<SCAPIX_META_STRING("PROVIDERS_CHANGED_ACTION"), ref<java::lang::String>>(); }
inline ref<java::util::List> LocationManager::getAllProviders() { return call_method<SCAPIX_META_STRING("getAllProviders"), ref<java::util::List>>(); }
inline ref<java::util::List> LocationManager::getProviders(jboolean enabledOnly) { return call_method<SCAPIX_META_STRING("getProviders"), ref<java::util::List>>(enabledOnly); }
inline ref<android::location::LocationProvider> LocationManager::getProvider(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getProvider"), ref<android::location::LocationProvider>>(name); }
inline ref<java::util::List> LocationManager::getProviders(ref<android::location::Criteria> criteria, jboolean enabledOnly) { return call_method<SCAPIX_META_STRING("getProviders"), ref<java::util::List>>(criteria, enabledOnly); }
inline ref<java::lang::String> LocationManager::getBestProvider(ref<android::location::Criteria> criteria, jboolean enabledOnly) { return call_method<SCAPIX_META_STRING("getBestProvider"), ref<java::lang::String>>(criteria, enabledOnly); }
inline void LocationManager::requestLocationUpdates(ref<java::lang::String> provider, jlong minTime, jfloat p3, ref<android::location::LocationListener> minDistance) { return call_method<SCAPIX_META_STRING("requestLocationUpdates"), void>(provider, minTime, p3, minDistance); }
inline void LocationManager::requestLocationUpdates(ref<java::lang::String> provider, jlong minTime, jfloat p3, ref<android::location::LocationListener> minDistance, ref<android::os::Looper> listener) { return call_method<SCAPIX_META_STRING("requestLocationUpdates"), void>(provider, minTime, p3, minDistance, listener); }
inline void LocationManager::requestLocationUpdates(jlong minTime, jfloat p2, ref<android::location::Criteria> minDistance, ref<android::location::LocationListener> criteria, ref<android::os::Looper> listener) { return call_method<SCAPIX_META_STRING("requestLocationUpdates"), void>(minTime, p2, minDistance, criteria, listener); }
inline void LocationManager::requestLocationUpdates(ref<java::lang::String> provider, jlong minTime, jfloat p3, ref<android::app::PendingIntent> minDistance) { return call_method<SCAPIX_META_STRING("requestLocationUpdates"), void>(provider, minTime, p3, minDistance); }
inline void LocationManager::requestLocationUpdates(jlong minTime, jfloat p2, ref<android::location::Criteria> minDistance, ref<android::app::PendingIntent> criteria) { return call_method<SCAPIX_META_STRING("requestLocationUpdates"), void>(minTime, p2, minDistance, criteria); }
inline void LocationManager::requestSingleUpdate(ref<java::lang::String> provider, ref<android::location::LocationListener> listener, ref<android::os::Looper> looper) { return call_method<SCAPIX_META_STRING("requestSingleUpdate"), void>(provider, listener, looper); }
inline void LocationManager::requestSingleUpdate(ref<android::location::Criteria> criteria, ref<android::location::LocationListener> listener, ref<android::os::Looper> looper) { return call_method<SCAPIX_META_STRING("requestSingleUpdate"), void>(criteria, listener, looper); }
inline void LocationManager::requestSingleUpdate(ref<java::lang::String> provider, ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("requestSingleUpdate"), void>(provider, intent); }
inline void LocationManager::requestSingleUpdate(ref<android::location::Criteria> criteria, ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("requestSingleUpdate"), void>(criteria, intent); }
inline void LocationManager::removeUpdates(ref<android::location::LocationListener> listener) { return call_method<SCAPIX_META_STRING("removeUpdates"), void>(listener); }
inline void LocationManager::removeUpdates(ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("removeUpdates"), void>(intent); }
inline void LocationManager::addProximityAlert(jdouble latitude, jdouble p2, jfloat longitude, jlong p4, ref<android::app::PendingIntent> radius) { return call_method<SCAPIX_META_STRING("addProximityAlert"), void>(latitude, p2, longitude, p4, radius); }
inline void LocationManager::removeProximityAlert(ref<android::app::PendingIntent> intent) { return call_method<SCAPIX_META_STRING("removeProximityAlert"), void>(intent); }
inline jboolean LocationManager::isLocationEnabled() { return call_method<SCAPIX_META_STRING("isLocationEnabled"), jboolean>(); }
inline jboolean LocationManager::isProviderEnabled(ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("isProviderEnabled"), jboolean>(provider); }
inline ref<android::location::Location> LocationManager::getLastKnownLocation(ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("getLastKnownLocation"), ref<android::location::Location>>(provider); }
inline void LocationManager::addTestProvider(ref<java::lang::String> name, jboolean requiresNetwork, jboolean requiresSatellite, jboolean requiresCell, jboolean hasMonetaryCost, jboolean supportsAltitude, jboolean supportsSpeed, jboolean supportsBearing, jint powerRequirement, jint accuracy) { return call_method<SCAPIX_META_STRING("addTestProvider"), void>(name, requiresNetwork, requiresSatellite, requiresCell, hasMonetaryCost, supportsAltitude, supportsSpeed, supportsBearing, powerRequirement, accuracy); }
inline void LocationManager::removeTestProvider(ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("removeTestProvider"), void>(provider); }
inline void LocationManager::setTestProviderLocation(ref<java::lang::String> provider, ref<android::location::Location> loc) { return call_method<SCAPIX_META_STRING("setTestProviderLocation"), void>(provider, loc); }
inline void LocationManager::clearTestProviderLocation(ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("clearTestProviderLocation"), void>(provider); }
inline void LocationManager::setTestProviderEnabled(ref<java::lang::String> provider, jboolean enabled) { return call_method<SCAPIX_META_STRING("setTestProviderEnabled"), void>(provider, enabled); }
inline void LocationManager::clearTestProviderEnabled(ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("clearTestProviderEnabled"), void>(provider); }
inline void LocationManager::setTestProviderStatus(ref<java::lang::String> provider, jint status, ref<android::os::Bundle> extras, jlong updateTime) { return call_method<SCAPIX_META_STRING("setTestProviderStatus"), void>(provider, status, extras, updateTime); }
inline void LocationManager::clearTestProviderStatus(ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("clearTestProviderStatus"), void>(provider); }
inline jboolean LocationManager::addGpsStatusListener(ref<android::location::GpsStatus_Listener> listener) { return call_method<SCAPIX_META_STRING("addGpsStatusListener"), jboolean>(listener); }
inline void LocationManager::removeGpsStatusListener(ref<android::location::GpsStatus_Listener> listener) { return call_method<SCAPIX_META_STRING("removeGpsStatusListener"), void>(listener); }
inline jboolean LocationManager::registerGnssStatusCallback(ref<android::location::GnssStatus_Callback> callback) { return call_method<SCAPIX_META_STRING("registerGnssStatusCallback"), jboolean>(callback); }
inline jboolean LocationManager::registerGnssStatusCallback(ref<android::location::GnssStatus_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerGnssStatusCallback"), jboolean>(callback, handler); }
inline void LocationManager::unregisterGnssStatusCallback(ref<android::location::GnssStatus_Callback> callback) { return call_method<SCAPIX_META_STRING("unregisterGnssStatusCallback"), void>(callback); }
inline jboolean LocationManager::addNmeaListener(ref<android::location::GpsStatus_NmeaListener> listener) { return call_method<SCAPIX_META_STRING("addNmeaListener"), jboolean>(listener); }
inline void LocationManager::removeNmeaListener(ref<android::location::GpsStatus_NmeaListener> listener) { return call_method<SCAPIX_META_STRING("removeNmeaListener"), void>(listener); }
inline jboolean LocationManager::addNmeaListener(ref<android::location::OnNmeaMessageListener> listener) { return call_method<SCAPIX_META_STRING("addNmeaListener"), jboolean>(listener); }
inline jboolean LocationManager::addNmeaListener(ref<android::location::OnNmeaMessageListener> listener, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("addNmeaListener"), jboolean>(listener, handler); }
inline void LocationManager::removeNmeaListener(ref<android::location::OnNmeaMessageListener> listener) { return call_method<SCAPIX_META_STRING("removeNmeaListener"), void>(listener); }
inline jboolean LocationManager::registerGnssMeasurementsCallback(ref<android::location::GnssMeasurementsEvent_Callback> callback) { return call_method<SCAPIX_META_STRING("registerGnssMeasurementsCallback"), jboolean>(callback); }
inline jboolean LocationManager::registerGnssMeasurementsCallback(ref<android::location::GnssMeasurementsEvent_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerGnssMeasurementsCallback"), jboolean>(callback, handler); }
inline void LocationManager::unregisterGnssMeasurementsCallback(ref<android::location::GnssMeasurementsEvent_Callback> callback) { return call_method<SCAPIX_META_STRING("unregisterGnssMeasurementsCallback"), void>(callback); }
inline jboolean LocationManager::registerGnssNavigationMessageCallback(ref<android::location::GnssNavigationMessage_Callback> callback) { return call_method<SCAPIX_META_STRING("registerGnssNavigationMessageCallback"), jboolean>(callback); }
inline jboolean LocationManager::registerGnssNavigationMessageCallback(ref<android::location::GnssNavigationMessage_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerGnssNavigationMessageCallback"), jboolean>(callback, handler); }
inline void LocationManager::unregisterGnssNavigationMessageCallback(ref<android::location::GnssNavigationMessage_Callback> callback) { return call_method<SCAPIX_META_STRING("unregisterGnssNavigationMessageCallback"), void>(callback); }
inline ref<android::location::GpsStatus> LocationManager::getGpsStatus(ref<android::location::GpsStatus> status) { return call_method<SCAPIX_META_STRING("getGpsStatus"), ref<android::location::GpsStatus>>(status); }
inline jint LocationManager::getGnssYearOfHardware() { return call_method<SCAPIX_META_STRING("getGnssYearOfHardware"), jint>(); }
inline ref<java::lang::String> LocationManager::getGnssHardwareModelName() { return call_method<SCAPIX_META_STRING("getGnssHardwareModelName"), ref<java::lang::String>>(); }
inline jboolean LocationManager::sendExtraCommand(ref<java::lang::String> provider, ref<java::lang::String> command, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("sendExtraCommand"), jboolean>(provider, command, extras); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_LOCATIONMANAGER_H
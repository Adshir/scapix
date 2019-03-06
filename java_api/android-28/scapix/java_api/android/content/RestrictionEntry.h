// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_RESTRICTIONENTRY_H
#define SCAPIX_ANDROID_CONTENT_RESTRICTIONENTRY_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::content {

class RestrictionEntry : public object_base<SCAPIX_META_STRING("android/content/RestrictionEntry"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint TYPE_BOOLEAN_();
	static jint TYPE_BUNDLE_();
	static jint TYPE_BUNDLE_ARRAY_();
	static jint TYPE_CHOICE_();
	static jint TYPE_INTEGER_();
	static jint TYPE_MULTI_SELECT_();
	static jint TYPE_NULL_();
	static jint TYPE_STRING_();

	static ref<RestrictionEntry> new_object(jint type, ref<java::lang::String> key);
	static ref<RestrictionEntry> new_object(ref<java::lang::String> key, ref<java::lang::String> selectedString);
	static ref<RestrictionEntry> new_object(ref<java::lang::String> key, jboolean selectedState);
	static ref<RestrictionEntry> new_object(ref<java::lang::String> key, ref<link::java::array<java::lang::String>> selectedStrings);
	static ref<RestrictionEntry> new_object(ref<java::lang::String> key, jint selectedInt);
	static ref<RestrictionEntry> new_object(ref<android::os::Parcel> in);
	static ref<android::content::RestrictionEntry> createBundleEntry(ref<java::lang::String> key, ref<link::java::array<android::content::RestrictionEntry>> restrictionEntries);
	static ref<android::content::RestrictionEntry> createBundleArrayEntry(ref<java::lang::String> key, ref<link::java::array<android::content::RestrictionEntry>> restrictionEntries);
	void setType(jint type);
	jint getType();
	ref<java::lang::String> getSelectedString();
	ref<link::java::array<java::lang::String>> getAllSelectedStrings();
	jboolean getSelectedState();
	jint getIntValue();
	void setIntValue(jint value);
	void setSelectedString(ref<java::lang::String> selectedString);
	void setSelectedState(jboolean state);
	void setAllSelectedStrings(ref<link::java::array<java::lang::String>> allSelectedStrings);
	void setChoiceValues(ref<link::java::array<java::lang::String>> choiceValues);
	void setChoiceValues(ref<android::content::Context> context, jint stringArrayResId);
	ref<link::java::array<android::content::RestrictionEntry>> getRestrictions();
	void setRestrictions(ref<link::java::array<android::content::RestrictionEntry>> restrictions);
	ref<link::java::array<java::lang::String>> getChoiceValues();
	void setChoiceEntries(ref<link::java::array<java::lang::String>> choiceEntries);
	void setChoiceEntries(ref<android::content::Context> context, jint stringArrayResId);
	ref<link::java::array<java::lang::String>> getChoiceEntries();
	ref<java::lang::String> getDescription();
	void setDescription(ref<java::lang::String> description);
	ref<java::lang::String> getKey();
	ref<java::lang::String> getTitle();
	void setTitle(ref<java::lang::String> title);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();

protected:

	RestrictionEntry(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<android::os::Parcelable_Creator> RestrictionEntry::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint RestrictionEntry::TYPE_BOOLEAN_() { return get_static_field<SCAPIX_META_STRING("TYPE_BOOLEAN"), jint>(); }
inline jint RestrictionEntry::TYPE_BUNDLE_() { return get_static_field<SCAPIX_META_STRING("TYPE_BUNDLE"), jint>(); }
inline jint RestrictionEntry::TYPE_BUNDLE_ARRAY_() { return get_static_field<SCAPIX_META_STRING("TYPE_BUNDLE_ARRAY"), jint>(); }
inline jint RestrictionEntry::TYPE_CHOICE_() { return get_static_field<SCAPIX_META_STRING("TYPE_CHOICE"), jint>(); }
inline jint RestrictionEntry::TYPE_INTEGER_() { return get_static_field<SCAPIX_META_STRING("TYPE_INTEGER"), jint>(); }
inline jint RestrictionEntry::TYPE_MULTI_SELECT_() { return get_static_field<SCAPIX_META_STRING("TYPE_MULTI_SELECT"), jint>(); }
inline jint RestrictionEntry::TYPE_NULL_() { return get_static_field<SCAPIX_META_STRING("TYPE_NULL"), jint>(); }
inline jint RestrictionEntry::TYPE_STRING_() { return get_static_field<SCAPIX_META_STRING("TYPE_STRING"), jint>(); }
inline ref<RestrictionEntry> RestrictionEntry::new_object(jint type, ref<java::lang::String> key) { return base_::new_object(type, key); }
inline ref<RestrictionEntry> RestrictionEntry::new_object(ref<java::lang::String> key, ref<java::lang::String> selectedString) { return base_::new_object(key, selectedString); }
inline ref<RestrictionEntry> RestrictionEntry::new_object(ref<java::lang::String> key, jboolean selectedState) { return base_::new_object(key, selectedState); }
inline ref<RestrictionEntry> RestrictionEntry::new_object(ref<java::lang::String> key, ref<link::java::array<java::lang::String>> selectedStrings) { return base_::new_object(key, selectedStrings); }
inline ref<RestrictionEntry> RestrictionEntry::new_object(ref<java::lang::String> key, jint selectedInt) { return base_::new_object(key, selectedInt); }
inline ref<RestrictionEntry> RestrictionEntry::new_object(ref<android::os::Parcel> in) { return base_::new_object(in); }
inline ref<android::content::RestrictionEntry> RestrictionEntry::createBundleEntry(ref<java::lang::String> key, ref<link::java::array<android::content::RestrictionEntry>> restrictionEntries) { return call_static_method<SCAPIX_META_STRING("createBundleEntry"), ref<android::content::RestrictionEntry>>(key, restrictionEntries); }
inline ref<android::content::RestrictionEntry> RestrictionEntry::createBundleArrayEntry(ref<java::lang::String> key, ref<link::java::array<android::content::RestrictionEntry>> restrictionEntries) { return call_static_method<SCAPIX_META_STRING("createBundleArrayEntry"), ref<android::content::RestrictionEntry>>(key, restrictionEntries); }
inline void RestrictionEntry::setType(jint type) { return call_method<SCAPIX_META_STRING("setType"), void>(type); }
inline jint RestrictionEntry::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline ref<java::lang::String> RestrictionEntry::getSelectedString() { return call_method<SCAPIX_META_STRING("getSelectedString"), ref<java::lang::String>>(); }
inline ref<link::java::array<java::lang::String>> RestrictionEntry::getAllSelectedStrings() { return call_method<SCAPIX_META_STRING("getAllSelectedStrings"), ref<link::java::array<java::lang::String>>>(); }
inline jboolean RestrictionEntry::getSelectedState() { return call_method<SCAPIX_META_STRING("getSelectedState"), jboolean>(); }
inline jint RestrictionEntry::getIntValue() { return call_method<SCAPIX_META_STRING("getIntValue"), jint>(); }
inline void RestrictionEntry::setIntValue(jint value) { return call_method<SCAPIX_META_STRING("setIntValue"), void>(value); }
inline void RestrictionEntry::setSelectedString(ref<java::lang::String> selectedString) { return call_method<SCAPIX_META_STRING("setSelectedString"), void>(selectedString); }
inline void RestrictionEntry::setSelectedState(jboolean state) { return call_method<SCAPIX_META_STRING("setSelectedState"), void>(state); }
inline void RestrictionEntry::setAllSelectedStrings(ref<link::java::array<java::lang::String>> allSelectedStrings) { return call_method<SCAPIX_META_STRING("setAllSelectedStrings"), void>(allSelectedStrings); }
inline void RestrictionEntry::setChoiceValues(ref<link::java::array<java::lang::String>> choiceValues) { return call_method<SCAPIX_META_STRING("setChoiceValues"), void>(choiceValues); }
inline void RestrictionEntry::setChoiceValues(ref<android::content::Context> context, jint stringArrayResId) { return call_method<SCAPIX_META_STRING("setChoiceValues"), void>(context, stringArrayResId); }
inline ref<link::java::array<android::content::RestrictionEntry>> RestrictionEntry::getRestrictions() { return call_method<SCAPIX_META_STRING("getRestrictions"), ref<link::java::array<android::content::RestrictionEntry>>>(); }
inline void RestrictionEntry::setRestrictions(ref<link::java::array<android::content::RestrictionEntry>> restrictions) { return call_method<SCAPIX_META_STRING("setRestrictions"), void>(restrictions); }
inline ref<link::java::array<java::lang::String>> RestrictionEntry::getChoiceValues() { return call_method<SCAPIX_META_STRING("getChoiceValues"), ref<link::java::array<java::lang::String>>>(); }
inline void RestrictionEntry::setChoiceEntries(ref<link::java::array<java::lang::String>> choiceEntries) { return call_method<SCAPIX_META_STRING("setChoiceEntries"), void>(choiceEntries); }
inline void RestrictionEntry::setChoiceEntries(ref<android::content::Context> context, jint stringArrayResId) { return call_method<SCAPIX_META_STRING("setChoiceEntries"), void>(context, stringArrayResId); }
inline ref<link::java::array<java::lang::String>> RestrictionEntry::getChoiceEntries() { return call_method<SCAPIX_META_STRING("getChoiceEntries"), ref<link::java::array<java::lang::String>>>(); }
inline ref<java::lang::String> RestrictionEntry::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<java::lang::String>>(); }
inline void RestrictionEntry::setDescription(ref<java::lang::String> description) { return call_method<SCAPIX_META_STRING("setDescription"), void>(description); }
inline ref<java::lang::String> RestrictionEntry::getKey() { return call_method<SCAPIX_META_STRING("getKey"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RestrictionEntry::getTitle() { return call_method<SCAPIX_META_STRING("getTitle"), ref<java::lang::String>>(); }
inline void RestrictionEntry::setTitle(ref<java::lang::String> title) { return call_method<SCAPIX_META_STRING("setTitle"), void>(title); }
inline jboolean RestrictionEntry::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint RestrictionEntry::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint RestrictionEntry::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void RestrictionEntry::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> RestrictionEntry::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RESTRICTIONENTRY_H
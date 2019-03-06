// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MTP_MTPCONSTANTS_H
#define SCAPIX_ANDROID_MTP_MTPCONSTANTS_H

namespace scapix::java_api {
namespace android::mtp {

class MtpConstants : public object_base<SCAPIX_META_STRING("android/mtp/MtpConstants"),
	java::lang::Object>
{
public:

	static jint ASSOCIATION_TYPE_GENERIC_FOLDER_();
	static jint FORMAT_3GP_CONTAINER_();
	static jint FORMAT_AAC_();
	static jint FORMAT_ABSTRACT_AUDIO_ALBUM_();
	static jint FORMAT_ABSTRACT_AUDIO_PLAYLIST_();
	static jint FORMAT_ABSTRACT_AV_PLAYLIST_();
	static jint FORMAT_ABSTRACT_DOCUMENT_();
	static jint FORMAT_ABSTRACT_IMAGE_ALBUM_();
	static jint FORMAT_ABSTRACT_MEDIACAST_();
	static jint FORMAT_ABSTRACT_MULTIMEDIA_ALBUM_();
	static jint FORMAT_ABSTRACT_VIDEO_ALBUM_();
	static jint FORMAT_ABSTRACT_VIDEO_PLAYLIST_();
	static jint FORMAT_AIFF_();
	static jint FORMAT_ASF_();
	static jint FORMAT_ASSOCIATION_();
	static jint FORMAT_ASX_PLAYLIST_();
	static jint FORMAT_AUDIBLE_();
	static jint FORMAT_AVI_();
	static jint FORMAT_BMP_();
	static jint FORMAT_DEFINED_();
	static jint FORMAT_DNG_();
	static jint FORMAT_DPOF_();
	static jint FORMAT_EXECUTABLE_();
	static jint FORMAT_EXIF_JPEG_();
	static jint FORMAT_FLAC_();
	static jint FORMAT_GIF_();
	static jint FORMAT_HTML_();
	static jint FORMAT_JFIF_();
	static jint FORMAT_JP2_();
	static jint FORMAT_JPX_();
	static jint FORMAT_M3U_PLAYLIST_();
	static jint FORMAT_MP2_();
	static jint FORMAT_MP3_();
	static jint FORMAT_MP4_CONTAINER_();
	static jint FORMAT_MPEG_();
	static jint FORMAT_MPL_PLAYLIST_();
	static jint FORMAT_MS_EXCEL_SPREADSHEET_();
	static jint FORMAT_MS_POWERPOINT_PRESENTATION_();
	static jint FORMAT_MS_WORD_DOCUMENT_();
	static jint FORMAT_OGG_();
	static jint FORMAT_PICT_();
	static jint FORMAT_PLS_PLAYLIST_();
	static jint FORMAT_PNG_();
	static jint FORMAT_SCRIPT_();
	static jint FORMAT_TEXT_();
	static jint FORMAT_TIFF_();
	static jint FORMAT_TIFF_EP_();
	static jint FORMAT_UNDEFINED_();
	static jint FORMAT_UNDEFINED_AUDIO_();
	static jint FORMAT_UNDEFINED_COLLECTION_();
	static jint FORMAT_UNDEFINED_DOCUMENT_();
	static jint FORMAT_UNDEFINED_FIRMWARE_();
	static jint FORMAT_UNDEFINED_VIDEO_();
	static jint FORMAT_WAV_();
	static jint FORMAT_WINDOWS_IMAGE_FORMAT_();
	static jint FORMAT_WMA_();
	static jint FORMAT_WMV_();
	static jint FORMAT_WPL_PLAYLIST_();
	static jint FORMAT_XML_DOCUMENT_();
	static jint OPERATION_CLOSE_SESSION_();
	static jint OPERATION_COPY_OBJECT_();
	static jint OPERATION_DELETE_OBJECT_();
	static jint OPERATION_FORMAT_STORE_();
	static jint OPERATION_GET_DEVICE_INFO_();
	static jint OPERATION_GET_DEVICE_PROP_DESC_();
	static jint OPERATION_GET_DEVICE_PROP_VALUE_();
	static jint OPERATION_GET_NUM_OBJECTS_();
	static jint OPERATION_GET_OBJECT_();
	static jint OPERATION_GET_OBJECT_HANDLES_();
	static jint OPERATION_GET_OBJECT_INFO_();
	static jint OPERATION_GET_OBJECT_PROPS_SUPPORTED_();
	static jint OPERATION_GET_OBJECT_PROP_DESC_();
	static jint OPERATION_GET_OBJECT_PROP_VALUE_();
	static jint OPERATION_GET_OBJECT_REFERENCES_();
	static jint OPERATION_GET_PARTIAL_OBJECT_();
	static jint OPERATION_GET_PARTIAL_OBJECT_64_();
	static jint OPERATION_GET_STORAGE_INFO_();
	static jint OPERATION_GET_STORAGE_I_DS_();
	static jint OPERATION_GET_THUMB_();
	static jint OPERATION_INITIATE_CAPTURE_();
	static jint OPERATION_INITIATE_OPEN_CAPTURE_();
	static jint OPERATION_MOVE_OBJECT_();
	static jint OPERATION_OPEN_SESSION_();
	static jint OPERATION_POWER_DOWN_();
	static jint OPERATION_RESET_DEVICE_();
	static jint OPERATION_RESET_DEVICE_PROP_VALUE_();
	static jint OPERATION_SELF_TEST_();
	static jint OPERATION_SEND_OBJECT_();
	static jint OPERATION_SEND_OBJECT_INFO_();
	static jint OPERATION_SET_DEVICE_PROP_VALUE_();
	static jint OPERATION_SET_OBJECT_PROP_VALUE_();
	static jint OPERATION_SET_OBJECT_PROTECTION_();
	static jint OPERATION_SET_OBJECT_REFERENCES_();
	static jint OPERATION_SKIP_();
	static jint OPERATION_TERMINATE_OPEN_CAPTURE_();
	static jint PROTECTION_STATUS_NONE_();
	static jint PROTECTION_STATUS_NON_TRANSFERABLE_DATA_();
	static jint PROTECTION_STATUS_READ_ONLY_();
	static jint PROTECTION_STATUS_READ_ONLY_DATA_();

	static ref<MtpConstants> new_object();
	static jboolean isAbstractObject(jint format);

protected:

	MtpConstants(handle_type h) : base_(h) {}

};

} // namespace android::mtp
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::mtp {

inline jint MtpConstants::ASSOCIATION_TYPE_GENERIC_FOLDER_() { return get_static_field<SCAPIX_META_STRING("ASSOCIATION_TYPE_GENERIC_FOLDER"), jint>(); }
inline jint MtpConstants::FORMAT_3GP_CONTAINER_() { return get_static_field<SCAPIX_META_STRING("FORMAT_3GP_CONTAINER"), jint>(); }
inline jint MtpConstants::FORMAT_AAC_() { return get_static_field<SCAPIX_META_STRING("FORMAT_AAC"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_AUDIO_ALBUM_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_AUDIO_ALBUM"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_AUDIO_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_AUDIO_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_AV_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_AV_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_DOCUMENT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_DOCUMENT"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_IMAGE_ALBUM_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_IMAGE_ALBUM"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_MEDIACAST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_MEDIACAST"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_MULTIMEDIA_ALBUM_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_MULTIMEDIA_ALBUM"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_VIDEO_ALBUM_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_VIDEO_ALBUM"), jint>(); }
inline jint MtpConstants::FORMAT_ABSTRACT_VIDEO_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ABSTRACT_VIDEO_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_AIFF_() { return get_static_field<SCAPIX_META_STRING("FORMAT_AIFF"), jint>(); }
inline jint MtpConstants::FORMAT_ASF_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ASF"), jint>(); }
inline jint MtpConstants::FORMAT_ASSOCIATION_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ASSOCIATION"), jint>(); }
inline jint MtpConstants::FORMAT_ASX_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_ASX_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_AUDIBLE_() { return get_static_field<SCAPIX_META_STRING("FORMAT_AUDIBLE"), jint>(); }
inline jint MtpConstants::FORMAT_AVI_() { return get_static_field<SCAPIX_META_STRING("FORMAT_AVI"), jint>(); }
inline jint MtpConstants::FORMAT_BMP_() { return get_static_field<SCAPIX_META_STRING("FORMAT_BMP"), jint>(); }
inline jint MtpConstants::FORMAT_DEFINED_() { return get_static_field<SCAPIX_META_STRING("FORMAT_DEFINED"), jint>(); }
inline jint MtpConstants::FORMAT_DNG_() { return get_static_field<SCAPIX_META_STRING("FORMAT_DNG"), jint>(); }
inline jint MtpConstants::FORMAT_DPOF_() { return get_static_field<SCAPIX_META_STRING("FORMAT_DPOF"), jint>(); }
inline jint MtpConstants::FORMAT_EXECUTABLE_() { return get_static_field<SCAPIX_META_STRING("FORMAT_EXECUTABLE"), jint>(); }
inline jint MtpConstants::FORMAT_EXIF_JPEG_() { return get_static_field<SCAPIX_META_STRING("FORMAT_EXIF_JPEG"), jint>(); }
inline jint MtpConstants::FORMAT_FLAC_() { return get_static_field<SCAPIX_META_STRING("FORMAT_FLAC"), jint>(); }
inline jint MtpConstants::FORMAT_GIF_() { return get_static_field<SCAPIX_META_STRING("FORMAT_GIF"), jint>(); }
inline jint MtpConstants::FORMAT_HTML_() { return get_static_field<SCAPIX_META_STRING("FORMAT_HTML"), jint>(); }
inline jint MtpConstants::FORMAT_JFIF_() { return get_static_field<SCAPIX_META_STRING("FORMAT_JFIF"), jint>(); }
inline jint MtpConstants::FORMAT_JP2_() { return get_static_field<SCAPIX_META_STRING("FORMAT_JP2"), jint>(); }
inline jint MtpConstants::FORMAT_JPX_() { return get_static_field<SCAPIX_META_STRING("FORMAT_JPX"), jint>(); }
inline jint MtpConstants::FORMAT_M3U_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_M3U_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_MP2_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MP2"), jint>(); }
inline jint MtpConstants::FORMAT_MP3_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MP3"), jint>(); }
inline jint MtpConstants::FORMAT_MP4_CONTAINER_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MP4_CONTAINER"), jint>(); }
inline jint MtpConstants::FORMAT_MPEG_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MPEG"), jint>(); }
inline jint MtpConstants::FORMAT_MPL_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MPL_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_MS_EXCEL_SPREADSHEET_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MS_EXCEL_SPREADSHEET"), jint>(); }
inline jint MtpConstants::FORMAT_MS_POWERPOINT_PRESENTATION_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MS_POWERPOINT_PRESENTATION"), jint>(); }
inline jint MtpConstants::FORMAT_MS_WORD_DOCUMENT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_MS_WORD_DOCUMENT"), jint>(); }
inline jint MtpConstants::FORMAT_OGG_() { return get_static_field<SCAPIX_META_STRING("FORMAT_OGG"), jint>(); }
inline jint MtpConstants::FORMAT_PICT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_PICT"), jint>(); }
inline jint MtpConstants::FORMAT_PLS_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_PLS_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_PNG_() { return get_static_field<SCAPIX_META_STRING("FORMAT_PNG"), jint>(); }
inline jint MtpConstants::FORMAT_SCRIPT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_SCRIPT"), jint>(); }
inline jint MtpConstants::FORMAT_TEXT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_TEXT"), jint>(); }
inline jint MtpConstants::FORMAT_TIFF_() { return get_static_field<SCAPIX_META_STRING("FORMAT_TIFF"), jint>(); }
inline jint MtpConstants::FORMAT_TIFF_EP_() { return get_static_field<SCAPIX_META_STRING("FORMAT_TIFF_EP"), jint>(); }
inline jint MtpConstants::FORMAT_UNDEFINED_() { return get_static_field<SCAPIX_META_STRING("FORMAT_UNDEFINED"), jint>(); }
inline jint MtpConstants::FORMAT_UNDEFINED_AUDIO_() { return get_static_field<SCAPIX_META_STRING("FORMAT_UNDEFINED_AUDIO"), jint>(); }
inline jint MtpConstants::FORMAT_UNDEFINED_COLLECTION_() { return get_static_field<SCAPIX_META_STRING("FORMAT_UNDEFINED_COLLECTION"), jint>(); }
inline jint MtpConstants::FORMAT_UNDEFINED_DOCUMENT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_UNDEFINED_DOCUMENT"), jint>(); }
inline jint MtpConstants::FORMAT_UNDEFINED_FIRMWARE_() { return get_static_field<SCAPIX_META_STRING("FORMAT_UNDEFINED_FIRMWARE"), jint>(); }
inline jint MtpConstants::FORMAT_UNDEFINED_VIDEO_() { return get_static_field<SCAPIX_META_STRING("FORMAT_UNDEFINED_VIDEO"), jint>(); }
inline jint MtpConstants::FORMAT_WAV_() { return get_static_field<SCAPIX_META_STRING("FORMAT_WAV"), jint>(); }
inline jint MtpConstants::FORMAT_WINDOWS_IMAGE_FORMAT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_WINDOWS_IMAGE_FORMAT"), jint>(); }
inline jint MtpConstants::FORMAT_WMA_() { return get_static_field<SCAPIX_META_STRING("FORMAT_WMA"), jint>(); }
inline jint MtpConstants::FORMAT_WMV_() { return get_static_field<SCAPIX_META_STRING("FORMAT_WMV"), jint>(); }
inline jint MtpConstants::FORMAT_WPL_PLAYLIST_() { return get_static_field<SCAPIX_META_STRING("FORMAT_WPL_PLAYLIST"), jint>(); }
inline jint MtpConstants::FORMAT_XML_DOCUMENT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_XML_DOCUMENT"), jint>(); }
inline jint MtpConstants::OPERATION_CLOSE_SESSION_() { return get_static_field<SCAPIX_META_STRING("OPERATION_CLOSE_SESSION"), jint>(); }
inline jint MtpConstants::OPERATION_COPY_OBJECT_() { return get_static_field<SCAPIX_META_STRING("OPERATION_COPY_OBJECT"), jint>(); }
inline jint MtpConstants::OPERATION_DELETE_OBJECT_() { return get_static_field<SCAPIX_META_STRING("OPERATION_DELETE_OBJECT"), jint>(); }
inline jint MtpConstants::OPERATION_FORMAT_STORE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_FORMAT_STORE"), jint>(); }
inline jint MtpConstants::OPERATION_GET_DEVICE_INFO_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_DEVICE_INFO"), jint>(); }
inline jint MtpConstants::OPERATION_GET_DEVICE_PROP_DESC_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_DEVICE_PROP_DESC"), jint>(); }
inline jint MtpConstants::OPERATION_GET_DEVICE_PROP_VALUE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_DEVICE_PROP_VALUE"), jint>(); }
inline jint MtpConstants::OPERATION_GET_NUM_OBJECTS_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_NUM_OBJECTS"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_HANDLES_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT_HANDLES"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_INFO_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT_INFO"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_PROPS_SUPPORTED_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT_PROPS_SUPPORTED"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_PROP_DESC_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT_PROP_DESC"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_PROP_VALUE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT_PROP_VALUE"), jint>(); }
inline jint MtpConstants::OPERATION_GET_OBJECT_REFERENCES_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_OBJECT_REFERENCES"), jint>(); }
inline jint MtpConstants::OPERATION_GET_PARTIAL_OBJECT_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_PARTIAL_OBJECT"), jint>(); }
inline jint MtpConstants::OPERATION_GET_PARTIAL_OBJECT_64_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_PARTIAL_OBJECT_64"), jint>(); }
inline jint MtpConstants::OPERATION_GET_STORAGE_INFO_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_STORAGE_INFO"), jint>(); }
inline jint MtpConstants::OPERATION_GET_STORAGE_I_DS_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_STORAGE_I_DS"), jint>(); }
inline jint MtpConstants::OPERATION_GET_THUMB_() { return get_static_field<SCAPIX_META_STRING("OPERATION_GET_THUMB"), jint>(); }
inline jint MtpConstants::OPERATION_INITIATE_CAPTURE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_INITIATE_CAPTURE"), jint>(); }
inline jint MtpConstants::OPERATION_INITIATE_OPEN_CAPTURE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_INITIATE_OPEN_CAPTURE"), jint>(); }
inline jint MtpConstants::OPERATION_MOVE_OBJECT_() { return get_static_field<SCAPIX_META_STRING("OPERATION_MOVE_OBJECT"), jint>(); }
inline jint MtpConstants::OPERATION_OPEN_SESSION_() { return get_static_field<SCAPIX_META_STRING("OPERATION_OPEN_SESSION"), jint>(); }
inline jint MtpConstants::OPERATION_POWER_DOWN_() { return get_static_field<SCAPIX_META_STRING("OPERATION_POWER_DOWN"), jint>(); }
inline jint MtpConstants::OPERATION_RESET_DEVICE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_RESET_DEVICE"), jint>(); }
inline jint MtpConstants::OPERATION_RESET_DEVICE_PROP_VALUE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_RESET_DEVICE_PROP_VALUE"), jint>(); }
inline jint MtpConstants::OPERATION_SELF_TEST_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SELF_TEST"), jint>(); }
inline jint MtpConstants::OPERATION_SEND_OBJECT_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SEND_OBJECT"), jint>(); }
inline jint MtpConstants::OPERATION_SEND_OBJECT_INFO_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SEND_OBJECT_INFO"), jint>(); }
inline jint MtpConstants::OPERATION_SET_DEVICE_PROP_VALUE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SET_DEVICE_PROP_VALUE"), jint>(); }
inline jint MtpConstants::OPERATION_SET_OBJECT_PROP_VALUE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SET_OBJECT_PROP_VALUE"), jint>(); }
inline jint MtpConstants::OPERATION_SET_OBJECT_PROTECTION_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SET_OBJECT_PROTECTION"), jint>(); }
inline jint MtpConstants::OPERATION_SET_OBJECT_REFERENCES_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SET_OBJECT_REFERENCES"), jint>(); }
inline jint MtpConstants::OPERATION_SKIP_() { return get_static_field<SCAPIX_META_STRING("OPERATION_SKIP"), jint>(); }
inline jint MtpConstants::OPERATION_TERMINATE_OPEN_CAPTURE_() { return get_static_field<SCAPIX_META_STRING("OPERATION_TERMINATE_OPEN_CAPTURE"), jint>(); }
inline jint MtpConstants::PROTECTION_STATUS_NONE_() { return get_static_field<SCAPIX_META_STRING("PROTECTION_STATUS_NONE"), jint>(); }
inline jint MtpConstants::PROTECTION_STATUS_NON_TRANSFERABLE_DATA_() { return get_static_field<SCAPIX_META_STRING("PROTECTION_STATUS_NON_TRANSFERABLE_DATA"), jint>(); }
inline jint MtpConstants::PROTECTION_STATUS_READ_ONLY_() { return get_static_field<SCAPIX_META_STRING("PROTECTION_STATUS_READ_ONLY"), jint>(); }
inline jint MtpConstants::PROTECTION_STATUS_READ_ONLY_DATA_() { return get_static_field<SCAPIX_META_STRING("PROTECTION_STATUS_READ_ONLY_DATA"), jint>(); }
inline ref<MtpConstants> MtpConstants::new_object() { return base_::new_object(); }
inline jboolean MtpConstants::isAbstractObject(jint format) { return call_static_method<SCAPIX_META_STRING("isAbstractObject"), jboolean>(format); }

} // namespace android::mtp
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MTP_MTPCONSTANTS_H
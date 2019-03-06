// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_EXIFINTERFACE_H
#define SCAPIX_ANDROID_MEDIA_EXIFINTERFACE_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace java::io { class FileDescriptor; }
namespace java::io { class InputStream; }
namespace java::lang { class String; }

namespace android::media {

class ExifInterface : public object_base<SCAPIX_META_STRING("android/media/ExifInterface"),
	java::lang::Object>
{
public:

	static jint ORIENTATION_FLIP_HORIZONTAL_();
	static jint ORIENTATION_FLIP_VERTICAL_();
	static jint ORIENTATION_NORMAL_();
	static jint ORIENTATION_ROTATE_180_();
	static jint ORIENTATION_ROTATE_270_();
	static jint ORIENTATION_ROTATE_90_();
	static jint ORIENTATION_TRANSPOSE_();
	static jint ORIENTATION_TRANSVERSE_();
	static jint ORIENTATION_UNDEFINED_();
	static ref<java::lang::String> TAG_APERTURE_();
	static ref<java::lang::String> TAG_APERTURE_VALUE_();
	static ref<java::lang::String> TAG_ARTIST_();
	static ref<java::lang::String> TAG_BITS_PER_SAMPLE_();
	static ref<java::lang::String> TAG_BRIGHTNESS_VALUE_();
	static ref<java::lang::String> TAG_CFA_PATTERN_();
	static ref<java::lang::String> TAG_COLOR_SPACE_();
	static ref<java::lang::String> TAG_COMPONENTS_CONFIGURATION_();
	static ref<java::lang::String> TAG_COMPRESSED_BITS_PER_PIXEL_();
	static ref<java::lang::String> TAG_COMPRESSION_();
	static ref<java::lang::String> TAG_CONTRAST_();
	static ref<java::lang::String> TAG_COPYRIGHT_();
	static ref<java::lang::String> TAG_CUSTOM_RENDERED_();
	static ref<java::lang::String> TAG_DATETIME_();
	static ref<java::lang::String> TAG_DATETIME_DIGITIZED_();
	static ref<java::lang::String> TAG_DATETIME_ORIGINAL_();
	static ref<java::lang::String> TAG_DEFAULT_CROP_SIZE_();
	static ref<java::lang::String> TAG_DEVICE_SETTING_DESCRIPTION_();
	static ref<java::lang::String> TAG_DIGITAL_ZOOM_RATIO_();
	static ref<java::lang::String> TAG_DNG_VERSION_();
	static ref<java::lang::String> TAG_EXIF_VERSION_();
	static ref<java::lang::String> TAG_EXPOSURE_BIAS_VALUE_();
	static ref<java::lang::String> TAG_EXPOSURE_INDEX_();
	static ref<java::lang::String> TAG_EXPOSURE_MODE_();
	static ref<java::lang::String> TAG_EXPOSURE_PROGRAM_();
	static ref<java::lang::String> TAG_EXPOSURE_TIME_();
	static ref<java::lang::String> TAG_FILE_SOURCE_();
	static ref<java::lang::String> TAG_FLASH_();
	static ref<java::lang::String> TAG_FLASHPIX_VERSION_();
	static ref<java::lang::String> TAG_FLASH_ENERGY_();
	static ref<java::lang::String> TAG_FOCAL_LENGTH_();
	static ref<java::lang::String> TAG_FOCAL_LENGTH_IN_35MM_FILM_();
	static ref<java::lang::String> TAG_FOCAL_PLANE_RESOLUTION_UNIT_();
	static ref<java::lang::String> TAG_FOCAL_PLANE_X_RESOLUTION_();
	static ref<java::lang::String> TAG_FOCAL_PLANE_Y_RESOLUTION_();
	static ref<java::lang::String> TAG_F_NUMBER_();
	static ref<java::lang::String> TAG_GAIN_CONTROL_();
	static ref<java::lang::String> TAG_GPS_ALTITUDE_();
	static ref<java::lang::String> TAG_GPS_ALTITUDE_REF_();
	static ref<java::lang::String> TAG_GPS_AREA_INFORMATION_();
	static ref<java::lang::String> TAG_GPS_DATESTAMP_();
	static ref<java::lang::String> TAG_GPS_DEST_BEARING_();
	static ref<java::lang::String> TAG_GPS_DEST_BEARING_REF_();
	static ref<java::lang::String> TAG_GPS_DEST_DISTANCE_();
	static ref<java::lang::String> TAG_GPS_DEST_DISTANCE_REF_();
	static ref<java::lang::String> TAG_GPS_DEST_LATITUDE_();
	static ref<java::lang::String> TAG_GPS_DEST_LATITUDE_REF_();
	static ref<java::lang::String> TAG_GPS_DEST_LONGITUDE_();
	static ref<java::lang::String> TAG_GPS_DEST_LONGITUDE_REF_();
	static ref<java::lang::String> TAG_GPS_DIFFERENTIAL_();
	static ref<java::lang::String> TAG_GPS_DOP_();
	static ref<java::lang::String> TAG_GPS_IMG_DIRECTION_();
	static ref<java::lang::String> TAG_GPS_IMG_DIRECTION_REF_();
	static ref<java::lang::String> TAG_GPS_LATITUDE_();
	static ref<java::lang::String> TAG_GPS_LATITUDE_REF_();
	static ref<java::lang::String> TAG_GPS_LONGITUDE_();
	static ref<java::lang::String> TAG_GPS_LONGITUDE_REF_();
	static ref<java::lang::String> TAG_GPS_MAP_DATUM_();
	static ref<java::lang::String> TAG_GPS_MEASURE_MODE_();
	static ref<java::lang::String> TAG_GPS_PROCESSING_METHOD_();
	static ref<java::lang::String> TAG_GPS_SATELLITES_();
	static ref<java::lang::String> TAG_GPS_SPEED_();
	static ref<java::lang::String> TAG_GPS_SPEED_REF_();
	static ref<java::lang::String> TAG_GPS_STATUS_();
	static ref<java::lang::String> TAG_GPS_TIMESTAMP_();
	static ref<java::lang::String> TAG_GPS_TRACK_();
	static ref<java::lang::String> TAG_GPS_TRACK_REF_();
	static ref<java::lang::String> TAG_GPS_VERSION_ID_();
	static ref<java::lang::String> TAG_IMAGE_DESCRIPTION_();
	static ref<java::lang::String> TAG_IMAGE_LENGTH_();
	static ref<java::lang::String> TAG_IMAGE_UNIQUE_ID_();
	static ref<java::lang::String> TAG_IMAGE_WIDTH_();
	static ref<java::lang::String> TAG_INTEROPERABILITY_INDEX_();
	static ref<java::lang::String> TAG_ISO_();
	static ref<java::lang::String> TAG_ISO_SPEED_RATINGS_();
	static ref<java::lang::String> TAG_JPEG_INTERCHANGE_FORMAT_();
	static ref<java::lang::String> TAG_JPEG_INTERCHANGE_FORMAT_LENGTH_();
	static ref<java::lang::String> TAG_LIGHT_SOURCE_();
	static ref<java::lang::String> TAG_MAKE_();
	static ref<java::lang::String> TAG_MAKER_NOTE_();
	static ref<java::lang::String> TAG_MAX_APERTURE_VALUE_();
	static ref<java::lang::String> TAG_METERING_MODE_();
	static ref<java::lang::String> TAG_MODEL_();
	static ref<java::lang::String> TAG_NEW_SUBFILE_TYPE_();
	static ref<java::lang::String> TAG_OECF_();
	static ref<java::lang::String> TAG_ORF_ASPECT_FRAME_();
	static ref<java::lang::String> TAG_ORF_PREVIEW_IMAGE_LENGTH_();
	static ref<java::lang::String> TAG_ORF_PREVIEW_IMAGE_START_();
	static ref<java::lang::String> TAG_ORF_THUMBNAIL_IMAGE_();
	static ref<java::lang::String> TAG_ORIENTATION_();
	static ref<java::lang::String> TAG_PHOTOMETRIC_INTERPRETATION_();
	static ref<java::lang::String> TAG_PIXEL_X_DIMENSION_();
	static ref<java::lang::String> TAG_PIXEL_Y_DIMENSION_();
	static ref<java::lang::String> TAG_PLANAR_CONFIGURATION_();
	static ref<java::lang::String> TAG_PRIMARY_CHROMATICITIES_();
	static ref<java::lang::String> TAG_REFERENCE_BLACK_WHITE_();
	static ref<java::lang::String> TAG_RELATED_SOUND_FILE_();
	static ref<java::lang::String> TAG_RESOLUTION_UNIT_();
	static ref<java::lang::String> TAG_ROWS_PER_STRIP_();
	static ref<java::lang::String> TAG_RW2_ISO_();
	static ref<java::lang::String> TAG_RW2_JPG_FROM_RAW_();
	static ref<java::lang::String> TAG_RW2_SENSOR_BOTTOM_BORDER_();
	static ref<java::lang::String> TAG_RW2_SENSOR_LEFT_BORDER_();
	static ref<java::lang::String> TAG_RW2_SENSOR_RIGHT_BORDER_();
	static ref<java::lang::String> TAG_RW2_SENSOR_TOP_BORDER_();
	static ref<java::lang::String> TAG_SAMPLES_PER_PIXEL_();
	static ref<java::lang::String> TAG_SATURATION_();
	static ref<java::lang::String> TAG_SCENE_CAPTURE_TYPE_();
	static ref<java::lang::String> TAG_SCENE_TYPE_();
	static ref<java::lang::String> TAG_SENSING_METHOD_();
	static ref<java::lang::String> TAG_SHARPNESS_();
	static ref<java::lang::String> TAG_SHUTTER_SPEED_VALUE_();
	static ref<java::lang::String> TAG_SOFTWARE_();
	static ref<java::lang::String> TAG_SPATIAL_FREQUENCY_RESPONSE_();
	static ref<java::lang::String> TAG_SPECTRAL_SENSITIVITY_();
	static ref<java::lang::String> TAG_STRIP_BYTE_COUNTS_();
	static ref<java::lang::String> TAG_STRIP_OFFSETS_();
	static ref<java::lang::String> TAG_SUBFILE_TYPE_();
	static ref<java::lang::String> TAG_SUBJECT_AREA_();
	static ref<java::lang::String> TAG_SUBJECT_DISTANCE_();
	static ref<java::lang::String> TAG_SUBJECT_DISTANCE_RANGE_();
	static ref<java::lang::String> TAG_SUBJECT_LOCATION_();
	static ref<java::lang::String> TAG_SUBSEC_TIME_();
	static ref<java::lang::String> TAG_SUBSEC_TIME_DIG_();
	static ref<java::lang::String> TAG_SUBSEC_TIME_DIGITIZED_();
	static ref<java::lang::String> TAG_SUBSEC_TIME_ORIG_();
	static ref<java::lang::String> TAG_SUBSEC_TIME_ORIGINAL_();
	static ref<java::lang::String> TAG_THUMBNAIL_IMAGE_LENGTH_();
	static ref<java::lang::String> TAG_THUMBNAIL_IMAGE_WIDTH_();
	static ref<java::lang::String> TAG_TRANSFER_FUNCTION_();
	static ref<java::lang::String> TAG_USER_COMMENT_();
	static ref<java::lang::String> TAG_WHITE_BALANCE_();
	static ref<java::lang::String> TAG_WHITE_POINT_();
	static ref<java::lang::String> TAG_X_RESOLUTION_();
	static ref<java::lang::String> TAG_Y_CB_CR_COEFFICIENTS_();
	static ref<java::lang::String> TAG_Y_CB_CR_POSITIONING_();
	static ref<java::lang::String> TAG_Y_CB_CR_SUB_SAMPLING_();
	static ref<java::lang::String> TAG_Y_RESOLUTION_();
	static jint WHITEBALANCE_AUTO_();
	static jint WHITEBALANCE_MANUAL_();

	static ref<ExifInterface> new_object(ref<java::lang::String> filename);
	static ref<ExifInterface> new_object(ref<java::io::FileDescriptor> fileDescriptor);
	static ref<ExifInterface> new_object(ref<java::io::InputStream> inputStream);
	ref<java::lang::String> getAttribute(ref<java::lang::String> tag);
	jint getAttributeInt(ref<java::lang::String> tag, jint defaultValue);
	jdouble getAttributeDouble(ref<java::lang::String> tag, jdouble defaultValue);
	void setAttribute(ref<java::lang::String> tag, ref<java::lang::String> value);
	void saveAttributes();
	jboolean hasThumbnail();
	ref<link::java::array<jbyte>> getThumbnail();
	ref<link::java::array<jbyte>> getThumbnailBytes();
	ref<android::graphics::Bitmap> getThumbnailBitmap();
	jboolean isThumbnailCompressed();
	ref<link::java::array<jlong>> getThumbnailRange();
	jboolean getLatLong(ref<link::java::array<jfloat>> output);
	jdouble getAltitude(jdouble defaultValue);

protected:

	ExifInterface(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline jint ExifInterface::ORIENTATION_FLIP_HORIZONTAL_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_FLIP_HORIZONTAL"), jint>(); }
inline jint ExifInterface::ORIENTATION_FLIP_VERTICAL_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_FLIP_VERTICAL"), jint>(); }
inline jint ExifInterface::ORIENTATION_NORMAL_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_NORMAL"), jint>(); }
inline jint ExifInterface::ORIENTATION_ROTATE_180_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_ROTATE_180"), jint>(); }
inline jint ExifInterface::ORIENTATION_ROTATE_270_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_ROTATE_270"), jint>(); }
inline jint ExifInterface::ORIENTATION_ROTATE_90_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_ROTATE_90"), jint>(); }
inline jint ExifInterface::ORIENTATION_TRANSPOSE_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_TRANSPOSE"), jint>(); }
inline jint ExifInterface::ORIENTATION_TRANSVERSE_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_TRANSVERSE"), jint>(); }
inline jint ExifInterface::ORIENTATION_UNDEFINED_() { return get_static_field<SCAPIX_META_STRING("ORIENTATION_UNDEFINED"), jint>(); }
inline ref<java::lang::String> ExifInterface::TAG_APERTURE_() { return get_static_field<SCAPIX_META_STRING("TAG_APERTURE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_APERTURE_VALUE_() { return get_static_field<SCAPIX_META_STRING("TAG_APERTURE_VALUE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ARTIST_() { return get_static_field<SCAPIX_META_STRING("TAG_ARTIST"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_BITS_PER_SAMPLE_() { return get_static_field<SCAPIX_META_STRING("TAG_BITS_PER_SAMPLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_BRIGHTNESS_VALUE_() { return get_static_field<SCAPIX_META_STRING("TAG_BRIGHTNESS_VALUE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_CFA_PATTERN_() { return get_static_field<SCAPIX_META_STRING("TAG_CFA_PATTERN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_COLOR_SPACE_() { return get_static_field<SCAPIX_META_STRING("TAG_COLOR_SPACE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_COMPONENTS_CONFIGURATION_() { return get_static_field<SCAPIX_META_STRING("TAG_COMPONENTS_CONFIGURATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_COMPRESSED_BITS_PER_PIXEL_() { return get_static_field<SCAPIX_META_STRING("TAG_COMPRESSED_BITS_PER_PIXEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_COMPRESSION_() { return get_static_field<SCAPIX_META_STRING("TAG_COMPRESSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_CONTRAST_() { return get_static_field<SCAPIX_META_STRING("TAG_CONTRAST"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_COPYRIGHT_() { return get_static_field<SCAPIX_META_STRING("TAG_COPYRIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_CUSTOM_RENDERED_() { return get_static_field<SCAPIX_META_STRING("TAG_CUSTOM_RENDERED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DATETIME_() { return get_static_field<SCAPIX_META_STRING("TAG_DATETIME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DATETIME_DIGITIZED_() { return get_static_field<SCAPIX_META_STRING("TAG_DATETIME_DIGITIZED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DATETIME_ORIGINAL_() { return get_static_field<SCAPIX_META_STRING("TAG_DATETIME_ORIGINAL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DEFAULT_CROP_SIZE_() { return get_static_field<SCAPIX_META_STRING("TAG_DEFAULT_CROP_SIZE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DEVICE_SETTING_DESCRIPTION_() { return get_static_field<SCAPIX_META_STRING("TAG_DEVICE_SETTING_DESCRIPTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DIGITAL_ZOOM_RATIO_() { return get_static_field<SCAPIX_META_STRING("TAG_DIGITAL_ZOOM_RATIO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_DNG_VERSION_() { return get_static_field<SCAPIX_META_STRING("TAG_DNG_VERSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_EXIF_VERSION_() { return get_static_field<SCAPIX_META_STRING("TAG_EXIF_VERSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_EXPOSURE_BIAS_VALUE_() { return get_static_field<SCAPIX_META_STRING("TAG_EXPOSURE_BIAS_VALUE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_EXPOSURE_INDEX_() { return get_static_field<SCAPIX_META_STRING("TAG_EXPOSURE_INDEX"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_EXPOSURE_MODE_() { return get_static_field<SCAPIX_META_STRING("TAG_EXPOSURE_MODE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_EXPOSURE_PROGRAM_() { return get_static_field<SCAPIX_META_STRING("TAG_EXPOSURE_PROGRAM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_EXPOSURE_TIME_() { return get_static_field<SCAPIX_META_STRING("TAG_EXPOSURE_TIME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FILE_SOURCE_() { return get_static_field<SCAPIX_META_STRING("TAG_FILE_SOURCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FLASH_() { return get_static_field<SCAPIX_META_STRING("TAG_FLASH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FLASHPIX_VERSION_() { return get_static_field<SCAPIX_META_STRING("TAG_FLASHPIX_VERSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FLASH_ENERGY_() { return get_static_field<SCAPIX_META_STRING("TAG_FLASH_ENERGY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FOCAL_LENGTH_() { return get_static_field<SCAPIX_META_STRING("TAG_FOCAL_LENGTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FOCAL_LENGTH_IN_35MM_FILM_() { return get_static_field<SCAPIX_META_STRING("TAG_FOCAL_LENGTH_IN_35MM_FILM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FOCAL_PLANE_RESOLUTION_UNIT_() { return get_static_field<SCAPIX_META_STRING("TAG_FOCAL_PLANE_RESOLUTION_UNIT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FOCAL_PLANE_X_RESOLUTION_() { return get_static_field<SCAPIX_META_STRING("TAG_FOCAL_PLANE_X_RESOLUTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_FOCAL_PLANE_Y_RESOLUTION_() { return get_static_field<SCAPIX_META_STRING("TAG_FOCAL_PLANE_Y_RESOLUTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_F_NUMBER_() { return get_static_field<SCAPIX_META_STRING("TAG_F_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GAIN_CONTROL_() { return get_static_field<SCAPIX_META_STRING("TAG_GAIN_CONTROL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_ALTITUDE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_ALTITUDE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_ALTITUDE_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_ALTITUDE_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_AREA_INFORMATION_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_AREA_INFORMATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DATESTAMP_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DATESTAMP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_BEARING_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_BEARING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_BEARING_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_BEARING_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_DISTANCE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_DISTANCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_DISTANCE_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_DISTANCE_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_LATITUDE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_LATITUDE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_LATITUDE_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_LATITUDE_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_LONGITUDE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_LONGITUDE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DEST_LONGITUDE_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DEST_LONGITUDE_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DIFFERENTIAL_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DIFFERENTIAL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_DOP_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_DOP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_IMG_DIRECTION_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_IMG_DIRECTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_IMG_DIRECTION_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_IMG_DIRECTION_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_LATITUDE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_LATITUDE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_LATITUDE_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_LATITUDE_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_LONGITUDE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_LONGITUDE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_LONGITUDE_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_LONGITUDE_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_MAP_DATUM_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_MAP_DATUM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_MEASURE_MODE_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_MEASURE_MODE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_PROCESSING_METHOD_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_PROCESSING_METHOD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_SATELLITES_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_SATELLITES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_SPEED_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_SPEED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_SPEED_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_SPEED_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_STATUS_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_STATUS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_TIMESTAMP_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_TIMESTAMP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_TRACK_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_TRACK"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_TRACK_REF_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_TRACK_REF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_GPS_VERSION_ID_() { return get_static_field<SCAPIX_META_STRING("TAG_GPS_VERSION_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_IMAGE_DESCRIPTION_() { return get_static_field<SCAPIX_META_STRING("TAG_IMAGE_DESCRIPTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_IMAGE_LENGTH_() { return get_static_field<SCAPIX_META_STRING("TAG_IMAGE_LENGTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_IMAGE_UNIQUE_ID_() { return get_static_field<SCAPIX_META_STRING("TAG_IMAGE_UNIQUE_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_IMAGE_WIDTH_() { return get_static_field<SCAPIX_META_STRING("TAG_IMAGE_WIDTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_INTEROPERABILITY_INDEX_() { return get_static_field<SCAPIX_META_STRING("TAG_INTEROPERABILITY_INDEX"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ISO_() { return get_static_field<SCAPIX_META_STRING("TAG_ISO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ISO_SPEED_RATINGS_() { return get_static_field<SCAPIX_META_STRING("TAG_ISO_SPEED_RATINGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_JPEG_INTERCHANGE_FORMAT_() { return get_static_field<SCAPIX_META_STRING("TAG_JPEG_INTERCHANGE_FORMAT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH_() { return get_static_field<SCAPIX_META_STRING("TAG_JPEG_INTERCHANGE_FORMAT_LENGTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_LIGHT_SOURCE_() { return get_static_field<SCAPIX_META_STRING("TAG_LIGHT_SOURCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_MAKE_() { return get_static_field<SCAPIX_META_STRING("TAG_MAKE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_MAKER_NOTE_() { return get_static_field<SCAPIX_META_STRING("TAG_MAKER_NOTE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_MAX_APERTURE_VALUE_() { return get_static_field<SCAPIX_META_STRING("TAG_MAX_APERTURE_VALUE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_METERING_MODE_() { return get_static_field<SCAPIX_META_STRING("TAG_METERING_MODE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_MODEL_() { return get_static_field<SCAPIX_META_STRING("TAG_MODEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_NEW_SUBFILE_TYPE_() { return get_static_field<SCAPIX_META_STRING("TAG_NEW_SUBFILE_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_OECF_() { return get_static_field<SCAPIX_META_STRING("TAG_OECF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ORF_ASPECT_FRAME_() { return get_static_field<SCAPIX_META_STRING("TAG_ORF_ASPECT_FRAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ORF_PREVIEW_IMAGE_LENGTH_() { return get_static_field<SCAPIX_META_STRING("TAG_ORF_PREVIEW_IMAGE_LENGTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ORF_PREVIEW_IMAGE_START_() { return get_static_field<SCAPIX_META_STRING("TAG_ORF_PREVIEW_IMAGE_START"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ORF_THUMBNAIL_IMAGE_() { return get_static_field<SCAPIX_META_STRING("TAG_ORF_THUMBNAIL_IMAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ORIENTATION_() { return get_static_field<SCAPIX_META_STRING("TAG_ORIENTATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_PHOTOMETRIC_INTERPRETATION_() { return get_static_field<SCAPIX_META_STRING("TAG_PHOTOMETRIC_INTERPRETATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_PIXEL_X_DIMENSION_() { return get_static_field<SCAPIX_META_STRING("TAG_PIXEL_X_DIMENSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_PIXEL_Y_DIMENSION_() { return get_static_field<SCAPIX_META_STRING("TAG_PIXEL_Y_DIMENSION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_PLANAR_CONFIGURATION_() { return get_static_field<SCAPIX_META_STRING("TAG_PLANAR_CONFIGURATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_PRIMARY_CHROMATICITIES_() { return get_static_field<SCAPIX_META_STRING("TAG_PRIMARY_CHROMATICITIES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_REFERENCE_BLACK_WHITE_() { return get_static_field<SCAPIX_META_STRING("TAG_REFERENCE_BLACK_WHITE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RELATED_SOUND_FILE_() { return get_static_field<SCAPIX_META_STRING("TAG_RELATED_SOUND_FILE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RESOLUTION_UNIT_() { return get_static_field<SCAPIX_META_STRING("TAG_RESOLUTION_UNIT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_ROWS_PER_STRIP_() { return get_static_field<SCAPIX_META_STRING("TAG_ROWS_PER_STRIP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RW2_ISO_() { return get_static_field<SCAPIX_META_STRING("TAG_RW2_ISO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RW2_JPG_FROM_RAW_() { return get_static_field<SCAPIX_META_STRING("TAG_RW2_JPG_FROM_RAW"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RW2_SENSOR_BOTTOM_BORDER_() { return get_static_field<SCAPIX_META_STRING("TAG_RW2_SENSOR_BOTTOM_BORDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RW2_SENSOR_LEFT_BORDER_() { return get_static_field<SCAPIX_META_STRING("TAG_RW2_SENSOR_LEFT_BORDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RW2_SENSOR_RIGHT_BORDER_() { return get_static_field<SCAPIX_META_STRING("TAG_RW2_SENSOR_RIGHT_BORDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_RW2_SENSOR_TOP_BORDER_() { return get_static_field<SCAPIX_META_STRING("TAG_RW2_SENSOR_TOP_BORDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SAMPLES_PER_PIXEL_() { return get_static_field<SCAPIX_META_STRING("TAG_SAMPLES_PER_PIXEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SATURATION_() { return get_static_field<SCAPIX_META_STRING("TAG_SATURATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SCENE_CAPTURE_TYPE_() { return get_static_field<SCAPIX_META_STRING("TAG_SCENE_CAPTURE_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SCENE_TYPE_() { return get_static_field<SCAPIX_META_STRING("TAG_SCENE_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SENSING_METHOD_() { return get_static_field<SCAPIX_META_STRING("TAG_SENSING_METHOD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SHARPNESS_() { return get_static_field<SCAPIX_META_STRING("TAG_SHARPNESS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SHUTTER_SPEED_VALUE_() { return get_static_field<SCAPIX_META_STRING("TAG_SHUTTER_SPEED_VALUE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SOFTWARE_() { return get_static_field<SCAPIX_META_STRING("TAG_SOFTWARE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SPATIAL_FREQUENCY_RESPONSE_() { return get_static_field<SCAPIX_META_STRING("TAG_SPATIAL_FREQUENCY_RESPONSE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SPECTRAL_SENSITIVITY_() { return get_static_field<SCAPIX_META_STRING("TAG_SPECTRAL_SENSITIVITY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_STRIP_BYTE_COUNTS_() { return get_static_field<SCAPIX_META_STRING("TAG_STRIP_BYTE_COUNTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_STRIP_OFFSETS_() { return get_static_field<SCAPIX_META_STRING("TAG_STRIP_OFFSETS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBFILE_TYPE_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBFILE_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBJECT_AREA_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBJECT_AREA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBJECT_DISTANCE_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBJECT_DISTANCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBJECT_DISTANCE_RANGE_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBJECT_DISTANCE_RANGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBJECT_LOCATION_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBJECT_LOCATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBSEC_TIME_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBSEC_TIME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBSEC_TIME_DIG_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBSEC_TIME_DIG"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBSEC_TIME_DIGITIZED_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBSEC_TIME_DIGITIZED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBSEC_TIME_ORIG_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBSEC_TIME_ORIG"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_SUBSEC_TIME_ORIGINAL_() { return get_static_field<SCAPIX_META_STRING("TAG_SUBSEC_TIME_ORIGINAL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_THUMBNAIL_IMAGE_LENGTH_() { return get_static_field<SCAPIX_META_STRING("TAG_THUMBNAIL_IMAGE_LENGTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_THUMBNAIL_IMAGE_WIDTH_() { return get_static_field<SCAPIX_META_STRING("TAG_THUMBNAIL_IMAGE_WIDTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_TRANSFER_FUNCTION_() { return get_static_field<SCAPIX_META_STRING("TAG_TRANSFER_FUNCTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_USER_COMMENT_() { return get_static_field<SCAPIX_META_STRING("TAG_USER_COMMENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_WHITE_BALANCE_() { return get_static_field<SCAPIX_META_STRING("TAG_WHITE_BALANCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_WHITE_POINT_() { return get_static_field<SCAPIX_META_STRING("TAG_WHITE_POINT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_X_RESOLUTION_() { return get_static_field<SCAPIX_META_STRING("TAG_X_RESOLUTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_Y_CB_CR_COEFFICIENTS_() { return get_static_field<SCAPIX_META_STRING("TAG_Y_CB_CR_COEFFICIENTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_Y_CB_CR_POSITIONING_() { return get_static_field<SCAPIX_META_STRING("TAG_Y_CB_CR_POSITIONING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_Y_CB_CR_SUB_SAMPLING_() { return get_static_field<SCAPIX_META_STRING("TAG_Y_CB_CR_SUB_SAMPLING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ExifInterface::TAG_Y_RESOLUTION_() { return get_static_field<SCAPIX_META_STRING("TAG_Y_RESOLUTION"), ref<java::lang::String>>(); }
inline jint ExifInterface::WHITEBALANCE_AUTO_() { return get_static_field<SCAPIX_META_STRING("WHITEBALANCE_AUTO"), jint>(); }
inline jint ExifInterface::WHITEBALANCE_MANUAL_() { return get_static_field<SCAPIX_META_STRING("WHITEBALANCE_MANUAL"), jint>(); }
inline ref<ExifInterface> ExifInterface::new_object(ref<java::lang::String> filename) { return base_::new_object(filename); }
inline ref<ExifInterface> ExifInterface::new_object(ref<java::io::FileDescriptor> fileDescriptor) { return base_::new_object(fileDescriptor); }
inline ref<ExifInterface> ExifInterface::new_object(ref<java::io::InputStream> inputStream) { return base_::new_object(inputStream); }
inline ref<java::lang::String> ExifInterface::getAttribute(ref<java::lang::String> tag) { return call_method<SCAPIX_META_STRING("getAttribute"), ref<java::lang::String>>(tag); }
inline jint ExifInterface::getAttributeInt(ref<java::lang::String> tag, jint defaultValue) { return call_method<SCAPIX_META_STRING("getAttributeInt"), jint>(tag, defaultValue); }
inline jdouble ExifInterface::getAttributeDouble(ref<java::lang::String> tag, jdouble defaultValue) { return call_method<SCAPIX_META_STRING("getAttributeDouble"), jdouble>(tag, defaultValue); }
inline void ExifInterface::setAttribute(ref<java::lang::String> tag, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setAttribute"), void>(tag, value); }
inline void ExifInterface::saveAttributes() { return call_method<SCAPIX_META_STRING("saveAttributes"), void>(); }
inline jboolean ExifInterface::hasThumbnail() { return call_method<SCAPIX_META_STRING("hasThumbnail"), jboolean>(); }
inline ref<link::java::array<jbyte>> ExifInterface::getThumbnail() { return call_method<SCAPIX_META_STRING("getThumbnail"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> ExifInterface::getThumbnailBytes() { return call_method<SCAPIX_META_STRING("getThumbnailBytes"), ref<link::java::array<jbyte>>>(); }
inline ref<android::graphics::Bitmap> ExifInterface::getThumbnailBitmap() { return call_method<SCAPIX_META_STRING("getThumbnailBitmap"), ref<android::graphics::Bitmap>>(); }
inline jboolean ExifInterface::isThumbnailCompressed() { return call_method<SCAPIX_META_STRING("isThumbnailCompressed"), jboolean>(); }
inline ref<link::java::array<jlong>> ExifInterface::getThumbnailRange() { return call_method<SCAPIX_META_STRING("getThumbnailRange"), ref<link::java::array<jlong>>>(); }
inline jboolean ExifInterface::getLatLong(ref<link::java::array<jfloat>> output) { return call_method<SCAPIX_META_STRING("getLatLong"), jboolean>(output); }
inline jdouble ExifInterface::getAltitude(jdouble defaultValue) { return call_method<SCAPIX_META_STRING("getAltitude"), jdouble>(defaultValue); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_EXIFINTERFACE_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/tv/TvContract_BaseTvColumns.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_H
#define SCAPIX_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }
namespace android::media::tv { class TvContract_Channels_Logo; }

namespace android::media::tv {

class TvContract_Channels : public object_base<SCAPIX_META_STRING("android/media/tv/TvContract$Channels"),
	java::lang::Object,
	android::media::tv::TvContract_BaseTvColumns>
{
public:

	using Logo = TvContract_Channels_Logo;

	static ref<java::lang::String> COLUMN_APP_LINK_COLOR_();
	static ref<java::lang::String> COLUMN_APP_LINK_ICON_URI_();
	static ref<java::lang::String> COLUMN_APP_LINK_INTENT_URI_();
	static ref<java::lang::String> COLUMN_APP_LINK_POSTER_ART_URI_();
	static ref<java::lang::String> COLUMN_APP_LINK_TEXT_();
	static ref<java::lang::String> COLUMN_BROWSABLE_();
	static ref<java::lang::String> COLUMN_DESCRIPTION_();
	static ref<java::lang::String> COLUMN_DISPLAY_NAME_();
	static ref<java::lang::String> COLUMN_DISPLAY_NUMBER_();
	static ref<java::lang::String> COLUMN_INPUT_ID_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_DATA_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG1_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG2_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG3_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_FLAG4_();
	static ref<java::lang::String> COLUMN_INTERNAL_PROVIDER_ID_();
	static ref<java::lang::String> COLUMN_LOCKED_();
	static ref<java::lang::String> COLUMN_NETWORK_AFFILIATION_();
	static ref<java::lang::String> COLUMN_ORIGINAL_NETWORK_ID_();
	static ref<java::lang::String> COLUMN_SEARCHABLE_();
	static ref<java::lang::String> COLUMN_SERVICE_ID_();
	static ref<java::lang::String> COLUMN_SERVICE_TYPE_();
	static ref<java::lang::String> COLUMN_TRANSIENT_();
	static ref<java::lang::String> COLUMN_TRANSPORT_STREAM_ID_();
	static ref<java::lang::String> COLUMN_TYPE_();
	static ref<java::lang::String> COLUMN_VERSION_NUMBER_();
	static ref<java::lang::String> COLUMN_VIDEO_FORMAT_();
	static ref<java::lang::String> CONTENT_ITEM_TYPE_();
	static ref<java::lang::String> CONTENT_TYPE_();
	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> SERVICE_TYPE_AUDIO_();
	static ref<java::lang::String> SERVICE_TYPE_AUDIO_VIDEO_();
	static ref<java::lang::String> SERVICE_TYPE_OTHER_();
	static ref<java::lang::String> TYPE_1SEG_();
	static ref<java::lang::String> TYPE_ATSC_C_();
	static ref<java::lang::String> TYPE_ATSC_M_H_();
	static ref<java::lang::String> TYPE_ATSC_T_();
	static ref<java::lang::String> TYPE_CMMB_();
	static ref<java::lang::String> TYPE_DTMB_();
	static ref<java::lang::String> TYPE_DVB_C_();
	static ref<java::lang::String> TYPE_DVB_C2_();
	static ref<java::lang::String> TYPE_DVB_H_();
	static ref<java::lang::String> TYPE_DVB_S_();
	static ref<java::lang::String> TYPE_DVB_S2_();
	static ref<java::lang::String> TYPE_DVB_SH_();
	static ref<java::lang::String> TYPE_DVB_T_();
	static ref<java::lang::String> TYPE_DVB_T2_();
	static ref<java::lang::String> TYPE_ISDB_C_();
	static ref<java::lang::String> TYPE_ISDB_S_();
	static ref<java::lang::String> TYPE_ISDB_T_();
	static ref<java::lang::String> TYPE_ISDB_TB_();
	static ref<java::lang::String> TYPE_NTSC_();
	static ref<java::lang::String> TYPE_OTHER_();
	static ref<java::lang::String> TYPE_PAL_();
	static ref<java::lang::String> TYPE_PREVIEW_();
	static ref<java::lang::String> TYPE_SECAM_();
	static ref<java::lang::String> TYPE_S_DMB_();
	static ref<java::lang::String> TYPE_T_DMB_();
	static ref<java::lang::String> VIDEO_FORMAT_1080I_();
	static ref<java::lang::String> VIDEO_FORMAT_1080P_();
	static ref<java::lang::String> VIDEO_FORMAT_2160P_();
	static ref<java::lang::String> VIDEO_FORMAT_240P_();
	static ref<java::lang::String> VIDEO_FORMAT_360P_();
	static ref<java::lang::String> VIDEO_FORMAT_4320P_();
	static ref<java::lang::String> VIDEO_FORMAT_480I_();
	static ref<java::lang::String> VIDEO_FORMAT_480P_();
	static ref<java::lang::String> VIDEO_FORMAT_576I_();
	static ref<java::lang::String> VIDEO_FORMAT_576P_();
	static ref<java::lang::String> VIDEO_FORMAT_720P_();
	static ref<java::lang::String> VIDEO_RESOLUTION_ED_();
	static ref<java::lang::String> VIDEO_RESOLUTION_FHD_();
	static ref<java::lang::String> VIDEO_RESOLUTION_HD_();
	static ref<java::lang::String> VIDEO_RESOLUTION_SD_();
	static ref<java::lang::String> VIDEO_RESOLUTION_UHD_();

	static ref<java::lang::String> getVideoResolution(ref<java::lang::String> videoFormat);

protected:

	TvContract_Channels(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<java::lang::String> TvContract_Channels::COLUMN_APP_LINK_COLOR_() { return get_static_field<SCAPIX_META_STRING("COLUMN_APP_LINK_COLOR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_APP_LINK_ICON_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_APP_LINK_ICON_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_APP_LINK_INTENT_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_APP_LINK_INTENT_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_APP_LINK_POSTER_ART_URI_() { return get_static_field<SCAPIX_META_STRING("COLUMN_APP_LINK_POSTER_ART_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_APP_LINK_TEXT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_APP_LINK_TEXT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_BROWSABLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_BROWSABLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_DESCRIPTION_() { return get_static_field<SCAPIX_META_STRING("COLUMN_DESCRIPTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_DISPLAY_NAME_() { return get_static_field<SCAPIX_META_STRING("COLUMN_DISPLAY_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_DISPLAY_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_DISPLAY_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INPUT_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INPUT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INTERNAL_PROVIDER_DATA_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG1_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG1"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG2_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG3_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG3"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG4_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_FLAG4"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_INTERNAL_PROVIDER_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_INTERNAL_PROVIDER_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_LOCKED_() { return get_static_field<SCAPIX_META_STRING("COLUMN_LOCKED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_NETWORK_AFFILIATION_() { return get_static_field<SCAPIX_META_STRING("COLUMN_NETWORK_AFFILIATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_ORIGINAL_NETWORK_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_ORIGINAL_NETWORK_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_SEARCHABLE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SEARCHABLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_SERVICE_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SERVICE_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_SERVICE_TYPE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_SERVICE_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_TRANSIENT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_TRANSIENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_TRANSPORT_STREAM_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_TRANSPORT_STREAM_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_TYPE_() { return get_static_field<SCAPIX_META_STRING("COLUMN_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_VERSION_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_VERSION_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::COLUMN_VIDEO_FORMAT_() { return get_static_field<SCAPIX_META_STRING("COLUMN_VIDEO_FORMAT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::CONTENT_ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> TvContract_Channels::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> TvContract_Channels::SERVICE_TYPE_AUDIO_() { return get_static_field<SCAPIX_META_STRING("SERVICE_TYPE_AUDIO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::SERVICE_TYPE_AUDIO_VIDEO_() { return get_static_field<SCAPIX_META_STRING("SERVICE_TYPE_AUDIO_VIDEO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::SERVICE_TYPE_OTHER_() { return get_static_field<SCAPIX_META_STRING("SERVICE_TYPE_OTHER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_1SEG_() { return get_static_field<SCAPIX_META_STRING("TYPE_1SEG"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ATSC_C_() { return get_static_field<SCAPIX_META_STRING("TYPE_ATSC_C"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ATSC_M_H_() { return get_static_field<SCAPIX_META_STRING("TYPE_ATSC_M_H"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ATSC_T_() { return get_static_field<SCAPIX_META_STRING("TYPE_ATSC_T"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_CMMB_() { return get_static_field<SCAPIX_META_STRING("TYPE_CMMB"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DTMB_() { return get_static_field<SCAPIX_META_STRING("TYPE_DTMB"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_C_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_C"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_C2_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_C2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_H_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_H"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_S_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_S"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_S2_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_S2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_SH_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_SH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_T_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_T"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_DVB_T2_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVB_T2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ISDB_C_() { return get_static_field<SCAPIX_META_STRING("TYPE_ISDB_C"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ISDB_S_() { return get_static_field<SCAPIX_META_STRING("TYPE_ISDB_S"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ISDB_T_() { return get_static_field<SCAPIX_META_STRING("TYPE_ISDB_T"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_ISDB_TB_() { return get_static_field<SCAPIX_META_STRING("TYPE_ISDB_TB"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_NTSC_() { return get_static_field<SCAPIX_META_STRING("TYPE_NTSC"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_OTHER_() { return get_static_field<SCAPIX_META_STRING("TYPE_OTHER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_PAL_() { return get_static_field<SCAPIX_META_STRING("TYPE_PAL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_PREVIEW_() { return get_static_field<SCAPIX_META_STRING("TYPE_PREVIEW"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_SECAM_() { return get_static_field<SCAPIX_META_STRING("TYPE_SECAM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_S_DMB_() { return get_static_field<SCAPIX_META_STRING("TYPE_S_DMB"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::TYPE_T_DMB_() { return get_static_field<SCAPIX_META_STRING("TYPE_T_DMB"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_1080I_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_1080I"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_1080P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_1080P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_2160P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_2160P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_240P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_240P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_360P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_360P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_4320P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_4320P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_480I_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_480I"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_480P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_480P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_576I_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_576I"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_576P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_576P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_FORMAT_720P_() { return get_static_field<SCAPIX_META_STRING("VIDEO_FORMAT_720P"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_RESOLUTION_ED_() { return get_static_field<SCAPIX_META_STRING("VIDEO_RESOLUTION_ED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_RESOLUTION_FHD_() { return get_static_field<SCAPIX_META_STRING("VIDEO_RESOLUTION_FHD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_RESOLUTION_HD_() { return get_static_field<SCAPIX_META_STRING("VIDEO_RESOLUTION_HD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_RESOLUTION_SD_() { return get_static_field<SCAPIX_META_STRING("VIDEO_RESOLUTION_SD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::VIDEO_RESOLUTION_UHD_() { return get_static_field<SCAPIX_META_STRING("VIDEO_RESOLUTION_UHD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvContract_Channels::getVideoResolution(ref<java::lang::String> videoFormat) { return call_static_method<SCAPIX_META_STRING("getVideoResolution"), ref<java::lang::String>>(videoFormat); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_H
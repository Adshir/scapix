// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WEBKIT_WEBVIEWCLIENT_H
#define SCAPIX_ANDROID_WEBKIT_WEBVIEWCLIENT_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::net::http { class SslError; }
namespace android::os { class Message; }
namespace android::view { class KeyEvent; }
namespace android::webkit { class ClientCertRequest; }
namespace android::webkit { class HttpAuthHandler; }
namespace android::webkit { class RenderProcessGoneDetail; }
namespace android::webkit { class SafeBrowsingResponse; }
namespace android::webkit { class SslErrorHandler; }
namespace android::webkit { class WebResourceError; }
namespace android::webkit { class WebResourceRequest; }
namespace android::webkit { class WebResourceResponse; }
namespace android::webkit { class WebView; }
namespace java::lang { class String; }

namespace android::webkit {

class WebViewClient : public object_base<SCAPIX_META_STRING("android/webkit/WebViewClient"),
	java::lang::Object>
{
public:

	static jint ERROR_AUTHENTICATION_();
	static jint ERROR_BAD_URL_();
	static jint ERROR_CONNECT_();
	static jint ERROR_FAILED_SSL_HANDSHAKE_();
	static jint ERROR_FILE_();
	static jint ERROR_FILE_NOT_FOUND_();
	static jint ERROR_HOST_LOOKUP_();
	static jint ERROR_IO_();
	static jint ERROR_PROXY_AUTHENTICATION_();
	static jint ERROR_REDIRECT_LOOP_();
	static jint ERROR_TIMEOUT_();
	static jint ERROR_TOO_MANY_REQUESTS_();
	static jint ERROR_UNKNOWN_();
	static jint ERROR_UNSAFE_RESOURCE_();
	static jint ERROR_UNSUPPORTED_AUTH_SCHEME_();
	static jint ERROR_UNSUPPORTED_SCHEME_();
	static jint SAFE_BROWSING_THREAT_MALWARE_();
	static jint SAFE_BROWSING_THREAT_PHISHING_();
	static jint SAFE_BROWSING_THREAT_UNKNOWN_();
	static jint SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE_();

	static ref<WebViewClient> new_object();
	jboolean shouldOverrideUrlLoading(ref<android::webkit::WebView> view, ref<java::lang::String> url);
	jboolean shouldOverrideUrlLoading(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request);
	void onPageStarted(ref<android::webkit::WebView> view, ref<java::lang::String> url, ref<android::graphics::Bitmap> favicon);
	void onPageFinished(ref<android::webkit::WebView> view, ref<java::lang::String> url);
	void onLoadResource(ref<android::webkit::WebView> view, ref<java::lang::String> url);
	void onPageCommitVisible(ref<android::webkit::WebView> view, ref<java::lang::String> url);
	ref<android::webkit::WebResourceResponse> shouldInterceptRequest(ref<android::webkit::WebView> view, ref<java::lang::String> url);
	ref<android::webkit::WebResourceResponse> shouldInterceptRequest(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request);
	void onTooManyRedirects(ref<android::webkit::WebView> view, ref<android::os::Message> cancelMsg, ref<android::os::Message> continueMsg);
	void onReceivedError(ref<android::webkit::WebView> view, jint errorCode, ref<java::lang::String> description, ref<java::lang::String> failingUrl);
	void onReceivedError(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request, ref<android::webkit::WebResourceError> error);
	void onReceivedHttpError(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request, ref<android::webkit::WebResourceResponse> errorResponse);
	void onFormResubmission(ref<android::webkit::WebView> view, ref<android::os::Message> dontResend, ref<android::os::Message> resend);
	void doUpdateVisitedHistory(ref<android::webkit::WebView> view, ref<java::lang::String> url, jboolean isReload);
	void onReceivedSslError(ref<android::webkit::WebView> view, ref<android::webkit::SslErrorHandler> handler, ref<android::net::http::SslError> error);
	void onReceivedClientCertRequest(ref<android::webkit::WebView> view, ref<android::webkit::ClientCertRequest> request);
	void onReceivedHttpAuthRequest(ref<android::webkit::WebView> view, ref<android::webkit::HttpAuthHandler> handler, ref<java::lang::String> host, ref<java::lang::String> realm);
	jboolean shouldOverrideKeyEvent(ref<android::webkit::WebView> view, ref<android::view::KeyEvent> event);
	void onUnhandledKeyEvent(ref<android::webkit::WebView> view, ref<android::view::KeyEvent> event);
	void onScaleChanged(ref<android::webkit::WebView> view, jfloat oldScale, jfloat newScale);
	void onReceivedLoginRequest(ref<android::webkit::WebView> view, ref<java::lang::String> realm, ref<java::lang::String> account, ref<java::lang::String> args);
	jboolean onRenderProcessGone(ref<android::webkit::WebView> view, ref<android::webkit::RenderProcessGoneDetail> detail);
	void onSafeBrowsingHit(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request, jint threatType, ref<android::webkit::SafeBrowsingResponse> callback);

protected:

	WebViewClient(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/net/http/SslError.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/webkit/ClientCertRequest.h>
#include <scapix/java_api/android/webkit/HttpAuthHandler.h>
#include <scapix/java_api/android/webkit/RenderProcessGoneDetail.h>
#include <scapix/java_api/android/webkit/SafeBrowsingResponse.h>
#include <scapix/java_api/android/webkit/SslErrorHandler.h>
#include <scapix/java_api/android/webkit/WebResourceError.h>
#include <scapix/java_api/android/webkit/WebResourceRequest.h>
#include <scapix/java_api/android/webkit/WebResourceResponse.h>
#include <scapix/java_api/android/webkit/WebView.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::webkit {

inline jint WebViewClient::ERROR_AUTHENTICATION_() { return get_static_field<SCAPIX_META_STRING("ERROR_AUTHENTICATION"), jint>(); }
inline jint WebViewClient::ERROR_BAD_URL_() { return get_static_field<SCAPIX_META_STRING("ERROR_BAD_URL"), jint>(); }
inline jint WebViewClient::ERROR_CONNECT_() { return get_static_field<SCAPIX_META_STRING("ERROR_CONNECT"), jint>(); }
inline jint WebViewClient::ERROR_FAILED_SSL_HANDSHAKE_() { return get_static_field<SCAPIX_META_STRING("ERROR_FAILED_SSL_HANDSHAKE"), jint>(); }
inline jint WebViewClient::ERROR_FILE_() { return get_static_field<SCAPIX_META_STRING("ERROR_FILE"), jint>(); }
inline jint WebViewClient::ERROR_FILE_NOT_FOUND_() { return get_static_field<SCAPIX_META_STRING("ERROR_FILE_NOT_FOUND"), jint>(); }
inline jint WebViewClient::ERROR_HOST_LOOKUP_() { return get_static_field<SCAPIX_META_STRING("ERROR_HOST_LOOKUP"), jint>(); }
inline jint WebViewClient::ERROR_IO_() { return get_static_field<SCAPIX_META_STRING("ERROR_IO"), jint>(); }
inline jint WebViewClient::ERROR_PROXY_AUTHENTICATION_() { return get_static_field<SCAPIX_META_STRING("ERROR_PROXY_AUTHENTICATION"), jint>(); }
inline jint WebViewClient::ERROR_REDIRECT_LOOP_() { return get_static_field<SCAPIX_META_STRING("ERROR_REDIRECT_LOOP"), jint>(); }
inline jint WebViewClient::ERROR_TIMEOUT_() { return get_static_field<SCAPIX_META_STRING("ERROR_TIMEOUT"), jint>(); }
inline jint WebViewClient::ERROR_TOO_MANY_REQUESTS_() { return get_static_field<SCAPIX_META_STRING("ERROR_TOO_MANY_REQUESTS"), jint>(); }
inline jint WebViewClient::ERROR_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("ERROR_UNKNOWN"), jint>(); }
inline jint WebViewClient::ERROR_UNSAFE_RESOURCE_() { return get_static_field<SCAPIX_META_STRING("ERROR_UNSAFE_RESOURCE"), jint>(); }
inline jint WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME_() { return get_static_field<SCAPIX_META_STRING("ERROR_UNSUPPORTED_AUTH_SCHEME"), jint>(); }
inline jint WebViewClient::ERROR_UNSUPPORTED_SCHEME_() { return get_static_field<SCAPIX_META_STRING("ERROR_UNSUPPORTED_SCHEME"), jint>(); }
inline jint WebViewClient::SAFE_BROWSING_THREAT_MALWARE_() { return get_static_field<SCAPIX_META_STRING("SAFE_BROWSING_THREAT_MALWARE"), jint>(); }
inline jint WebViewClient::SAFE_BROWSING_THREAT_PHISHING_() { return get_static_field<SCAPIX_META_STRING("SAFE_BROWSING_THREAT_PHISHING"), jint>(); }
inline jint WebViewClient::SAFE_BROWSING_THREAT_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("SAFE_BROWSING_THREAT_UNKNOWN"), jint>(); }
inline jint WebViewClient::SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE_() { return get_static_field<SCAPIX_META_STRING("SAFE_BROWSING_THREAT_UNWANTED_SOFTWARE"), jint>(); }
inline ref<WebViewClient> WebViewClient::new_object() { return base_::new_object(); }
inline jboolean WebViewClient::shouldOverrideUrlLoading(ref<android::webkit::WebView> view, ref<java::lang::String> url) { return call_method<SCAPIX_META_STRING("shouldOverrideUrlLoading"), jboolean>(view, url); }
inline jboolean WebViewClient::shouldOverrideUrlLoading(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request) { return call_method<SCAPIX_META_STRING("shouldOverrideUrlLoading"), jboolean>(view, request); }
inline void WebViewClient::onPageStarted(ref<android::webkit::WebView> view, ref<java::lang::String> url, ref<android::graphics::Bitmap> favicon) { return call_method<SCAPIX_META_STRING("onPageStarted"), void>(view, url, favicon); }
inline void WebViewClient::onPageFinished(ref<android::webkit::WebView> view, ref<java::lang::String> url) { return call_method<SCAPIX_META_STRING("onPageFinished"), void>(view, url); }
inline void WebViewClient::onLoadResource(ref<android::webkit::WebView> view, ref<java::lang::String> url) { return call_method<SCAPIX_META_STRING("onLoadResource"), void>(view, url); }
inline void WebViewClient::onPageCommitVisible(ref<android::webkit::WebView> view, ref<java::lang::String> url) { return call_method<SCAPIX_META_STRING("onPageCommitVisible"), void>(view, url); }
inline ref<android::webkit::WebResourceResponse> WebViewClient::shouldInterceptRequest(ref<android::webkit::WebView> view, ref<java::lang::String> url) { return call_method<SCAPIX_META_STRING("shouldInterceptRequest"), ref<android::webkit::WebResourceResponse>>(view, url); }
inline ref<android::webkit::WebResourceResponse> WebViewClient::shouldInterceptRequest(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request) { return call_method<SCAPIX_META_STRING("shouldInterceptRequest"), ref<android::webkit::WebResourceResponse>>(view, request); }
inline void WebViewClient::onTooManyRedirects(ref<android::webkit::WebView> view, ref<android::os::Message> cancelMsg, ref<android::os::Message> continueMsg) { return call_method<SCAPIX_META_STRING("onTooManyRedirects"), void>(view, cancelMsg, continueMsg); }
inline void WebViewClient::onReceivedError(ref<android::webkit::WebView> view, jint errorCode, ref<java::lang::String> description, ref<java::lang::String> failingUrl) { return call_method<SCAPIX_META_STRING("onReceivedError"), void>(view, errorCode, description, failingUrl); }
inline void WebViewClient::onReceivedError(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request, ref<android::webkit::WebResourceError> error) { return call_method<SCAPIX_META_STRING("onReceivedError"), void>(view, request, error); }
inline void WebViewClient::onReceivedHttpError(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request, ref<android::webkit::WebResourceResponse> errorResponse) { return call_method<SCAPIX_META_STRING("onReceivedHttpError"), void>(view, request, errorResponse); }
inline void WebViewClient::onFormResubmission(ref<android::webkit::WebView> view, ref<android::os::Message> dontResend, ref<android::os::Message> resend) { return call_method<SCAPIX_META_STRING("onFormResubmission"), void>(view, dontResend, resend); }
inline void WebViewClient::doUpdateVisitedHistory(ref<android::webkit::WebView> view, ref<java::lang::String> url, jboolean isReload) { return call_method<SCAPIX_META_STRING("doUpdateVisitedHistory"), void>(view, url, isReload); }
inline void WebViewClient::onReceivedSslError(ref<android::webkit::WebView> view, ref<android::webkit::SslErrorHandler> handler, ref<android::net::http::SslError> error) { return call_method<SCAPIX_META_STRING("onReceivedSslError"), void>(view, handler, error); }
inline void WebViewClient::onReceivedClientCertRequest(ref<android::webkit::WebView> view, ref<android::webkit::ClientCertRequest> request) { return call_method<SCAPIX_META_STRING("onReceivedClientCertRequest"), void>(view, request); }
inline void WebViewClient::onReceivedHttpAuthRequest(ref<android::webkit::WebView> view, ref<android::webkit::HttpAuthHandler> handler, ref<java::lang::String> host, ref<java::lang::String> realm) { return call_method<SCAPIX_META_STRING("onReceivedHttpAuthRequest"), void>(view, handler, host, realm); }
inline jboolean WebViewClient::shouldOverrideKeyEvent(ref<android::webkit::WebView> view, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("shouldOverrideKeyEvent"), jboolean>(view, event); }
inline void WebViewClient::onUnhandledKeyEvent(ref<android::webkit::WebView> view, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onUnhandledKeyEvent"), void>(view, event); }
inline void WebViewClient::onScaleChanged(ref<android::webkit::WebView> view, jfloat oldScale, jfloat newScale) { return call_method<SCAPIX_META_STRING("onScaleChanged"), void>(view, oldScale, newScale); }
inline void WebViewClient::onReceivedLoginRequest(ref<android::webkit::WebView> view, ref<java::lang::String> realm, ref<java::lang::String> account, ref<java::lang::String> args) { return call_method<SCAPIX_META_STRING("onReceivedLoginRequest"), void>(view, realm, account, args); }
inline jboolean WebViewClient::onRenderProcessGone(ref<android::webkit::WebView> view, ref<android::webkit::RenderProcessGoneDetail> detail) { return call_method<SCAPIX_META_STRING("onRenderProcessGone"), jboolean>(view, detail); }
inline void WebViewClient::onSafeBrowsingHit(ref<android::webkit::WebView> view, ref<android::webkit::WebResourceRequest> request, jint threatType, ref<android::webkit::SafeBrowsingResponse> callback) { return call_method<SCAPIX_META_STRING("onSafeBrowsingHit"), void>(view, request, threatType, callback); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_WEBVIEWCLIENT_H
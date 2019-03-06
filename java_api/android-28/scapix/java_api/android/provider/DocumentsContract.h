// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_DOCUMENTSCONTRACT_H
#define SCAPIX_ANDROID_PROVIDER_DOCUMENTSCONTRACT_H

namespace scapix::java_api {

namespace android::content { class ContentResolver; }
namespace android::content { class Context; }
namespace android::content { class IntentSender; }
namespace android::graphics { class Bitmap; }
namespace android::graphics { class Point; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::os { class CancellationSignal; }
namespace android::provider { class DocumentsContract_Path; }
namespace java::lang { class String; }
namespace android::provider { class DocumentsContract_Root; }
namespace android::provider { class DocumentsContract_Document; }

namespace android::provider {

class DocumentsContract : public object_base<SCAPIX_META_STRING("android/provider/DocumentsContract"),
	java::lang::Object>
{
public:

	using Root = DocumentsContract_Root;
	using Path = DocumentsContract_Path;
	using Document = DocumentsContract_Document;

	static ref<java::lang::String> ACTION_DOCUMENT_SETTINGS_();
	static ref<java::lang::String> EXTRA_ERROR_();
	static ref<java::lang::String> EXTRA_EXCLUDE_SELF_();
	static ref<java::lang::String> EXTRA_INFO_();
	static ref<java::lang::String> EXTRA_INITIAL_URI_();
	static ref<java::lang::String> EXTRA_LOADING_();
	static ref<java::lang::String> EXTRA_ORIENTATION_();
	static ref<java::lang::String> EXTRA_PROMPT_();
	static ref<java::lang::String> PROVIDER_INTERFACE_();

	static ref<android::net::Uri> buildRootsUri(ref<java::lang::String> authority);
	static ref<android::net::Uri> buildRootUri(ref<java::lang::String> authority, ref<java::lang::String> rootId);
	static ref<android::net::Uri> buildRecentDocumentsUri(ref<java::lang::String> authority, ref<java::lang::String> rootId);
	static ref<android::net::Uri> buildTreeDocumentUri(ref<java::lang::String> authority, ref<java::lang::String> documentId);
	static ref<android::net::Uri> buildDocumentUri(ref<java::lang::String> authority, ref<java::lang::String> documentId);
	static ref<android::net::Uri> buildDocumentUriUsingTree(ref<android::net::Uri> treeUri, ref<java::lang::String> documentId);
	static ref<android::net::Uri> buildChildDocumentsUri(ref<java::lang::String> authority, ref<java::lang::String> parentDocumentId);
	static ref<android::net::Uri> buildChildDocumentsUriUsingTree(ref<android::net::Uri> treeUri, ref<java::lang::String> parentDocumentId);
	static ref<android::net::Uri> buildSearchDocumentsUri(ref<java::lang::String> authority, ref<java::lang::String> rootId, ref<java::lang::String> query);
	static jboolean isDocumentUri(ref<android::content::Context> context, ref<android::net::Uri> uri);
	static jboolean isTreeUri(ref<android::net::Uri> uri);
	static ref<java::lang::String> getRootId(ref<android::net::Uri> rootUri);
	static ref<java::lang::String> getDocumentId(ref<android::net::Uri> documentUri);
	static ref<java::lang::String> getTreeDocumentId(ref<android::net::Uri> documentUri);
	static ref<java::lang::String> getSearchDocumentsQuery(ref<android::net::Uri> searchDocumentsUri);
	static ref<android::graphics::Bitmap> getDocumentThumbnail(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri, ref<android::graphics::Point> size, ref<android::os::CancellationSignal> signal);
	static ref<android::net::Uri> createDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> parentDocumentUri, ref<java::lang::String> mimeType, ref<java::lang::String> displayName);
	static ref<android::net::Uri> renameDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri, ref<java::lang::String> displayName);
	static jboolean deleteDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri);
	static ref<android::net::Uri> copyDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> sourceDocumentUri, ref<android::net::Uri> targetParentDocumentUri);
	static ref<android::net::Uri> moveDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> sourceDocumentUri, ref<android::net::Uri> sourceParentDocumentUri, ref<android::net::Uri> targetParentDocumentUri);
	static jboolean removeDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri, ref<android::net::Uri> parentDocumentUri);
	static void ejectRoot(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> rootUri);
	static ref<android::provider::DocumentsContract_Path> findDocumentPath(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> treeUri);
	static ref<android::content::IntentSender> createWebLinkIntent(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> uri, ref<android::os::Bundle> options);

protected:

	DocumentsContract(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Point.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/provider/DocumentsContract_Path.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> DocumentsContract::ACTION_DOCUMENT_SETTINGS_() { return get_static_field<SCAPIX_META_STRING("ACTION_DOCUMENT_SETTINGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_ERROR_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ERROR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_EXCLUDE_SELF_() { return get_static_field<SCAPIX_META_STRING("EXTRA_EXCLUDE_SELF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_INFO_() { return get_static_field<SCAPIX_META_STRING("EXTRA_INFO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_INITIAL_URI_() { return get_static_field<SCAPIX_META_STRING("EXTRA_INITIAL_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_LOADING_() { return get_static_field<SCAPIX_META_STRING("EXTRA_LOADING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_ORIENTATION_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ORIENTATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::EXTRA_PROMPT_() { return get_static_field<SCAPIX_META_STRING("EXTRA_PROMPT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DocumentsContract::PROVIDER_INTERFACE_() { return get_static_field<SCAPIX_META_STRING("PROVIDER_INTERFACE"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> DocumentsContract::buildRootsUri(ref<java::lang::String> authority) { return call_static_method<SCAPIX_META_STRING("buildRootsUri"), ref<android::net::Uri>>(authority); }
inline ref<android::net::Uri> DocumentsContract::buildRootUri(ref<java::lang::String> authority, ref<java::lang::String> rootId) { return call_static_method<SCAPIX_META_STRING("buildRootUri"), ref<android::net::Uri>>(authority, rootId); }
inline ref<android::net::Uri> DocumentsContract::buildRecentDocumentsUri(ref<java::lang::String> authority, ref<java::lang::String> rootId) { return call_static_method<SCAPIX_META_STRING("buildRecentDocumentsUri"), ref<android::net::Uri>>(authority, rootId); }
inline ref<android::net::Uri> DocumentsContract::buildTreeDocumentUri(ref<java::lang::String> authority, ref<java::lang::String> documentId) { return call_static_method<SCAPIX_META_STRING("buildTreeDocumentUri"), ref<android::net::Uri>>(authority, documentId); }
inline ref<android::net::Uri> DocumentsContract::buildDocumentUri(ref<java::lang::String> authority, ref<java::lang::String> documentId) { return call_static_method<SCAPIX_META_STRING("buildDocumentUri"), ref<android::net::Uri>>(authority, documentId); }
inline ref<android::net::Uri> DocumentsContract::buildDocumentUriUsingTree(ref<android::net::Uri> treeUri, ref<java::lang::String> documentId) { return call_static_method<SCAPIX_META_STRING("buildDocumentUriUsingTree"), ref<android::net::Uri>>(treeUri, documentId); }
inline ref<android::net::Uri> DocumentsContract::buildChildDocumentsUri(ref<java::lang::String> authority, ref<java::lang::String> parentDocumentId) { return call_static_method<SCAPIX_META_STRING("buildChildDocumentsUri"), ref<android::net::Uri>>(authority, parentDocumentId); }
inline ref<android::net::Uri> DocumentsContract::buildChildDocumentsUriUsingTree(ref<android::net::Uri> treeUri, ref<java::lang::String> parentDocumentId) { return call_static_method<SCAPIX_META_STRING("buildChildDocumentsUriUsingTree"), ref<android::net::Uri>>(treeUri, parentDocumentId); }
inline ref<android::net::Uri> DocumentsContract::buildSearchDocumentsUri(ref<java::lang::String> authority, ref<java::lang::String> rootId, ref<java::lang::String> query) { return call_static_method<SCAPIX_META_STRING("buildSearchDocumentsUri"), ref<android::net::Uri>>(authority, rootId, query); }
inline jboolean DocumentsContract::isDocumentUri(ref<android::content::Context> context, ref<android::net::Uri> uri) { return call_static_method<SCAPIX_META_STRING("isDocumentUri"), jboolean>(context, uri); }
inline jboolean DocumentsContract::isTreeUri(ref<android::net::Uri> uri) { return call_static_method<SCAPIX_META_STRING("isTreeUri"), jboolean>(uri); }
inline ref<java::lang::String> DocumentsContract::getRootId(ref<android::net::Uri> rootUri) { return call_static_method<SCAPIX_META_STRING("getRootId"), ref<java::lang::String>>(rootUri); }
inline ref<java::lang::String> DocumentsContract::getDocumentId(ref<android::net::Uri> documentUri) { return call_static_method<SCAPIX_META_STRING("getDocumentId"), ref<java::lang::String>>(documentUri); }
inline ref<java::lang::String> DocumentsContract::getTreeDocumentId(ref<android::net::Uri> documentUri) { return call_static_method<SCAPIX_META_STRING("getTreeDocumentId"), ref<java::lang::String>>(documentUri); }
inline ref<java::lang::String> DocumentsContract::getSearchDocumentsQuery(ref<android::net::Uri> searchDocumentsUri) { return call_static_method<SCAPIX_META_STRING("getSearchDocumentsQuery"), ref<java::lang::String>>(searchDocumentsUri); }
inline ref<android::graphics::Bitmap> DocumentsContract::getDocumentThumbnail(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri, ref<android::graphics::Point> size, ref<android::os::CancellationSignal> signal) { return call_static_method<SCAPIX_META_STRING("getDocumentThumbnail"), ref<android::graphics::Bitmap>>(resolver, documentUri, size, signal); }
inline ref<android::net::Uri> DocumentsContract::createDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> parentDocumentUri, ref<java::lang::String> mimeType, ref<java::lang::String> displayName) { return call_static_method<SCAPIX_META_STRING("createDocument"), ref<android::net::Uri>>(resolver, parentDocumentUri, mimeType, displayName); }
inline ref<android::net::Uri> DocumentsContract::renameDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri, ref<java::lang::String> displayName) { return call_static_method<SCAPIX_META_STRING("renameDocument"), ref<android::net::Uri>>(resolver, documentUri, displayName); }
inline jboolean DocumentsContract::deleteDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri) { return call_static_method<SCAPIX_META_STRING("deleteDocument"), jboolean>(resolver, documentUri); }
inline ref<android::net::Uri> DocumentsContract::copyDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> sourceDocumentUri, ref<android::net::Uri> targetParentDocumentUri) { return call_static_method<SCAPIX_META_STRING("copyDocument"), ref<android::net::Uri>>(resolver, sourceDocumentUri, targetParentDocumentUri); }
inline ref<android::net::Uri> DocumentsContract::moveDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> sourceDocumentUri, ref<android::net::Uri> sourceParentDocumentUri, ref<android::net::Uri> targetParentDocumentUri) { return call_static_method<SCAPIX_META_STRING("moveDocument"), ref<android::net::Uri>>(resolver, sourceDocumentUri, sourceParentDocumentUri, targetParentDocumentUri); }
inline jboolean DocumentsContract::removeDocument(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> documentUri, ref<android::net::Uri> parentDocumentUri) { return call_static_method<SCAPIX_META_STRING("removeDocument"), jboolean>(resolver, documentUri, parentDocumentUri); }
inline void DocumentsContract::ejectRoot(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> rootUri) { return call_static_method<SCAPIX_META_STRING("ejectRoot"), void>(resolver, rootUri); }
inline ref<android::provider::DocumentsContract_Path> DocumentsContract::findDocumentPath(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> treeUri) { return call_static_method<SCAPIX_META_STRING("findDocumentPath"), ref<android::provider::DocumentsContract_Path>>(resolver, treeUri); }
inline ref<android::content::IntentSender> DocumentsContract::createWebLinkIntent(ref<android::content::ContentResolver> resolver, ref<android::net::Uri> uri, ref<android::os::Bundle> options) { return call_static_method<SCAPIX_META_STRING("createWebLinkIntent"), ref<android::content::IntentSender>>(resolver, uri, options); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_DOCUMENTSCONTRACT_H
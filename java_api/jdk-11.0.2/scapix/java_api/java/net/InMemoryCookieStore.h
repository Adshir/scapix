// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/CookieStore.h>

#ifndef SCAPIX_JAVA_NET_INMEMORYCOOKIESTORE_H
#define SCAPIX_JAVA_NET_INMEMORYCOOKIESTORE_H

namespace scapix::java_api {

namespace java::net { class HttpCookie; }
namespace java::net { class URI; }
namespace java::util { class List; }

namespace java::net {

// private
class InMemoryCookieStore : public object_base<SCAPIX_META_STRING("java/net/InMemoryCookieStore"),
	java::lang::Object,
	java::net::CookieStore>
{
public:

	static ref<InMemoryCookieStore> new_object();
	void add(ref<java::net::URI> uri, ref<java::net::HttpCookie> cookie);
	ref<java::util::List> get(ref<java::net::URI> uri);
	ref<java::util::List> getCookies();
	ref<java::util::List> getURIs();
	jboolean remove(ref<java::net::URI> uri, ref<java::net::HttpCookie> ck);
	jboolean removeAll();

protected:

	InMemoryCookieStore(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/net/HttpCookie.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace java::net {

inline ref<InMemoryCookieStore> InMemoryCookieStore::new_object() { return base_::new_object(); }
inline void InMemoryCookieStore::add(ref<java::net::URI> uri, ref<java::net::HttpCookie> cookie) { return call_method<SCAPIX_META_STRING("add"), void>(uri, cookie); }
inline ref<java::util::List> InMemoryCookieStore::get(ref<java::net::URI> uri) { return call_method<SCAPIX_META_STRING("get"), ref<java::util::List>>(uri); }
inline ref<java::util::List> InMemoryCookieStore::getCookies() { return call_method<SCAPIX_META_STRING("getCookies"), ref<java::util::List>>(); }
inline ref<java::util::List> InMemoryCookieStore::getURIs() { return call_method<SCAPIX_META_STRING("getURIs"), ref<java::util::List>>(); }
inline jboolean InMemoryCookieStore::remove(ref<java::net::URI> uri, ref<java::net::HttpCookie> ck) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(uri, ck); }
inline jboolean InMemoryCookieStore::removeAll() { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_INMEMORYCOOKIESTORE_H
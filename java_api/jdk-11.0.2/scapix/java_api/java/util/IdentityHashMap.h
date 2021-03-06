// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_UTIL_IDENTITYHASHMAP_H
#define SCAPIX_JAVA_UTIL_IDENTITYHASHMAP_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Set; }
namespace java::util::function { class BiConsumer; }
namespace java::util::function { class BiFunction; }

namespace java::util {

class IdentityHashMap : public object_base<SCAPIX_META_STRING("java/util/IdentityHashMap"),
	java::util::AbstractMap,
	java::util::Map,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static ref<IdentityHashMap> new_object();
	static ref<IdentityHashMap> new_object(jint expectedMaxSize);
	static ref<IdentityHashMap> new_object(ref<java::util::Map> m);
	jint size();
	jboolean isEmpty();
	ref<java::lang::Object> get(ref<java::lang::Object> key);
	jboolean containsKey(ref<java::lang::Object> key);
	jboolean containsValue(ref<java::lang::Object> value);
	ref<java::lang::Object> put(ref<java::lang::Object> key, ref<java::lang::Object> value);
	void putAll(ref<java::util::Map> m);
	ref<java::lang::Object> remove(ref<java::lang::Object> key);
	void clear();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	ref<java::lang::Object> clone();
	ref<java::util::Set> keySet();
	ref<java::util::Collection> values();
	ref<java::util::Set> entrySet();
	void forEach(ref<java::util::function::BiConsumer> action);
	void replaceAll(ref<java::util::function::BiFunction> function);

protected:

	IdentityHashMap(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>

namespace scapix::java_api {
namespace java::util {

inline ref<IdentityHashMap> IdentityHashMap::new_object() { return base_::new_object(); }
inline ref<IdentityHashMap> IdentityHashMap::new_object(jint expectedMaxSize) { return base_::new_object(expectedMaxSize); }
inline ref<IdentityHashMap> IdentityHashMap::new_object(ref<java::util::Map> m) { return base_::new_object(m); }
inline jint IdentityHashMap::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean IdentityHashMap::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline ref<java::lang::Object> IdentityHashMap::get(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(key); }
inline jboolean IdentityHashMap::containsKey(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("containsKey"), jboolean>(key); }
inline jboolean IdentityHashMap::containsValue(ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("containsValue"), jboolean>(value); }
inline ref<java::lang::Object> IdentityHashMap::put(ref<java::lang::Object> key, ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("put"), ref<java::lang::Object>>(key, value); }
inline void IdentityHashMap::putAll(ref<java::util::Map> m) { return call_method<SCAPIX_META_STRING("putAll"), void>(m); }
inline ref<java::lang::Object> IdentityHashMap::remove(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(key); }
inline void IdentityHashMap::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean IdentityHashMap::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint IdentityHashMap::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::Object> IdentityHashMap::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<java::util::Set> IdentityHashMap::keySet() { return call_method<SCAPIX_META_STRING("keySet"), ref<java::util::Set>>(); }
inline ref<java::util::Collection> IdentityHashMap::values() { return call_method<SCAPIX_META_STRING("values"), ref<java::util::Collection>>(); }
inline ref<java::util::Set> IdentityHashMap::entrySet() { return call_method<SCAPIX_META_STRING("entrySet"), ref<java::util::Set>>(); }
inline void IdentityHashMap::forEach(ref<java::util::function::BiConsumer> action) { return call_method<SCAPIX_META_STRING("forEach"), void>(action); }
inline void IdentityHashMap::replaceAll(ref<java::util::function::BiFunction> function) { return call_method<SCAPIX_META_STRING("replaceAll"), void>(function); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_IDENTITYHASHMAP_H

// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/dalvik/system/BaseDexClassLoader.h>

#ifndef SCAPIX_DALVIK_SYSTEM_INMEMORYDEXCLASSLOADER_H
#define SCAPIX_DALVIK_SYSTEM_INMEMORYDEXCLASSLOADER_H

namespace scapix::java_api {

namespace java::lang { class ClassLoader; }
namespace java::nio { class ByteBuffer; }

namespace dalvik::system {

class InMemoryDexClassLoader : public object_base<SCAPIX_META_STRING("dalvik/system/InMemoryDexClassLoader"),
	dalvik::system::BaseDexClassLoader>
{
public:

	static ref<InMemoryDexClassLoader> new_object(ref<link::java::array<java::nio::ByteBuffer>> dexBuffers, ref<java::lang::ClassLoader> parent);
	static ref<InMemoryDexClassLoader> new_object(ref<java::nio::ByteBuffer> dexBuffer, ref<java::lang::ClassLoader> parent);

protected:

	InMemoryDexClassLoader(handle_type h) : base_(h) {}

};

} // namespace dalvik::system
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>

namespace scapix::java_api {
namespace dalvik::system {

inline ref<InMemoryDexClassLoader> InMemoryDexClassLoader::new_object(ref<link::java::array<java::nio::ByteBuffer>> dexBuffers, ref<java::lang::ClassLoader> parent) { return base_::new_object(dexBuffers, parent); }
inline ref<InMemoryDexClassLoader> InMemoryDexClassLoader::new_object(ref<java::nio::ByteBuffer> dexBuffer, ref<java::lang::ClassLoader> parent) { return base_::new_object(dexBuffer, parent); }

} // namespace dalvik::system
} // namespace scapix::java_api

#endif // SCAPIX_DALVIK_SYSTEM_INMEMORYDEXCLASSLOADER_H

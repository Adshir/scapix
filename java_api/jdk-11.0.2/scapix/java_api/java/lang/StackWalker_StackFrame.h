// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_STACKWALKER_STACKFRAME_H
#define SCAPIX_JAVA_LANG_STACKWALKER_STACKFRAME_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class StackTraceElement; }
namespace java::lang { class String; }
namespace java::lang::invoke { class MethodType; }

namespace java::lang {

class StackWalker_StackFrame : public object_base<SCAPIX_META_STRING("java/lang/StackWalker$StackFrame"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getClassName();
	ref<java::lang::String> getMethodName();
	ref<java::lang::Class> getDeclaringClass();
	ref<java::lang::invoke::MethodType> getMethodType();
	ref<java::lang::String> getDescriptor();
	jint getByteCodeIndex();
	ref<java::lang::String> getFileName();
	jint getLineNumber();
	jboolean isNativeMethod();
	ref<java::lang::StackTraceElement> toStackTraceElement();

protected:

	StackWalker_StackFrame(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/StackTraceElement.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::lang::String> StackWalker_StackFrame::getClassName() { return call_method<SCAPIX_META_STRING("getClassName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> StackWalker_StackFrame::getMethodName() { return call_method<SCAPIX_META_STRING("getMethodName"), ref<java::lang::String>>(); }
inline ref<java::lang::Class> StackWalker_StackFrame::getDeclaringClass() { return call_method<SCAPIX_META_STRING("getDeclaringClass"), ref<java::lang::Class>>(); }
inline ref<java::lang::invoke::MethodType> StackWalker_StackFrame::getMethodType() { return call_method<SCAPIX_META_STRING("getMethodType"), ref<java::lang::invoke::MethodType>>(); }
inline ref<java::lang::String> StackWalker_StackFrame::getDescriptor() { return call_method<SCAPIX_META_STRING("getDescriptor"), ref<java::lang::String>>(); }
inline jint StackWalker_StackFrame::getByteCodeIndex() { return call_method<SCAPIX_META_STRING("getByteCodeIndex"), jint>(); }
inline ref<java::lang::String> StackWalker_StackFrame::getFileName() { return call_method<SCAPIX_META_STRING("getFileName"), ref<java::lang::String>>(); }
inline jint StackWalker_StackFrame::getLineNumber() { return call_method<SCAPIX_META_STRING("getLineNumber"), jint>(); }
inline jboolean StackWalker_StackFrame::isNativeMethod() { return call_method<SCAPIX_META_STRING("isNativeMethod"), jboolean>(); }
inline ref<java::lang::StackTraceElement> StackWalker_StackFrame::toStackTraceElement() { return call_method<SCAPIX_META_STRING("toStackTraceElement"), ref<java::lang::StackTraceElement>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_STACKWALKER_STACKFRAME_H

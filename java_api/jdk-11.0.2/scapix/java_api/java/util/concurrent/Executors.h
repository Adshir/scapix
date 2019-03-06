// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_EXECUTORS_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_EXECUTORS_H

namespace scapix::java_api {

namespace java::lang { class Runnable; }
namespace java::security { class PrivilegedAction; }
namespace java::security { class PrivilegedExceptionAction; }
namespace java::util::concurrent { class Callable; }
namespace java::util::concurrent { class ExecutorService; }
namespace java::util::concurrent { class ScheduledExecutorService; }
namespace java::util::concurrent { class ThreadFactory; }

namespace java::util::concurrent {

class Executors : public object_base<SCAPIX_META_STRING("java/util/concurrent/Executors"),
	java::lang::Object>
{
public:

	static ref<java::util::concurrent::ExecutorService> newFixedThreadPool(jint nThreads);
	static ref<java::util::concurrent::ExecutorService> newWorkStealingPool(jint parallelism);
	static ref<java::util::concurrent::ExecutorService> newWorkStealingPool();
	static ref<java::util::concurrent::ExecutorService> newFixedThreadPool(jint nThreads, ref<java::util::concurrent::ThreadFactory> threadFactory);
	static ref<java::util::concurrent::ExecutorService> newSingleThreadExecutor();
	static ref<java::util::concurrent::ExecutorService> newSingleThreadExecutor(ref<java::util::concurrent::ThreadFactory> threadFactory);
	static ref<java::util::concurrent::ExecutorService> newCachedThreadPool();
	static ref<java::util::concurrent::ExecutorService> newCachedThreadPool(ref<java::util::concurrent::ThreadFactory> threadFactory);
	static ref<java::util::concurrent::ScheduledExecutorService> newSingleThreadScheduledExecutor();
	static ref<java::util::concurrent::ScheduledExecutorService> newSingleThreadScheduledExecutor(ref<java::util::concurrent::ThreadFactory> threadFactory);
	static ref<java::util::concurrent::ScheduledExecutorService> newScheduledThreadPool(jint corePoolSize);
	static ref<java::util::concurrent::ScheduledExecutorService> newScheduledThreadPool(jint corePoolSize, ref<java::util::concurrent::ThreadFactory> threadFactory);
	static ref<java::util::concurrent::ExecutorService> unconfigurableExecutorService(ref<java::util::concurrent::ExecutorService> executor);
	static ref<java::util::concurrent::ScheduledExecutorService> unconfigurableScheduledExecutorService(ref<java::util::concurrent::ScheduledExecutorService> executor);
	static ref<java::util::concurrent::ThreadFactory> defaultThreadFactory();
	static ref<java::util::concurrent::ThreadFactory> privilegedThreadFactory();
	static ref<java::util::concurrent::Callable> callable(ref<java::lang::Runnable> task, ref<java::lang::Object> result);
	static ref<java::util::concurrent::Callable> callable(ref<java::lang::Runnable> task);
	static ref<java::util::concurrent::Callable> callable(ref<java::security::PrivilegedAction> action);
	static ref<java::util::concurrent::Callable> callable(ref<java::security::PrivilegedExceptionAction> action);
	static ref<java::util::concurrent::Callable> privilegedCallable(ref<java::util::concurrent::Callable> callable);
	static ref<java::util::concurrent::Callable> privilegedCallableUsingCurrentClassLoader(ref<java::util::concurrent::Callable> callable);

protected:

	Executors(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>
#include <scapix/java_api/java/security/PrivilegedExceptionAction.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/ExecutorService.h>
#include <scapix/java_api/java/util/concurrent/ScheduledExecutorService.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<java::util::concurrent::ExecutorService> Executors::newFixedThreadPool(jint nThreads) { return call_static_method<SCAPIX_META_STRING("newFixedThreadPool"), ref<java::util::concurrent::ExecutorService>>(nThreads); }
inline ref<java::util::concurrent::ExecutorService> Executors::newWorkStealingPool(jint parallelism) { return call_static_method<SCAPIX_META_STRING("newWorkStealingPool"), ref<java::util::concurrent::ExecutorService>>(parallelism); }
inline ref<java::util::concurrent::ExecutorService> Executors::newWorkStealingPool() { return call_static_method<SCAPIX_META_STRING("newWorkStealingPool"), ref<java::util::concurrent::ExecutorService>>(); }
inline ref<java::util::concurrent::ExecutorService> Executors::newFixedThreadPool(jint nThreads, ref<java::util::concurrent::ThreadFactory> threadFactory) { return call_static_method<SCAPIX_META_STRING("newFixedThreadPool"), ref<java::util::concurrent::ExecutorService>>(nThreads, threadFactory); }
inline ref<java::util::concurrent::ExecutorService> Executors::newSingleThreadExecutor() { return call_static_method<SCAPIX_META_STRING("newSingleThreadExecutor"), ref<java::util::concurrent::ExecutorService>>(); }
inline ref<java::util::concurrent::ExecutorService> Executors::newSingleThreadExecutor(ref<java::util::concurrent::ThreadFactory> threadFactory) { return call_static_method<SCAPIX_META_STRING("newSingleThreadExecutor"), ref<java::util::concurrent::ExecutorService>>(threadFactory); }
inline ref<java::util::concurrent::ExecutorService> Executors::newCachedThreadPool() { return call_static_method<SCAPIX_META_STRING("newCachedThreadPool"), ref<java::util::concurrent::ExecutorService>>(); }
inline ref<java::util::concurrent::ExecutorService> Executors::newCachedThreadPool(ref<java::util::concurrent::ThreadFactory> threadFactory) { return call_static_method<SCAPIX_META_STRING("newCachedThreadPool"), ref<java::util::concurrent::ExecutorService>>(threadFactory); }
inline ref<java::util::concurrent::ScheduledExecutorService> Executors::newSingleThreadScheduledExecutor() { return call_static_method<SCAPIX_META_STRING("newSingleThreadScheduledExecutor"), ref<java::util::concurrent::ScheduledExecutorService>>(); }
inline ref<java::util::concurrent::ScheduledExecutorService> Executors::newSingleThreadScheduledExecutor(ref<java::util::concurrent::ThreadFactory> threadFactory) { return call_static_method<SCAPIX_META_STRING("newSingleThreadScheduledExecutor"), ref<java::util::concurrent::ScheduledExecutorService>>(threadFactory); }
inline ref<java::util::concurrent::ScheduledExecutorService> Executors::newScheduledThreadPool(jint corePoolSize) { return call_static_method<SCAPIX_META_STRING("newScheduledThreadPool"), ref<java::util::concurrent::ScheduledExecutorService>>(corePoolSize); }
inline ref<java::util::concurrent::ScheduledExecutorService> Executors::newScheduledThreadPool(jint corePoolSize, ref<java::util::concurrent::ThreadFactory> threadFactory) { return call_static_method<SCAPIX_META_STRING("newScheduledThreadPool"), ref<java::util::concurrent::ScheduledExecutorService>>(corePoolSize, threadFactory); }
inline ref<java::util::concurrent::ExecutorService> Executors::unconfigurableExecutorService(ref<java::util::concurrent::ExecutorService> executor) { return call_static_method<SCAPIX_META_STRING("unconfigurableExecutorService"), ref<java::util::concurrent::ExecutorService>>(executor); }
inline ref<java::util::concurrent::ScheduledExecutorService> Executors::unconfigurableScheduledExecutorService(ref<java::util::concurrent::ScheduledExecutorService> executor) { return call_static_method<SCAPIX_META_STRING("unconfigurableScheduledExecutorService"), ref<java::util::concurrent::ScheduledExecutorService>>(executor); }
inline ref<java::util::concurrent::ThreadFactory> Executors::defaultThreadFactory() { return call_static_method<SCAPIX_META_STRING("defaultThreadFactory"), ref<java::util::concurrent::ThreadFactory>>(); }
inline ref<java::util::concurrent::ThreadFactory> Executors::privilegedThreadFactory() { return call_static_method<SCAPIX_META_STRING("privilegedThreadFactory"), ref<java::util::concurrent::ThreadFactory>>(); }
inline ref<java::util::concurrent::Callable> Executors::callable(ref<java::lang::Runnable> task, ref<java::lang::Object> result) { return call_static_method<SCAPIX_META_STRING("callable"), ref<java::util::concurrent::Callable>>(task, result); }
inline ref<java::util::concurrent::Callable> Executors::callable(ref<java::lang::Runnable> task) { return call_static_method<SCAPIX_META_STRING("callable"), ref<java::util::concurrent::Callable>>(task); }
inline ref<java::util::concurrent::Callable> Executors::callable(ref<java::security::PrivilegedAction> action) { return call_static_method<SCAPIX_META_STRING("callable"), ref<java::util::concurrent::Callable>>(action); }
inline ref<java::util::concurrent::Callable> Executors::callable(ref<java::security::PrivilegedExceptionAction> action) { return call_static_method<SCAPIX_META_STRING("callable"), ref<java::util::concurrent::Callable>>(action); }
inline ref<java::util::concurrent::Callable> Executors::privilegedCallable(ref<java::util::concurrent::Callable> callable) { return call_static_method<SCAPIX_META_STRING("privilegedCallable"), ref<java::util::concurrent::Callable>>(callable); }
inline ref<java::util::concurrent::Callable> Executors::privilegedCallableUsingCurrentClassLoader(ref<java::util::concurrent::Callable> callable) { return call_static_method<SCAPIX_META_STRING("privilegedCallableUsingCurrentClassLoader"), ref<java::util::concurrent::Callable>>(callable); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_EXECUTORS_H
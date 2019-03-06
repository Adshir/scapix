// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/ThreadPoolExecutor.h>
#include <scapix/java_api/java/util/concurrent/ScheduledExecutorService.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class Runnable; }
namespace java::util { class List; }
namespace java::util::concurrent { class BlockingQueue; }
namespace java::util::concurrent { class Callable; }
namespace java::util::concurrent { class Future; }
namespace java::util::concurrent { class RejectedExecutionHandler; }
namespace java::util::concurrent { class ScheduledFuture; }
namespace java::util::concurrent { class ThreadFactory; }
namespace java::util::concurrent { class TimeUnit; }

namespace java::util::concurrent {

class ScheduledThreadPoolExecutor : public object_base<SCAPIX_META_STRING("java/util/concurrent/ScheduledThreadPoolExecutor"),
	java::util::concurrent::ThreadPoolExecutor,
	java::util::concurrent::ScheduledExecutorService>
{
public:

	static ref<ScheduledThreadPoolExecutor> new_object(jint corePoolSize);
	static ref<ScheduledThreadPoolExecutor> new_object(jint corePoolSize, ref<java::util::concurrent::ThreadFactory> threadFactory);
	static ref<ScheduledThreadPoolExecutor> new_object(jint corePoolSize, ref<java::util::concurrent::RejectedExecutionHandler> handler);
	static ref<ScheduledThreadPoolExecutor> new_object(jint corePoolSize, ref<java::util::concurrent::ThreadFactory> threadFactory, ref<java::util::concurrent::RejectedExecutionHandler> handler);
	ref<java::util::concurrent::ScheduledFuture> schedule(ref<java::lang::Runnable> command, jlong delay, ref<java::util::concurrent::TimeUnit> p3);
	ref<java::util::concurrent::ScheduledFuture> schedule(ref<java::util::concurrent::Callable> callable, jlong delay, ref<java::util::concurrent::TimeUnit> p3);
	ref<java::util::concurrent::ScheduledFuture> scheduleAtFixedRate(ref<java::lang::Runnable> command, jlong initialDelay, jlong p3, ref<java::util::concurrent::TimeUnit> period);
	ref<java::util::concurrent::ScheduledFuture> scheduleWithFixedDelay(ref<java::lang::Runnable> command, jlong initialDelay, jlong p3, ref<java::util::concurrent::TimeUnit> delay);
	void execute(ref<java::lang::Runnable> command);
	ref<java::util::concurrent::Future> submit(ref<java::lang::Runnable> task);
	ref<java::util::concurrent::Future> submit(ref<java::lang::Runnable> task, ref<java::lang::Object> result);
	ref<java::util::concurrent::Future> submit(ref<java::util::concurrent::Callable> task);
	void setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean value);
	jboolean getContinueExistingPeriodicTasksAfterShutdownPolicy();
	void setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean value);
	jboolean getExecuteExistingDelayedTasksAfterShutdownPolicy();
	void setRemoveOnCancelPolicy(jboolean value);
	jboolean getRemoveOnCancelPolicy();
	void shutdown();
	ref<java::util::List> shutdownNow();
	ref<java::util::concurrent::BlockingQueue> getQueue();

protected:

	ScheduledThreadPoolExecutor(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/BlockingQueue.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/concurrent/Future.h>
#include <scapix/java_api/java/util/concurrent/RejectedExecutionHandler.h>
#include <scapix/java_api/java/util/concurrent/ScheduledFuture.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<ScheduledThreadPoolExecutor> ScheduledThreadPoolExecutor::new_object(jint corePoolSize) { return base_::new_object(corePoolSize); }
inline ref<ScheduledThreadPoolExecutor> ScheduledThreadPoolExecutor::new_object(jint corePoolSize, ref<java::util::concurrent::ThreadFactory> threadFactory) { return base_::new_object(corePoolSize, threadFactory); }
inline ref<ScheduledThreadPoolExecutor> ScheduledThreadPoolExecutor::new_object(jint corePoolSize, ref<java::util::concurrent::RejectedExecutionHandler> handler) { return base_::new_object(corePoolSize, handler); }
inline ref<ScheduledThreadPoolExecutor> ScheduledThreadPoolExecutor::new_object(jint corePoolSize, ref<java::util::concurrent::ThreadFactory> threadFactory, ref<java::util::concurrent::RejectedExecutionHandler> handler) { return base_::new_object(corePoolSize, threadFactory, handler); }
inline ref<java::util::concurrent::ScheduledFuture> ScheduledThreadPoolExecutor::schedule(ref<java::lang::Runnable> command, jlong delay, ref<java::util::concurrent::TimeUnit> p3) { return call_method<SCAPIX_META_STRING("schedule"), ref<java::util::concurrent::ScheduledFuture>>(command, delay, p3); }
inline ref<java::util::concurrent::ScheduledFuture> ScheduledThreadPoolExecutor::schedule(ref<java::util::concurrent::Callable> callable, jlong delay, ref<java::util::concurrent::TimeUnit> p3) { return call_method<SCAPIX_META_STRING("schedule"), ref<java::util::concurrent::ScheduledFuture>>(callable, delay, p3); }
inline ref<java::util::concurrent::ScheduledFuture> ScheduledThreadPoolExecutor::scheduleAtFixedRate(ref<java::lang::Runnable> command, jlong initialDelay, jlong p3, ref<java::util::concurrent::TimeUnit> period) { return call_method<SCAPIX_META_STRING("scheduleAtFixedRate"), ref<java::util::concurrent::ScheduledFuture>>(command, initialDelay, p3, period); }
inline ref<java::util::concurrent::ScheduledFuture> ScheduledThreadPoolExecutor::scheduleWithFixedDelay(ref<java::lang::Runnable> command, jlong initialDelay, jlong p3, ref<java::util::concurrent::TimeUnit> delay) { return call_method<SCAPIX_META_STRING("scheduleWithFixedDelay"), ref<java::util::concurrent::ScheduledFuture>>(command, initialDelay, p3, delay); }
inline void ScheduledThreadPoolExecutor::execute(ref<java::lang::Runnable> command) { return call_method<SCAPIX_META_STRING("execute"), void>(command); }
inline ref<java::util::concurrent::Future> ScheduledThreadPoolExecutor::submit(ref<java::lang::Runnable> task) { return call_method<SCAPIX_META_STRING("submit"), ref<java::util::concurrent::Future>>(task); }
inline ref<java::util::concurrent::Future> ScheduledThreadPoolExecutor::submit(ref<java::lang::Runnable> task, ref<java::lang::Object> result) { return call_method<SCAPIX_META_STRING("submit"), ref<java::util::concurrent::Future>>(task, result); }
inline ref<java::util::concurrent::Future> ScheduledThreadPoolExecutor::submit(ref<java::util::concurrent::Callable> task) { return call_method<SCAPIX_META_STRING("submit"), ref<java::util::concurrent::Future>>(task); }
inline void ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean value) { return call_method<SCAPIX_META_STRING("setContinueExistingPeriodicTasksAfterShutdownPolicy"), void>(value); }
inline jboolean ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy() { return call_method<SCAPIX_META_STRING("getContinueExistingPeriodicTasksAfterShutdownPolicy"), jboolean>(); }
inline void ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean value) { return call_method<SCAPIX_META_STRING("setExecuteExistingDelayedTasksAfterShutdownPolicy"), void>(value); }
inline jboolean ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy() { return call_method<SCAPIX_META_STRING("getExecuteExistingDelayedTasksAfterShutdownPolicy"), jboolean>(); }
inline void ScheduledThreadPoolExecutor::setRemoveOnCancelPolicy(jboolean value) { return call_method<SCAPIX_META_STRING("setRemoveOnCancelPolicy"), void>(value); }
inline jboolean ScheduledThreadPoolExecutor::getRemoveOnCancelPolicy() { return call_method<SCAPIX_META_STRING("getRemoveOnCancelPolicy"), jboolean>(); }
inline void ScheduledThreadPoolExecutor::shutdown() { return call_method<SCAPIX_META_STRING("shutdown"), void>(); }
inline ref<java::util::List> ScheduledThreadPoolExecutor::shutdownNow() { return call_method<SCAPIX_META_STRING("shutdownNow"), ref<java::util::List>>(); }
inline ref<java::util::concurrent::BlockingQueue> ScheduledThreadPoolExecutor::getQueue() { return call_method<SCAPIX_META_STRING("getQueue"), ref<java::util::concurrent::BlockingQueue>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_H
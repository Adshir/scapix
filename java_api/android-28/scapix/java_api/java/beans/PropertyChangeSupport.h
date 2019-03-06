// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_BEANS_PROPERTYCHANGESUPPORT_H
#define SCAPIX_JAVA_BEANS_PROPERTYCHANGESUPPORT_H

namespace scapix::java_api {

namespace java::beans { class PropertyChangeEvent; }
namespace java::beans { class PropertyChangeListener; }
namespace java::lang { class String; }

namespace java::beans {

class PropertyChangeSupport : public object_base<SCAPIX_META_STRING("java/beans/PropertyChangeSupport"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<PropertyChangeSupport> new_object(ref<java::lang::Object> sourceBean);
	void addPropertyChangeListener(ref<java::beans::PropertyChangeListener> listener);
	void removePropertyChangeListener(ref<java::beans::PropertyChangeListener> listener);
	ref<link::java::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners();
	void addPropertyChangeListener(ref<java::lang::String> propertyName, ref<java::beans::PropertyChangeListener> listener);
	void removePropertyChangeListener(ref<java::lang::String> propertyName, ref<java::beans::PropertyChangeListener> listener);
	ref<link::java::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners(ref<java::lang::String> propertyName);
	void firePropertyChange(ref<java::lang::String> propertyName, ref<java::lang::Object> oldValue, ref<java::lang::Object> newValue);
	void firePropertyChange(ref<java::lang::String> propertyName, jint oldValue, jint newValue);
	void firePropertyChange(ref<java::lang::String> propertyName, jboolean oldValue, jboolean newValue);
	void firePropertyChange(ref<java::beans::PropertyChangeEvent> event);
	void fireIndexedPropertyChange(ref<java::lang::String> propertyName, jint index, ref<java::lang::Object> oldValue, ref<java::lang::Object> newValue);
	void fireIndexedPropertyChange(ref<java::lang::String> propertyName, jint index, jint oldValue, jint newValue);
	void fireIndexedPropertyChange(ref<java::lang::String> propertyName, jint index, jboolean oldValue, jboolean newValue);
	jboolean hasListeners(ref<java::lang::String> propertyName);

protected:

	PropertyChangeSupport(handle_type h) : base_(h) {}

};

} // namespace java::beans
} // namespace scapix::java_api

#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::beans {

inline ref<PropertyChangeSupport> PropertyChangeSupport::new_object(ref<java::lang::Object> sourceBean) { return base_::new_object(sourceBean); }
inline void PropertyChangeSupport::addPropertyChangeListener(ref<java::beans::PropertyChangeListener> listener) { return call_method<SCAPIX_META_STRING("addPropertyChangeListener"), void>(listener); }
inline void PropertyChangeSupport::removePropertyChangeListener(ref<java::beans::PropertyChangeListener> listener) { return call_method<SCAPIX_META_STRING("removePropertyChangeListener"), void>(listener); }
inline ref<link::java::array<java::beans::PropertyChangeListener>> PropertyChangeSupport::getPropertyChangeListeners() { return call_method<SCAPIX_META_STRING("getPropertyChangeListeners"), ref<link::java::array<java::beans::PropertyChangeListener>>>(); }
inline void PropertyChangeSupport::addPropertyChangeListener(ref<java::lang::String> propertyName, ref<java::beans::PropertyChangeListener> listener) { return call_method<SCAPIX_META_STRING("addPropertyChangeListener"), void>(propertyName, listener); }
inline void PropertyChangeSupport::removePropertyChangeListener(ref<java::lang::String> propertyName, ref<java::beans::PropertyChangeListener> listener) { return call_method<SCAPIX_META_STRING("removePropertyChangeListener"), void>(propertyName, listener); }
inline ref<link::java::array<java::beans::PropertyChangeListener>> PropertyChangeSupport::getPropertyChangeListeners(ref<java::lang::String> propertyName) { return call_method<SCAPIX_META_STRING("getPropertyChangeListeners"), ref<link::java::array<java::beans::PropertyChangeListener>>>(propertyName); }
inline void PropertyChangeSupport::firePropertyChange(ref<java::lang::String> propertyName, ref<java::lang::Object> oldValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("firePropertyChange"), void>(propertyName, oldValue, newValue); }
inline void PropertyChangeSupport::firePropertyChange(ref<java::lang::String> propertyName, jint oldValue, jint newValue) { return call_method<SCAPIX_META_STRING("firePropertyChange"), void>(propertyName, oldValue, newValue); }
inline void PropertyChangeSupport::firePropertyChange(ref<java::lang::String> propertyName, jboolean oldValue, jboolean newValue) { return call_method<SCAPIX_META_STRING("firePropertyChange"), void>(propertyName, oldValue, newValue); }
inline void PropertyChangeSupport::firePropertyChange(ref<java::beans::PropertyChangeEvent> event) { return call_method<SCAPIX_META_STRING("firePropertyChange"), void>(event); }
inline void PropertyChangeSupport::fireIndexedPropertyChange(ref<java::lang::String> propertyName, jint index, ref<java::lang::Object> oldValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("fireIndexedPropertyChange"), void>(propertyName, index, oldValue, newValue); }
inline void PropertyChangeSupport::fireIndexedPropertyChange(ref<java::lang::String> propertyName, jint index, jint oldValue, jint newValue) { return call_method<SCAPIX_META_STRING("fireIndexedPropertyChange"), void>(propertyName, index, oldValue, newValue); }
inline void PropertyChangeSupport::fireIndexedPropertyChange(ref<java::lang::String> propertyName, jint index, jboolean oldValue, jboolean newValue) { return call_method<SCAPIX_META_STRING("fireIndexedPropertyChange"), void>(propertyName, index, oldValue, newValue); }
inline jboolean PropertyChangeSupport::hasListeners(ref<java::lang::String> propertyName) { return call_method<SCAPIX_META_STRING("hasListeners"), jboolean>(propertyName); }

} // namespace java::beans
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_BEANS_PROPERTYCHANGESUPPORT_H
// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/text/CollationKey.h>

#ifndef SCAPIX_JAVA_TEXT_RULEBASEDCOLLATIONKEY_H
#define SCAPIX_JAVA_TEXT_RULEBASEDCOLLATIONKEY_H

namespace scapix::java_api {

namespace java::lang { class Object; }

namespace java::text {

// private
class RuleBasedCollationKey : public object_base<SCAPIX_META_STRING("java/text/RuleBasedCollationKey"),
	java::text::CollationKey>
{
public:

	jint compareTo(ref<java::text::CollationKey> target);
	jboolean equals(ref<java::lang::Object> target);
	jint hashCode();
	ref<link::java::array<jbyte>> toByteArray();

protected:

	RuleBasedCollationKey(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>

namespace scapix::java_api {
namespace java::text {

inline jint RuleBasedCollationKey::compareTo(ref<java::text::CollationKey> target) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(target); }
inline jboolean RuleBasedCollationKey::equals(ref<java::lang::Object> target) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(target); }
inline jint RuleBasedCollationKey::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<link::java::array<jbyte>> RuleBasedCollationKey::toByteArray() { return call_method<SCAPIX_META_STRING("toByteArray"), ref<link::java::array<jbyte>>>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_RULEBASEDCOLLATIONKEY_H
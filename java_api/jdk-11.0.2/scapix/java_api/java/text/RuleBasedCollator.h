// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/text/Collator.h>

#ifndef SCAPIX_JAVA_TEXT_RULEBASEDCOLLATOR_H
#define SCAPIX_JAVA_TEXT_RULEBASEDCOLLATOR_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::text { class CharacterIterator; }
namespace java::text { class CollationElementIterator; }
namespace java::text { class CollationKey; }

namespace java::text {

class RuleBasedCollator : public object_base<SCAPIX_META_STRING("java/text/RuleBasedCollator"),
	java::text::Collator>
{
public:

	static ref<RuleBasedCollator> new_object(ref<java::lang::String> rules);
	ref<java::lang::String> getRules();
	ref<java::text::CollationElementIterator> getCollationElementIterator(ref<java::lang::String> source);
	ref<java::text::CollationElementIterator> getCollationElementIterator(ref<java::text::CharacterIterator> source);
	jint compare(ref<java::lang::String> source, ref<java::lang::String> target);
	ref<java::text::CollationKey> getCollationKey(ref<java::lang::String> source);
	ref<java::lang::Object> clone();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();

protected:

	RuleBasedCollator(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>
#include <scapix/java_api/java/text/CollationElementIterator.h>
#include <scapix/java_api/java/text/CollationKey.h>

namespace scapix::java_api {
namespace java::text {

inline ref<RuleBasedCollator> RuleBasedCollator::new_object(ref<java::lang::String> rules) { return base_::new_object(rules); }
inline ref<java::lang::String> RuleBasedCollator::getRules() { return call_method<SCAPIX_META_STRING("getRules"), ref<java::lang::String>>(); }
inline ref<java::text::CollationElementIterator> RuleBasedCollator::getCollationElementIterator(ref<java::lang::String> source) { return call_method<SCAPIX_META_STRING("getCollationElementIterator"), ref<java::text::CollationElementIterator>>(source); }
inline ref<java::text::CollationElementIterator> RuleBasedCollator::getCollationElementIterator(ref<java::text::CharacterIterator> source) { return call_method<SCAPIX_META_STRING("getCollationElementIterator"), ref<java::text::CollationElementIterator>>(source); }
inline jint RuleBasedCollator::compare(ref<java::lang::String> source, ref<java::lang::String> target) { return call_method<SCAPIX_META_STRING("compare"), jint>(source, target); }
inline ref<java::text::CollationKey> RuleBasedCollator::getCollationKey(ref<java::lang::String> source) { return call_method<SCAPIX_META_STRING("getCollationKey"), ref<java::text::CollationKey>>(source); }
inline ref<java::lang::Object> RuleBasedCollator::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline jboolean RuleBasedCollator::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint RuleBasedCollator::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_RULEBASEDCOLLATOR_H

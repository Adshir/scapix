// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_LANG_INTEGER_H
#define SCAPIX_JAVA_LANG_INTEGER_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace java::lang {

class Integer : public object_base<SCAPIX_META_STRING("java/lang/Integer"),
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jint BYTES_();
	static jint MAX_VALUE_();
	static jint MIN_VALUE_();
	static jint SIZE_();
	static ref<java::lang::Class> TYPE_();

	static ref<Integer> new_object(jint value);
	static ref<Integer> new_object(ref<java::lang::String> s);
	static ref<java::lang::String> toString(jint i, jint radix);
	static ref<java::lang::String> toUnsignedString(jint i, jint radix);
	static ref<java::lang::String> toHexString(jint i);
	static ref<java::lang::String> toOctalString(jint i);
	static ref<java::lang::String> toBinaryString(jint i);
	static ref<java::lang::String> toString(jint i);
	static ref<java::lang::String> toUnsignedString(jint i);
	static jint parseInt(ref<java::lang::String> s, jint radix);
	static jint parseInt(ref<java::lang::String> s);
	static jint parseUnsignedInt(ref<java::lang::String> s, jint radix);
	static jint parseUnsignedInt(ref<java::lang::String> s);
	static ref<java::lang::Integer> valueOf(ref<java::lang::String> s, jint radix);
	static ref<java::lang::Integer> valueOf(ref<java::lang::String> s);
	static ref<java::lang::Integer> valueOf(jint i);
	jbyte byteValue();
	jshort shortValue();
	jint intValue();
	jlong longValue();
	jfloat floatValue();
	jdouble doubleValue();
	ref<java::lang::String> toString();
	jint hashCode();
	static jint hashCode(jint value);
	jboolean equals(ref<java::lang::Object> obj);
	static ref<java::lang::Integer> getInteger(ref<java::lang::String> nm);
	static ref<java::lang::Integer> getInteger(ref<java::lang::String> nm, jint val);
	static ref<java::lang::Integer> getInteger(ref<java::lang::String> nm, ref<java::lang::Integer> val);
	static ref<java::lang::Integer> decode(ref<java::lang::String> nm);
	jint compareTo(ref<java::lang::Integer> anotherInteger);
	static jint compare(jint x, jint y);
	static jint compareUnsigned(jint x, jint y);
	static jlong toUnsignedLong(jint x);
	static jint divideUnsigned(jint dividend, jint divisor);
	static jint remainderUnsigned(jint dividend, jint divisor);
	static jint highestOneBit(jint i);
	static jint lowestOneBit(jint i);
	static jint numberOfLeadingZeros(jint i);
	static jint numberOfTrailingZeros(jint i);
	static jint bitCount(jint i);
	static jint rotateLeft(jint i, jint distance);
	static jint rotateRight(jint i, jint distance);
	static jint reverse(jint i);
	static jint signum(jint i);
	static jint reverseBytes(jint i);
	static jint sum(jint a, jint b);
	static jint max(jint a, jint b);
	static jint min(jint a, jint b);

protected:

	Integer(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline jint Integer::BYTES_() { return get_static_field<SCAPIX_META_STRING("BYTES"), jint>(); }
inline jint Integer::MAX_VALUE_() { return get_static_field<SCAPIX_META_STRING("MAX_VALUE"), jint>(); }
inline jint Integer::MIN_VALUE_() { return get_static_field<SCAPIX_META_STRING("MIN_VALUE"), jint>(); }
inline jint Integer::SIZE_() { return get_static_field<SCAPIX_META_STRING("SIZE"), jint>(); }
inline ref<java::lang::Class> Integer::TYPE_() { return get_static_field<SCAPIX_META_STRING("TYPE"), ref<java::lang::Class>>(); }
inline ref<Integer> Integer::new_object(jint value) { return base_::new_object(value); }
inline ref<Integer> Integer::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<java::lang::String> Integer::toString(jint i, jint radix) { return call_static_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(i, radix); }
inline ref<java::lang::String> Integer::toUnsignedString(jint i, jint radix) { return call_static_method<SCAPIX_META_STRING("toUnsignedString"), ref<java::lang::String>>(i, radix); }
inline ref<java::lang::String> Integer::toHexString(jint i) { return call_static_method<SCAPIX_META_STRING("toHexString"), ref<java::lang::String>>(i); }
inline ref<java::lang::String> Integer::toOctalString(jint i) { return call_static_method<SCAPIX_META_STRING("toOctalString"), ref<java::lang::String>>(i); }
inline ref<java::lang::String> Integer::toBinaryString(jint i) { return call_static_method<SCAPIX_META_STRING("toBinaryString"), ref<java::lang::String>>(i); }
inline ref<java::lang::String> Integer::toString(jint i) { return call_static_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(i); }
inline ref<java::lang::String> Integer::toUnsignedString(jint i) { return call_static_method<SCAPIX_META_STRING("toUnsignedString"), ref<java::lang::String>>(i); }
inline jint Integer::parseInt(ref<java::lang::String> s, jint radix) { return call_static_method<SCAPIX_META_STRING("parseInt"), jint>(s, radix); }
inline jint Integer::parseInt(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("parseInt"), jint>(s); }
inline jint Integer::parseUnsignedInt(ref<java::lang::String> s, jint radix) { return call_static_method<SCAPIX_META_STRING("parseUnsignedInt"), jint>(s, radix); }
inline jint Integer::parseUnsignedInt(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("parseUnsignedInt"), jint>(s); }
inline ref<java::lang::Integer> Integer::valueOf(ref<java::lang::String> s, jint radix) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::Integer>>(s, radix); }
inline ref<java::lang::Integer> Integer::valueOf(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::Integer>>(s); }
inline ref<java::lang::Integer> Integer::valueOf(jint i) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::Integer>>(i); }
inline jbyte Integer::byteValue() { return call_method<SCAPIX_META_STRING("byteValue"), jbyte>(); }
inline jshort Integer::shortValue() { return call_method<SCAPIX_META_STRING("shortValue"), jshort>(); }
inline jint Integer::intValue() { return call_method<SCAPIX_META_STRING("intValue"), jint>(); }
inline jlong Integer::longValue() { return call_method<SCAPIX_META_STRING("longValue"), jlong>(); }
inline jfloat Integer::floatValue() { return call_method<SCAPIX_META_STRING("floatValue"), jfloat>(); }
inline jdouble Integer::doubleValue() { return call_method<SCAPIX_META_STRING("doubleValue"), jdouble>(); }
inline ref<java::lang::String> Integer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint Integer::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint Integer::hashCode(jint value) { return call_static_method<SCAPIX_META_STRING("hashCode"), jint>(value); }
inline jboolean Integer::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::Integer> Integer::getInteger(ref<java::lang::String> nm) { return call_static_method<SCAPIX_META_STRING("getInteger"), ref<java::lang::Integer>>(nm); }
inline ref<java::lang::Integer> Integer::getInteger(ref<java::lang::String> nm, jint val) { return call_static_method<SCAPIX_META_STRING("getInteger"), ref<java::lang::Integer>>(nm, val); }
inline ref<java::lang::Integer> Integer::getInteger(ref<java::lang::String> nm, ref<java::lang::Integer> val) { return call_static_method<SCAPIX_META_STRING("getInteger"), ref<java::lang::Integer>>(nm, val); }
inline ref<java::lang::Integer> Integer::decode(ref<java::lang::String> nm) { return call_static_method<SCAPIX_META_STRING("decode"), ref<java::lang::Integer>>(nm); }
inline jint Integer::compareTo(ref<java::lang::Integer> anotherInteger) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(anotherInteger); }
inline jint Integer::compare(jint x, jint y) { return call_static_method<SCAPIX_META_STRING("compare"), jint>(x, y); }
inline jint Integer::compareUnsigned(jint x, jint y) { return call_static_method<SCAPIX_META_STRING("compareUnsigned"), jint>(x, y); }
inline jlong Integer::toUnsignedLong(jint x) { return call_static_method<SCAPIX_META_STRING("toUnsignedLong"), jlong>(x); }
inline jint Integer::divideUnsigned(jint dividend, jint divisor) { return call_static_method<SCAPIX_META_STRING("divideUnsigned"), jint>(dividend, divisor); }
inline jint Integer::remainderUnsigned(jint dividend, jint divisor) { return call_static_method<SCAPIX_META_STRING("remainderUnsigned"), jint>(dividend, divisor); }
inline jint Integer::highestOneBit(jint i) { return call_static_method<SCAPIX_META_STRING("highestOneBit"), jint>(i); }
inline jint Integer::lowestOneBit(jint i) { return call_static_method<SCAPIX_META_STRING("lowestOneBit"), jint>(i); }
inline jint Integer::numberOfLeadingZeros(jint i) { return call_static_method<SCAPIX_META_STRING("numberOfLeadingZeros"), jint>(i); }
inline jint Integer::numberOfTrailingZeros(jint i) { return call_static_method<SCAPIX_META_STRING("numberOfTrailingZeros"), jint>(i); }
inline jint Integer::bitCount(jint i) { return call_static_method<SCAPIX_META_STRING("bitCount"), jint>(i); }
inline jint Integer::rotateLeft(jint i, jint distance) { return call_static_method<SCAPIX_META_STRING("rotateLeft"), jint>(i, distance); }
inline jint Integer::rotateRight(jint i, jint distance) { return call_static_method<SCAPIX_META_STRING("rotateRight"), jint>(i, distance); }
inline jint Integer::reverse(jint i) { return call_static_method<SCAPIX_META_STRING("reverse"), jint>(i); }
inline jint Integer::signum(jint i) { return call_static_method<SCAPIX_META_STRING("signum"), jint>(i); }
inline jint Integer::reverseBytes(jint i) { return call_static_method<SCAPIX_META_STRING("reverseBytes"), jint>(i); }
inline jint Integer::sum(jint a, jint b) { return call_static_method<SCAPIX_META_STRING("sum"), jint>(a, b); }
inline jint Integer::max(jint a, jint b) { return call_static_method<SCAPIX_META_STRING("max"), jint>(a, b); }
inline jint Integer::min(jint a, jint b) { return call_static_method<SCAPIX_META_STRING("min"), jint>(a, b); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INTEGER_H
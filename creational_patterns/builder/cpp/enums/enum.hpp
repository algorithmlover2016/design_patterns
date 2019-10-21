#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_ENUMS_ENUM_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_ENUMS_ENUM_H
#include "head.h"

template<typename Enumeration>
std::ostream& operator<<(typename std::enable_if<std::is_enum<Enumeration>::value, std::ostream>::type& stream,
        Enumeration const & e) {
    return stream << static_cast<typename std::underlying_type<Enumeration>::type>(e);
}
#endif

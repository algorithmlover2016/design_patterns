#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_PROTOTYPE_CPP_TYPES_TYPE_HPP
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_PROTOTYPE_CPP_TYPES_TYPE_HPP
#include "head.h"

template<typename T, typename U>
struct decay_equiv:
    std::is_same<typename std::decay<T>::type, U>::type {
};


#endif

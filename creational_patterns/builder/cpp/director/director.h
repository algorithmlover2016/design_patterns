#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_DIRECTOR_DIRECTOR_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_DIRECTOR_DIRECTOR_H
#include "head.h"
#include "components/components.h"
#include "builders/builder.h"

class Director {
public:
    void constructorSportCar(Builder & builder);
    void constructorCityCar(Builder & builder);
    void constructorSUV(Builder & builder);
};

#endif

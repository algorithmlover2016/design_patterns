#ifndef DESIGN_PATTERNS_STRUCTURAL_PATTERNS_ADAPTER_CPP_ADAPTERS_SQUARE_PEG_ADAPTER_H
#define DESIGN_PATTERNS_STRUCTURAL_PATTERNS_ADAPTER_CPP_ADAPTERS_SQUARE_PEG_ADAPTER_H
#include "head.h"
#include "graphics/graphics.h"

class SquarePegAdapter : public RoundPeg {
public:
    SquarePegAdapter(SquarePeg & peg);
    double getRadius() const;
private:
    SquarePeg peg;
};

#endif

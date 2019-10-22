#ifndef DESIGN_PATTERNS_STRUCTURAL_PATTERNS_ADAPTER_CPP_GRAPHICS_GRAPHICS_H
#define DESIGN_PATTERNS_STRUCTURAL_PATTERNS_ADAPTER_CPP_GRAPHICS_GRAPHICS_H
#include "head.h"

const double minAbs = 0.0000001;
class RoundPeg;

class RoundHole {
public:
    RoundHole();
    RoundHole(double radius);
    double getRadius() const;
    void setRadius(double radius);
    bool fits(RoundPeg const & peg) const;
private:
    double radius;
};

class RoundPeg {
public:
    RoundPeg();
    RoundPeg(double radius);
    virtual double getRadius() const;
    void setRadius(double radius);
    virtual ~RoundPeg();
private:
    double radius;
};

class SquarePeg {
public:
    SquarePeg(double width = 0.0);
    double getWidth() const;
    void setWidth(double width);
    double getSquare() const;
private:
    double width;
};
#endif

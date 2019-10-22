#include "head.h"
#include "graphics/graphics.h"

RoundHole::RoundHole() : radius(0) {
}

RoundHole::RoundHole(double radius) : radius(radius) {
}

double RoundHole::getRadius() const {
    return radius;
}

void RoundHole::setRadius(double radius) {
    this->radius = radius;
}

bool RoundHole::fits(RoundPeg const & peg) const {
    return (this->getRadius() > peg.getRadius()) || // larger than
        (abs(this->getRadius() - peg.getRadius()) < minAbs); //equal
}

RoundPeg::RoundPeg() : radius(0) {
}

RoundPeg::RoundPeg(double radius) : radius(radius) {
}

double RoundPeg::getRadius() const {
    return radius;
}

void RoundPeg::setRadius(double radius) {
    this->radius = radius;
}

RoundPeg::~RoundPeg() {
}

SquarePeg::SquarePeg(double width) : width(width) {
}

double SquarePeg::getWidth() const {
    return width;
}

void SquarePeg::setWidth(double width) {
    this->width = width;
}

double SquarePeg::getSquare() const {
    return pow(width, 2);
}


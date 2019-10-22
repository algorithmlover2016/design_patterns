#include "head.h"
#include "adapters/square_peg_adapter.h"

SquarePegAdapter::SquarePegAdapter(SquarePeg & peg) : peg(peg) {
}

double SquarePegAdapter::getRadius() const {
    return sqrt(pow(peg.getWidth() / 2, 2) * 2);
}

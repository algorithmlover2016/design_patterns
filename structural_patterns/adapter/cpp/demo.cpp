#include "head.h"
#include "graphics/graphics.h"
#include "adapters/square_peg_adapter.h"

int main() {
    RoundHole hole(5);
    RoundPeg rpeg(5);
    if (hole.fits(rpeg)) {
        std::cout << "Round peg r5 fits round hole r5." << std::endl;
    }

    SquarePeg smallSqPeg(2);
    SquarePeg largeSqPeg(20);

    SquarePegAdapter smallSqPegAdapter(smallSqPeg);
    SquarePegAdapter largeSqPegAdapter(largeSqPeg);
    if (hole.fits(smallSqPegAdapter)) {
        std::cout << "Square peg w2 fits round hole r5." << std::endl;
    }
    if (!hole.fits(largeSqPegAdapter)) {
        std::cout << "Square peg w20 does not fit into round hole r5." << std::endl;
    }
    return 0;
}

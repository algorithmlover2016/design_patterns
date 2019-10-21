#include "head.h"
#include "shapes/shape.h"

void cloneAndCompare(std::vector<Shape*> const &  ori, std::vector<Shape*> & copy) {
    for (auto const & iter : ori) {
        copy.emplace_back(iter->clone());
    }
    for (size_t index = 0; index < ori.size(); index++) {
        if (ori[index] != copy[index]) {
            if (ori[index]->equals(copy[index])) {
                std::cout << "index: " << index << " they are identical (yay!)" << std::endl;
            } else {
                std::cout << "index: " << index << " But they are not identical (booo!)" << std::endl;
            }
        } else {
            std::cout << "index: " << index << " : Shape objects are the same (booo!)" << std::endl;
        }
    }

}

int main() {
    std::vector<Shape*> ori;
    std::vector<Shape*> copy;

    Circle* circle = new Circle();
    circle->setX(10);
    circle->setY(20);
    circle->setRadius(15);
    circle->setCol("read");
    ori.emplace_back(circle);

    Rectangle* rectangle = new Rectangle();
    rectangle->setX(100);
    rectangle->setY(200);
    rectangle->setWidth(150);
    rectangle->setHeight(250);
    rectangle->setCol();
    ori.emplace_back(rectangle);

    cloneAndCompare(ori, copy);
    return 0;
}

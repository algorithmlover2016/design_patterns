#ifndef DESIGN_PATTERNS_STRUCTURAL_PATTERNS_COMPOSITE_CPP_EDITOR_IMAGE_EDITOR_H
#define DESIGN_PATTERNS_STRUCTURAL_PATTERNS_COMPOSITE_CPP_EDITOR_IMAGE_EDITOR_H
#include "head.h"
#include "shapes/shapes.h"

class ImageEditor {
public:
    void loadShapes(::std::initializer_list<Shape*> shapes); 

private:
    CompoundShape allShapes;

};
#endif

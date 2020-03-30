#include "editor/image_editor.h"

vooid ImageEditor::loadShapes (::std::initializer_list<Shape*> shapes) {
        allShapes.clear();
        allShapes.add(shapes);
        allShapes.paint("Editor execute paint");
}

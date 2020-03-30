#include "head.h"
#include "shapes/shapes.h"
#include "editor/image_editor.h"

int main() {
    ImageEditor editor;
    editor.loadShapes({
            new Circle(10, 10, 10, Color::BULE),
            new CompoundShape({
                new Circle(10, 10, 10, Color::RED),
                new Dot(160, 160, Color::BULE),
                }),

            new CompoundShape({
                new Rectangle(250, 250, 100, 100, Color::GREEN),
                new Dot(240, 240, Color::RED),
                new Dot(240, 360, Color::RED),
                new Dot(360, 360, Color::RED),
                new Dot(360, 240, Color::RED),
                })
            });
    return 0;
}

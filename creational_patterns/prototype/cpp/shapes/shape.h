#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_PROTOTYPE_CPP_SHAPES_SHAPE_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_PROTOTYPE_CPP_SHAPES_SHAPE_H

#include "head.h"

class Shape {
public:
    Shape(Shape const * const target); 
    Shape();
    virtual Shape* clone();
    virtual bool equals(Shape const * const obj) const; 
    virtual Shape* GetClassType();
    virtual ~Shape();

    void setX(int x);
    void setY(int y);
    void setCol(std::string const & col = "default");

    int getX() const;
    int getY() const;
    std::string getCol() const;

private:
    int x;
    int y;
    std::string color;

};

class Circle : public Shape {
public:
    Circle();
    Circle(Circle const * const target);
    Shape* clone();

    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Woverloaded-virtual"
    // Member declaration raising the warning.
    bool equals(Circle const * const obj) const;
    #pragma clang diagnostic pop
    Circle* GetClassType();

    int getRadius() const;
    void setRadius(int radius);


private:
    int radius;
};

class Rectangle : public Shape {
public:
    Rectangle();
    Rectangle(Rectangle const * const target);
    Shape* clone();
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Woverloaded-virtual"
    // Member declaration raising the warning.
    bool equals(Rectangle const * const target);
    #pragma clang diagnostic pop
    Rectangle* GetClassType();

    int getWidth() const;
    int getHeight() const;
    void setWidth(int width);
    void setHeight(int height);


private:
    int width;
    int height;
};

#endif

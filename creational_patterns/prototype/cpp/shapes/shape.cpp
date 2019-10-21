#include "shapes/shape.h"
#include "types/type.hpp"

Shape::Shape():x(0), y(0), color("") {
}

Shape::Shape(Shape const * const target) {
        this->x = target->x;
        this->y = target->x;
        this->color = target->color;
}

Shape::~Shape() {
}

void Shape::setX(int x) {
    this->x = x;
}

void Shape::setY(int y) {
    this->y = y;
}
void Shape::setCol(std::string const & col) {
    this->color = col;
}

int Shape::getX() const {
    return x;
}

int Shape::getY() const {
    return y;
}

std::string Shape::getCol() const {
    return color;
}
Shape* Shape::clone() {
    return new Shape(this);
}

bool Shape::equals(Shape const * const obj) const {
    if (nullptr == obj) {
        return false;
    }
    // if (typeid(*(obj->GetClassType())) != typeid(*this))  {
    //     return false;
    // }

    if (!decay_equiv<decltype(obj), decltype(this)>::value) {
        return false;
    }

    return x == obj->x && y == obj->y && color == obj->color;
}

Shape* Shape::GetClassType() {
    return this;
}

Circle::Circle():radius(0) {
}

Circle::Circle(Circle const * const target) {
    if (nullptr != target) {
        this->radius = target->radius;
        Shape::Shape(target);
    }
}

Shape* Circle::clone() {
    return new Circle(this);
}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}

bool Circle::equals(Circle const * const obj) const {
    if (nullptr == obj) {
        return false;
    }
    if (!decay_equiv<decltype(obj), decltype(this)>::value) {
        return false;
    }
    return this->radius == obj->radius && Shape::equals(obj);
}

Circle* Circle::GetClassType() {
    return this;
}

Rectangle::Rectangle():width(0), height(0) {
}

Rectangle::Rectangle(Rectangle const * const target) {
    if (nullptr != target) {
        this->width = target->width;
        this->height = target->height;
        Shape::Shape(target);

    }
}

Shape* Rectangle::clone() {
    return new Rectangle(this);
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(int width) {
    this->width = width;
}

void Rectangle::setHeight(int height) {
    this->height = height;
}

bool Rectangle::equals(Rectangle const * const obj) {
    if (nullptr == obj) {
        return false;
    }

    if (!decay_equiv<decltype(obj), decltype(this)>::value) {
        return false;
    }
    return this->width == obj->width && this->height == obj->height && Shape::equals(obj);
}

Rectangle* Rectangle::GetClassType() {
    return this;
}


#include "shapes/shape.h"
#include "types/type.hpp"

Shape::Shape():x(0), y(0), color("") {
}

Shape::Shape(Shape const * const target) : x(0), y(0), color("") {
    if (nullptr != target) {
        this->x = target->x;
        this->y = target->y;
        this->color = target->color;
    }
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
        std::cout << "obj is nullptr" << std::endl;
        return false;
    }
    // if (typeid(*(obj->GetClassType())) != typeid(*this))  {
    //     return false;
    // }

    if (!decay_equiv<decltype(obj), decltype(this)>::value) {
        std::cout << "type different" << std::endl;
        return false;
    }
    std::cout << "Shape non-null and type check ok" << std::endl;

    std::cout << std::boolalpha << (x == obj->x) << " value: " << x << "\t" << obj->x << std::endl;
    return x == obj->x && y == obj->y && color == obj->color;
}

Shape* Shape::GetClassType() {
    return this;
}

Circle::Circle():radius(0) {
}

Circle::Circle(Circle const * const target) : Shape(target) {
    if (nullptr != target) {
        this->radius = target->radius;
    } else {
        std::cout << "construct Circle error" << std::endl;
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

bool Circle::equals(Shape const * const obj) const {
    if (nullptr == obj) {
        std::cout << "obj is nullptr" << std::endl;
        return false;
    }
    Circle const * const circle = dynamic_cast<Circle const* const>(obj);
    if (!decay_equiv<decltype(circle), decltype(this)>::value) {
        std::cout << "type different" << std::endl;
        return false;
    }
    std::cout << "Circle non-null and type check ok" << std::endl;
    std::cout << std::boolalpha << (this->radius == circle->radius) <<
        " value: " << this->radius << "\t" << circle->radius << std::endl;
    return this->radius == circle->radius && Shape::equals(circle);
}

Circle* Circle::GetClassType() {
    return this;
}

Rectangle::Rectangle():width(0), height(0) {
}

Rectangle::Rectangle(Rectangle const * const target) : Shape(target) {
    if (nullptr != target) {
        this->width = target->width;
        this->height = target->height;
    } else {
        std::cout << "construct Rectangle error" << std::endl;
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

bool Rectangle::equals(Shape const * const obj) {
    if (nullptr == obj) {
        std::cout << "obj is nullptr" << std::endl;
        return false;
    }
    Rectangle const * const rectangle = dynamic_cast<Rectangle const * const>(obj);

    if (!decay_equiv<decltype(rectangle), Rectangle*>::value) {
        std::cout << "type different" << std::endl;
        return false;
    }
    std::cout << "Rectangle non-null and type check ok" << std::endl;
    std::cout << std::boolalpha << (this->width == rectangle->width) <<
        " value: " << this->width << "\t" << rectangle->width << std::endl;
    return this->width == rectangle->width && this->height == rectangle->height && Shape::equals(obj);
}

Rectangle* Rectangle::GetClassType() {
    return this;
}


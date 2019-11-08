#include "head.h"
#include "shapes/shapes.h"

Shape::~Shape() {
}

void Shape::paint(std::string const & str) const {
    std::cout << "Super Parent Shape Paint " << str << std::endl;
}

BaseShape::BaseShape(int x_, int y_, Color color_) :
    x(x_), y(y_), color(color_) {
}

int BaseShape::getX() const {
    return x;
}

int BaseShape::getY() const {
    return y;
}

void BaseShape::setX(int x) {
    this->x = x;
}

void BaseShape::setY(int y) {
    this->y = y;
}

int BaseShape::getWidth() const {
    return 0;
}

int BaseShape::getHeight() const {
    return 0;
}

void BaseShape::setWidth(int width) {
}

void BaseShape::setHeight(int height) {
}

Color BaseShape::getColor() const {
    return this->color;
}
void BaseShape::setColor(Color col_) {
    this->color = col_;
}

void BaseShape::move(int x, int y) {
    this->x += x;
    this->y += y;
}
bool BaseShape::isInsideBounds(int x, int y) const {
    return (x > getX()) && (x < getX() + getWidth())
        && (y > getY()) && (y < getY() + getHeight());
}
void BaseShape::select() {
    selected = true;
}

void BaseShape::unSelect() {
    selected = false;
}

bool BaseShape::isSelected() const {
    return selected;
}

void BaseShape::enableSelectionStyle() const {
    std::cout << "BaseShape enable selection style" << std::endl;
}

void BaseShape::disableSelectionStyle() const {
    std::cout << "BaseShape disable selection style" << std::endl;
}

void paint(std::string const & str) const {
    std::cout << "BaseShape paint function called" << std::endl;
    if (isSelected()) {
        enableSelectionStyle();
    } else {
        disableSelectionStyle();
    }
}

BaseShape::~BaseShape() {
}

Dot::Dot(int x_, int y_, Color color_) :
    BaseShape(x_, y_, color_) {
    }
int Dot::getWidth() const {
    return DOT_SIZE;
}
int Dot::getHeight() const {
    return DOT_SIZE;
}
void Dot::paint(std::string const & str) const {
    std::cout << " Dot shape paint begin " << str << std::endl;
    BaseShape::paint();
    std::cout << " Dot shape paint done" << std::endl;
}

Dot::Dot() {
}

Circle::Circle(int x_, int y_, int radius_, Color color_) :
    BaseShape(x_, y_, color_), radius(radius_) {
    }
int Circle::getWidth() const {
    return radius * 2;
}
int Circle::getHeight() const {
    return radius * 2;
}

void Circle::paint(std::string const & str) const {
    std::cout << "Circle Paint Begin " << str << std::endl;
    BaseShape::paint();
    std::cout << "Circle Paint Done" << std::endl;
}

Circle::~Circle() {
}

Rectangle::Rectangle(int x_ = 0, int y_ = 0, int width_ = 1, 
        int height_ = 1, Color color_ = Color::GRAY) :
    BaseShape(x_, y_, color_), width(width_), height(height_) {
    }

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(int width_) {
    this->width = width_
}

void Rectangle::setHeight(int height_) {
    this->height = height_;
}

void Rectangle::paint(std::string const & str) const {
    std::cout << "Rectangle Paint Begin " << str << std::endl;
    BaseShape::paint();
    std::cout << "Rectangle Paint Done " << str << std::endl;
}

Rectangle::~Rectangle() {
}



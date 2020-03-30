#ifndef DESIGN_PATTERNS_STRUCTURAL_PATTERNS_COMPOSITE_CPP_SHAPES_SHAPES_H
#define DESIGN_PATTERNS_STRUCTURAL_PATTERNS_COMPOSITE_CPP_SHAPES_SHAPES_H

#include "head.h"

enum class Color {
    RED,
    BLUE,
    GREEN,
    YELLOW,
    GRAY,
    BLACK,
    PINK
};

class Shape {
public:
    virtual int getX() const = 0;
    virtual int getY() const = 0;
    virtual void setX(int x) = 0;
    virtual void setY(int y) = 0;

    virtual int getWidth() const = 0;
    virtual int getHeight() const = 0;
    virtual void setWidth(int width) = 0;
    virtual void setHeight(int height) = 0;

    virtual Color getColor() const = 0;
    virtual void setColor(Color col_) = 0;

    virtual void move(int x, int y) = 0;

    virtual bool isInsideBounds(int x, int y) const = 0;
    virtual void select() = 0;
    virtual void unSelect() = 0;
    virtual bool isSelected() const = 0;
    virtual void paint(std::string const & str = "Shape paint") const = 0;
    virtual ~Shape() = 0;
};


class BaseShape : public Shape {
public:
    BaseShape(int x_ = 0, int y_ = 0, Color color_ = Color::RED);
    virtual int getX() const;
    virtual int getY() const; 
    virtual void setX(int x);
    virtual void setY(int y);

    virtual int getWidth() const;
    virtual int getHeight() const;
    virtual void setWidth(int width);
    virtual void setHeight(int height);

    virtual Color getColor() const;
    virtual void setColor(Color col_);

    virtual void move(int x, int y); 
    virtual bool isInsideBounds(int x, int y) const; 
    virtual void select(); 

    virtual void unSelect(); 

    virtual bool isSelected() const; 

    virtual void enableSelectionStyle() const; 

    virtual void disableSelectionStyle() const; 

    virtual void paint(std::string const & str = "BaseShape paint") const; 
    virtual ~BaseShape();
private:
    int x;
    int y;
    Color color;
    bool selected;

};

class Dot : public BaseShape {
public:
    Dot(int x_ = 0, int y_ = 0, Color color_ = Color::BLACK); 
    virtual int getWidth() const; 
    virtual int getHeight() const; 
    virtual void paint(std::string const & str = "Dot class paint") const; 

    virtual ~Dot();
private:
    int const DOT_SIZE = 30;

};

class Circle : public BaseShape {
public:
    Circle(int x_ = 0, int y_ = 0, int radius_ = 1, Color color_ = Color::GREEN);
    virtual int getWidth() const; 
    virtual int getHeight() const; 

    virtual void paint(std::string const & str = "Circle Paint") const; 

    virtual ~Circle();
private:
    int radius;
};

class Rectangle : public BaseShape {
public:
    Rectangle(int x_ = 0, int y_ = 0, int width_ = 1, 
            int height_ = 1, Color color_ = Color::GRAY);

    virtual int getWidth() const; 

    virtual int getHeight() const; 
    virtual void setWidth(int width_); 
    virtual void setHeight(int height_); 
    virtual void paint(std::string const & str = "Rectangle paint") const; 
    virtual ~Rectangle();
private:
    int width;
    int height;
};

class CompoundShape : public BaseShape {
protected:
    ::std::list<Shape*> children;
public:
    CompoundShape(::std::initializer_list<Shape*> & elements);
    void add(Shape* component);
    void add(::std::initializer_list<Shape*> & elements);
    void remove(Shape* child);
    void remove(::std::initializer_list<Shape*> & elements);
    void clear();
    bool selectChildAt(int x, int y);

    virtual int getX();
    virtual int getY();
    virtual int getWidth();
    virtual int getHeight();
    virtual void move(int x, int y);
    virtual bool isInsideBounds(int x, int y);
    virtual void unSelect();
    virtual void paint(std::string const & str = "CompoundShape paint") const;
};

#endif

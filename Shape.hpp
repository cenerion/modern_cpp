#pragma once

#include "Color.hpp"

class Shape
{
public:
    virtual ~Shape() {}
    Shape(Color c)
        :color{c}
    {};

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
private:
    Color color;
};

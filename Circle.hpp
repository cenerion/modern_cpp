#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    using Shape::Shape;
    Circle(double r);
    Circle(const Circle & other) = default;

    double getArea() const override;
    double getPerimeter() const override;
    double getRadius() const;
    void print() const override;

private:
    Circle() = delete; // doesn't allow to call default constructor

    double r_{ 1 };
};

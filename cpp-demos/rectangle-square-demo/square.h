#pragma once
#include <exception>
using namespace std;

#include "rectangle.h"

class RSquare : public ProperRectangle {
    Orientation getOrientation() const override {
        //return VERTICAL;
        //violates Liskov Substitution Principle
        throw "RSquare does not have a specific orientation";
    }
public:
    RSquare(double side ) : ProperRectangle(side, side) {}
    void setLength(double l) override {
        ProperRectangle::setLength(l);
        ProperRectangle::setWidth(l);
    }
    void setWidth(double w) override {
        ProperRectangle::setLength(w);
        ProperRectangle::setWidth(w);
    }
};


class Square : public Rectangle {
private:
    double side;
    public:
    Square(double s = 1.0) :side(s) {}
    double area() const {
        return side * side;
    }
    double perimeter() const {
        return 4 * side;
    }
    void draw() const {
        cout << "Square[ " << side << " ]"<< endl;
    }
};
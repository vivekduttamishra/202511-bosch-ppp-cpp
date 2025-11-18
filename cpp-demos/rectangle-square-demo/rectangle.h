#pragma once
#include <iostream>
using namespace std;

enum Orientation{ HORIZONTAL, VERTICAL };

class Rectangle{
private:
    double length;
    double width;
public:
    Rectangle(double l = 1.0, double w = 1.0) :length(l), width(w) {}
    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    Orientation getOrientation() const {
        return (length >= width) ? HORIZONTAL : VERTICAL;
    }

    //getter/setter for widht, height
    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }

    void draw() const {
        cout<< (getOrientation()==HORIZONTAL ? "HORIZONTAL" : "VERTICAL") << " ";
        cout << "Rectangle[ " << length << ", " << width << "]"<< endl;
    }

};
#pragma once
#include <iostream>
using namespace std;
#include "shape.h"

enum Orientation{ HORIZONTAL, VERTICAL };

class ProperRectangle :public Rectangle{
private:
    double length;
    double width;
public:
    ProperRectangle(double l = 1.0, double w = 1.0) :length(l), width(w) {}
    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    virtual Orientation getOrientation() const {
        return (length >= width) ? HORIZONTAL : VERTICAL;
    }

    //getter/setter for widht, height
    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
    void virtual setLength(double l) {
        length = l;
    }
    void virtual setWidth(double w) {
        width = w;
    }

    void draw() const {
      //  cout<< (getOrientation()==HORIZONTAL ? "HORIZONTAL" : "VERTICAL") << " ";
        cout << "Rectangle[ " << length << ", " << width << "]"<< endl;
    }

};
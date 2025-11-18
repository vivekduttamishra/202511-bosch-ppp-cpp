#pragma once
#include <iostream>
using namespace std;
#include <math.h>

enum ShapeType
{
    CIRCLE,
    RECTANGLE,
    TRIANGLE, //+1
};

class Shape
{
    ShapeType type;
    double radius;
    double width, height;
    double s1, s2, s3; //+2
public:
    Shape(double r) : type(CIRCLE), radius(r) {}

    Shape(double s1, double s2, double s3) : type(TRIANGLE), s1(s1), s2(s2), s3(s3) {} //+3

    Shape(double w, double h) : type(RECTANGLE), width(w), height(h) {}

    double area()
    {
        double area = 0;
        switch (type)
        {
        case CIRCLE:
            area = 3.14159 * radius * radius;
            break;

        case RECTANGLE: //+4
            area = width * height;
            //BUG: MISSING BREAK
        case TRIANGLE:
            auto s = perimeter() / 2;
            area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        }
        return area; // Should never reach here
    }

    double perimeter()
    {
        double perimeter = 0;
        if (type == CIRCLE)
        {
            perimeter = 2 * 3.14159 * radius;
        }
        //BUT: should be else if instead of if
        if(type==TRIANGLE) //+5
        {
            perimeter = s1 + s2 + s3;
        }
        else
        {
            perimeter = 2 * (width + height);
        }

        return perimeter;
    }

    void draw()
    {
        if (type == CIRCLE)
        {
            // Drawing logic for circle
            cout << "Circle(" << radius << ")" << endl;
        }
        else if(type==TRIANGLE) //+6
        {
            // Drawing logic for triangle
            cout << "Triangle<" << s1 << "," << s2 << "," << s3 << ">" << endl;
        }
        else
        {
            // Drawing logic for rectangle
            cout << "Rectangle[" << width << "," << height << "]" << endl;
        }
    }
};
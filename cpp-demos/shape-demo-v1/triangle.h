#pragma once 
#include <iostream>
#include <math.h>
using namespace std;
#include "shapeV2.h"

class Triangle: public Shape //+1
{
    double s1, s2, s3; //+2
public:
    Triangle(double side1, double side2, double side3) : s1(side1), s2(side2), s3(side3) {} //+3

    double area() override
    {
        auto s = perimeter() / 2;
        auto area = sqrt(s * (s - s1) * (s - s2) * (s - s1));
        return area;
    }

    double perimeter() override
    {
        auto perimeter = s1 + s2 + s3;
        return perimeter;
    }

    void draw() override
    {
        cout << "Triangle<" << s1 << "," << s2 << "," << s3 << ">" << endl;
    }
};
#pragma once
#include <iostream>
using namespace std;

class Shape{
    public:
        virtual double area()=0;
        virtual double perimeter()=0;
        virtual void draw()=0;
        virtual ~Shape()=default;
};

class Rectangle : public Shape
{
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area()
    {
        auto area = width * height;
        return area;
    }
    double perimeter()
    {
        double perimeter = 0;
        perimeter = 2 * (width + height);
        return perimeter;
    }

    void draw()
    {
         cout<<"Rectangle["<< width<<","<< height<<"]"<<endl;
    }
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area()
    {
        auto area = 3.14159 * radius * radius;
        return area;
    }
    double perimeter()
    {
        auto perimeter = 2 * 3.14159 * radius;
        return perimeter;
        
    }

    void draw()
    {
        cout<<"Circle("<< radius<<")"<<endl;
    }
};
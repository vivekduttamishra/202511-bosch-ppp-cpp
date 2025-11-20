#include <iostream>
using namespace std;
#include "shapeV2.h"
#include "triangle.h"

int main(){

    Rectangle * shapes[]={
        new ProperRectangle(3,4), // Rectangle
        new Circle(7), // Circle
        new Triangle(3,4,5), // Triangle
        nullptr
    };

    for(int i=0; shapes[i]!=nullptr ; i++){
        shapes[i]->draw();
        Rectangle * s= shapes[i];
        cout<<" Area: "<< shapes[i]->area()<<endl;
        cout<<" Perimeter: "<< shapes[i]->perimeter()<<endl;
        cout<<endl;
    }

    cout<<"sizeof(Rectangle)="<<sizeof(ProperRectangle)<<endl;
    cout<<"sizeof(Cricle)="<<sizeof(Circle)<<endl;

    return 0;
}
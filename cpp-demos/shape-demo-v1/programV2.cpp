#include <iostream>
using namespace std;
#include "shapeV2.h"
#include "triangle.h"

int main(){

    Shape * shapes[]={
        new Rectangle(3,4), // Rectangle
        new Circle(7), // Circle
        new Triangle(3,4,5), // Triangle
        nullptr
    };

    for(int i=0; shapes[i]!=nullptr ; i++){
        shapes[i]->draw();
        Shape * s= shapes[i];
        cout<<" Area: "<< shapes[i]->area()<<endl;
        cout<<" Perimeter: "<< shapes[i]->perimeter()<<endl;
        cout<<endl;
    }

    cout<<"sizeof(Rectangle)="<<sizeof(Rectangle)<<endl;
    cout<<"sizeof(Cricle)="<<sizeof(Circle)<<endl;

    return 0;
}
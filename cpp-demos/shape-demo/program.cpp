#include <iostream>
using namespace std;
#include "shape.h"


int main(){

    Shape * shapes[]={
        new Shape(3,4), // Rectangle
        new Shape(7), // Circle
        new Shape(3,4,5), // Triangle
        
        nullptr
    };

    for(int i=0; shapes[i]!=nullptr ; i++){
        shapes[i]->draw();
        cout<<" Area: "<< shapes[i]->area()<<endl;
        cout<<" Perimeter: "<< shapes[i]->perimeter()<<endl;
        cout<<endl;
    }

    cout<<"sizeof(Rectangle)="<<sizeof(Shape)<<endl;
    cout<<"sizeof(Cricle)="<<sizeof(Shape)<<endl;

    return 0;
}
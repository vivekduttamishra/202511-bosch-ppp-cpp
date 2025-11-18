#include <iostream>
#include "rectangle.h"

using namespace std;


int main(){
    Rectangle * rectangles[]={
        new Rectangle(4.0, 2.0),
        new Rectangle(3.0, 5.0),
    
        nullptr
    };

    for(auto i=0; rectangles[i]!=nullptr; i++){
        rectangles[i]->draw();
        cout<<" Area: "<< rectangles[i]->area() << endl;
        cout<<" Perimeter: "<< rectangles[i]->perimeter() << endl;
        cout<<endl;
    }
}
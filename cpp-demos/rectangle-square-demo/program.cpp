#include <iostream>
#include "rectangle.h"
#include "square.h"

using namespace std;


int main(){
    Shape * rectangles[]={
        new ProperRectangle(4.0, 2.0),
        new RSquare(3),
        new Square(5),
        new ProperRectangle(3.0, 5.0),
    
        nullptr
    };

    for(auto i=0; rectangles[i]!=nullptr; i++){
        rectangles[i]->draw();
        cout<<" Area: "<< rectangles[i]->area() << endl;
        cout<<" Perimeter: "<< rectangles[i]->perimeter() << endl;

        auto rectPtr = dynamic_cast<ProperRectangle*>(rectangles[i]);
        if(rectPtr)
            cout<<" Orientation: "<< (rectPtr->getOrientation()==HORIZONTAL ? "HORIZONTAL" : "VERTICAL") << endl;
        cout<<endl;
    }

    RSquare s(4);
    s.setLength(5); 
    s.draw();

    return 0;
}
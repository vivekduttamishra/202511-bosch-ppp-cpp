#pragma once
#include <typeinfo>
using namespace std;


class Person;
class Relation{
    Person * person;
    public:
    Relation(Person * p): person(p) {}
    virtual Person * getPerson(){return person;}
    
    const char* getType(){
        return typeid(*this).name()+1;
    }
};


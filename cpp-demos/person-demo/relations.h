#pragma once 
#include "person.h"
#include "relation.h"

class Father:public Relation{

    public:
    Father(Person * p): Relation(p) {}
};
class Son:public Relation{
    public:
    Son(Person * p): Relation(p) {}
};
class Brother:public Relation{
    public:
    Brother(Person * p): Relation(p) {}
};
class Friend:public Relation{
    public:
    Friend(Person * p): Relation(p) {}
};
class Wife:public Relation{
    public:
    Wife(Person * p): Relation(p) {}
};
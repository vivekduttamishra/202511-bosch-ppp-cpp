#pragma once    
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include "relation.h"
using namespace std;

class Person{
    string name;
    vector<Relation*> relations;
    public:
    Person(const string& n): name(n) {}
    void addRelation(Relation* r){
        relations.push_back(r);
    }

    vector<Person*> getRelations(const char * type){
        vector<Person*> result;
        
        for(auto r: relations){
            if(strcmp(r->getType(), type)==0){
                result.push_back(r->getPerson());
            }
        }

        return result;
    }

    string getName(){
        return name;
    }
};



#include <iostream>
#include "person.h"
#include "relation.h"
#include "relations.h"

using namespace std;


void printRelation(Person * person, const char * relationType){
    auto relations= person->getRelations(relationType);
    cout<< person->getName() << "'s " << relationType << "(s): \n";
    for(auto r: relations){
        cout<<"\t"<< r->getName() << endl;
    }
    cout<< endl;
}

int main(){
    auto dashrath= new Person("Dashrath");
    auto ram= new Person("Ram");
    auto laxman= new Person("Laxman");
    auto bharat= new Person("Bharat");
    auto shatrughna= new Person("Shatrughna");
    auto sita= new Person("Sita");
    auto hanuman= new Person("Hanuman");


    //represent ram's relations

    //ram's father is dashrath
    ram->addRelation(new Father(dashrath));
    //ram's brothers are laxman, bharat, shatrughna
    ram->addRelation(new Brother(laxman));
    ram->addRelation(new Brother(bharat));
    ram->addRelation(new Brother(shatrughna));
    //ram's wife is sita
    ram->addRelation(new Wife(sita));
    //ram's friend is hanuman
    ram->addRelation(new Friend(hanuman));


    printRelation(ram, "Brother");
    printRelation(ram, "Wife");
    printRelation(ram, "Friend");
    


    

}
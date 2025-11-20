#pragma once
#include <vector>
#include <iostream>
using namespace std;


class Component{
    public:
    virtual void draw(int index) const =0;
    virtual ~Component()=default;
};

class Container:public Component{
    vector<Component*> children;
    public:
    virtual void add(Component * comp){
        children.push_back(comp);
    }

    void draw(int index) const override{
        drawContainer(index);
        for(size_t i=0; i<children.size(); i++){
            children[i]->draw(index+1);
        }
    }

    virtual void drawContainer(int index) const=0;

    virtual ~Container()=default;
};

class Button:public Component{};
class TextBox:public Component{};
class Form:public Container{};
class Panel:public Container{};

inline void indexPainter(int index){
    for(int i=0; i<index; i++)
        cout<<"\t";
}

class UIFactory{
    public:
    virtual Button* createButton() const=0;
    virtual TextBox* createTextBox() const=0;
    virtual Form* createForm() const=0;
    virtual Panel* createPanel() const=0;
    virtual ~UIFactory()=default;
};


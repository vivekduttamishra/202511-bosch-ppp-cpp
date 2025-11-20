#pragma once
#include "ui.h"
#include <iostream>
using namespace std;

class SteelButton:public Button{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Steel Button " << endl;
    }
};
class SteelTextBox:public TextBox{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Steel TextBox " << endl;
    }
};
class SteelForm:public Form{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Steel Form "<< endl;
    }
};
class SteelPanel:public Panel{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Steel Panel "<< endl;
    }
};
class SteelUIFactory:public UIFactory{
    public:
    Button* createButton() const override{
        return new SteelButton();
    }
    TextBox* createTextBox() const override{
        return new SteelTextBox();
    }
    Form* createForm() const override{
        return new SteelForm();
    }
    Panel* createPanel() const override{
        return new SteelPanel();
    }
};
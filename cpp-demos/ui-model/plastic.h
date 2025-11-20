#pragma once
#include "ui.h"
#include <iostream>
using namespace std;

class PlasticButton:public Button{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Plastic Button " << endl;
    }
};
class PlasticTextBox:public TextBox{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Plastic TextBox " << endl;
    }
};
class PlasticForm:public Form{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Plastic Form "<< endl;
    }
};
class PlasticPanel:public Panel{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Plastic Panel "<< endl;
    }
};
class PlasticUIFactory:public UIFactory{
    public:
    Button* createButton() const override{
        return new PlasticButton();
    }
    TextBox* createTextBox() const override{
        return new PlasticTextBox();
    }
    Form* createForm() const override{
        return new PlasticForm();
    }
    Panel* createPanel() const override{
        return new PlasticPanel();
    }
};
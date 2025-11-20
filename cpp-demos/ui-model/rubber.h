#pragma once
#include "ui.h"
#include <iostream>
using namespace std;

class RubberButton:public Button{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Rubber Button " << endl;
    }
};
class RubberTextBox:public TextBox{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Rubber TextBox " << endl;
    }
};
class RubberForm:public Form{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Rubber Form "<< endl;
    }
};
class RubberPanel:public Panel{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Rubber Panel "<< endl;
    }
};
class RubberUIFactory:public UIFactory{
    public:
    Button* createButton() const override{
        return new RubberButton();
    }
    TextBox* createTextBox() const override{
        return new RubberTextBox();
    }
    Form* createForm() const override{
        return new RubberForm();
    }
    Panel* createPanel() const override{
        return new RubberPanel();
    }
};
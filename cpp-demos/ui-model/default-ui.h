#pragma once
#include "ui.h"
#include <iostream>
using namespace std;

class DefaultButton:public Button{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Default Button " << endl;
    }
};
class DefaultTextBox:public TextBox{
    public:
    void draw(int index) const override{
        indexPainter(index);
        cout<<"  Default TextBox " << endl;
    }
};
class DefaultForm:public Form{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Default Form "<< endl;
    }
};
class DefaultPanel:public Panel{
    public:
    void drawContainer(int index) const override{
        indexPainter(index);
        cout<<" Default Panel "<< endl;
    }
};
class DefaultUIFactory:public UIFactory{
    public:
    Button* createButton() const override{
        return new DefaultButton();
    }
    TextBox* createTextBox() const override{
        return new DefaultTextBox();
    }
    Form* createForm() const override{
        return new DefaultForm();
    }
    Panel* createPanel() const override{
        return new DefaultPanel();
    }
};
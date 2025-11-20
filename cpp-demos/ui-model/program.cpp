#include "loader.h"
#include "ui.h"
// #include "rubber.h"
// #include "steel.h"



#include <iostream>
using namespace std;

Component* poc(const UIFactory& factory){
    Form* mainForm = factory.createForm();
    Panel* formPanel = factory.createPanel();
    Panel* bottomPanel = factory.createPanel();

    formPanel->add( factory.createTextBox() );
    formPanel->add( factory.createTextBox() );
    formPanel->add( factory.createButton() );

    bottomPanel->add( factory.createButton() );
    bottomPanel->add( factory.createButton() );
    bottomPanel->add( factory.createButton() );

    mainForm->add( formPanel );
    formPanel->add( bottomPanel );

    mainForm->add( factory.createButton() );

    return mainForm;
}

int main(int argc, char** argv){
  
    //SteelUIFactory* factory = new SteelUIFactory();
    //RubberUIFactory* factory = new RubberUIFactory();

    UIFactory* factory = loadLibrary(argv[1]);


    Component* ui = poc(*factory);
    ui->draw(0);
    cout<<endl;

  

    return 0;
}
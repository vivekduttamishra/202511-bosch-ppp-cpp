#include "calculator.h"
#include <iostream>
#include <string>
using namespace std;

void testCalculator(Calculator *calculator, string testName)
{
    cout<< testName<<endl;

    calculator->calculate(2, "plus", 3);
    calculator->calculate(2, "minus", 3);
    calculator->calculate(2, "multiply", 3);
    calculator->calculate(2, "divide", 3);
    calculator->calculate(2, "mod", 3);
    calculator->calculate(12, "foo", 3);

    cout<< "---------------------"<<endl<<endl<<endl;
}

string methodStyleFormatter(int a, string operatorName, int b, int result){
    return string(operatorName+"("+to_string(a)+","+to_string(b)+") = "+to_string(result));
}


int main()
{

    auto calculator = new Calculator();

    testCalculator(calculator,"Standard Calculator Test");

    //we can extend the calculator with new operators
    calculator->addOperator( new MultiplyOperator());
    calculator->addOperator( new LambdaOperator("mod", [](int a, int b){ return a % b; }));
    testCalculator(calculator,"Extended Calculator Test");

    //we can change the formatter
    calculator->setFormatter(methodStyleFormatter);
    testCalculator(calculator,"Formatter Changed Calculator Test");

    //we can change the error presenter to display error in 'red' and result in 'green'

    calculator->setErrorPresenter([](string output){
        //ANSI escape code for red color
        cerr<< "\033[1;31mERROR: " << output << "\033[0m" << std::endl;
    });

    calculator->setResultPresenter([](string output){
        //ANSI escape code for green color
        cout<< "\033[1;32m" << output << "\033[0m" << std::endl;
    });


    testCalculator(calculator,"Custom Presenter Calculator Test");


    return 0;
}
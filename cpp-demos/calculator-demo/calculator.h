#pragma once    

#include <iostream>
#include <string>
#include <map>
#include <functional>
#include "operators.h"
using namespace std;

typedef string (* Formatter)(int a, string operatorName, int b, int result);


inline string infixFormatter(int a, string operatorName, int b, int result){
    return string(" "+to_string(a)+" "+operatorName+" "+to_string(b)+" = "+to_string(result));
}


class Calculator
{
    map<string, BinaryOperator*> operators;
    Formatter formatter; //need dependnecy injection for formatter
    function<void(string)> resultPresenter; //need dependency injection for presenter
    function<void(string)> errorPresenter;
public:

    Calculator()
    {
        //register standard available operators-->default dependnecy
        addOperator( new PlusOperator());
        addOperator( new MinusOperator());

        addOperator(new LambdaOperator("divide", [](int a, int b){ return a / b; }));

        //default formatter and presenter
        formatter = infixFormatter;
        resultPresenter = [](string output){ cout<< output << std::endl; };
        errorPresenter = [](string output){  cerr<< "ERROR:" << output << std::endl; };

    }

    void setErrorPresenter(function<void(string)> presenter){
        errorPresenter = presenter;
    }

    void setResultPresenter(function<void(string)> presenter){
        resultPresenter = presenter;
    }

    void setFormatter(Formatter fmt){
        formatter = fmt;
    }

    void addOperator(BinaryOperator * op){
        operators[op->name()] = op;
    }

    void calculate(int a, string operatorName , int b)
    {
        //step #1 find out the required operator.
        BinaryOperator * op= operators[operatorName];
        if(op==nullptr){
            string output="Invalid Operator: "+operatorName;
            errorPresenter(output);
            return;
        }

        //Step #2 perform the calculation
        auto result = op->solve(a,b);
       
          
        //step #3 format the output
        string output = formatter(a, operatorName, b, result);
        //output.append(" "+to_string(a)+" "+op->name()+" "+to_string(b)+" = "+to_string(result));
        

        //step #4 present the output
        //std::cout << output << std::endl;
        resultPresenter(output);
    }
};

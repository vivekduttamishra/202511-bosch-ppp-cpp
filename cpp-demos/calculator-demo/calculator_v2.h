#pragma once    

#include <iostream>
#include <string>
#include "operators.h"
using namespace std;


class Calculator
{
public:
    void calculate(int a, BinaryOperator * op , int b)
    {
        //step #1 calcualte the result
        //BinaryOperator * op=nullptr; //provided as method parameter (dependency injection)
        auto result = op->solve(a,b);
       
          
        //step #2 format the output
        string output;
        output.append(" "+to_string(a)+" "+op->name()+" "+to_string(b)+" = "+to_string(result));
        

        //step #3 present the output
        std::cout << output << std::endl;
    }
};

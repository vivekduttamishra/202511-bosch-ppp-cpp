#pragma once    

#include <iostream>
#include <string>
using namespace std;

class Calculator
{
public:
    void calculate(int a, const std::string &op, int b)
    {
        //step #1 calcualte the result
        auto result = 0;
        if (op == "plus")
            result = a + b;
        else if (op == "minus")
            result = a - b;
        else if (op == "multiply")
            result = a * b;
        else{
            std::cout << "Unsupported operation: " << op << std::endl;
            return;
        }
          
        //step #2 format the output
        string output;
        output.append(" "+to_string(a)+" "+op+" "+to_string(b)+" = "+to_string(result));
        

        //step #3 present the output
        std::cout << output << std::endl;
    }
};

#pragma once
#include <string>
using namespace std;


struct BinaryOperator{
    virtual string name() const =0;
    virtual int solve(int a, int b) const =0;
};

struct PlusOperator: public BinaryOperator{
    string name() const override {
        return "plus";
    }
    int solve(int a, int b) const override {
        return a + b;
    }
};

struct MinusOperator: public BinaryOperator{
    string name() const override {
        return "minus";
    }
    int solve(int a, int b) const override {
        return a - b;
    }
};


struct MultiplyOperator: public BinaryOperator{
    string name() const override {
        return "multiply";
    }
    int solve(int a, int b) const override {
        return a * b;
    }
};


//Adapter to adapt a Lambda as a BinarOperator
struct LambdaOperator: public BinaryOperator{
  
    function<int(int,int)> lambdaFunction; //this is the adapter target
    string operatorName; //this is also the adapter target

    LambdaOperator(string name, function<int(int,int)> func): operatorName(name), lambdaFunction(func) {}

    string name() const override{ return operatorName;}

    int solve(int a, int b) const override {
        return lambdaFunction(a,b);
    }
};
#include "calculator_v2.h"
#include "operators.h"


struct SpecialOperator: public BinaryOperator{
    string name() const override {
        return "sum_of_square";
    }
    int solve(int a, int b) const override {
        return a * a + b * b;
    }
};


void testCalculator(Calculator *calculator)
{

    calculator->calculate(2, new PlusOperator, 3);
    calculator->calculate(2, new MinusOperator, 3);
    calculator->calculate(2, new SpecialOperator, 3);
    // calculator->calculate(2, "multiply", 3);
    // calculator->calculate(2, "divide", 3);
    // calculator->calculate(2, "foo", 3);
}
int main()
{

    auto calculator = new Calculator();

    testCalculator(calculator);

    return 0;
}
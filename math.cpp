#include "math.hpp"
#include "arithmetic.hpp"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

Algebra::Algebra(string operation) : one(1), two(2), operation(operation) {};

int Algebra::calculate()
{
    if (operation == "add")
    {
        return one + two;
    }
    else if (operation == "subtract")
    {
        return one - two;
    }
    else if (operation == "multiply")
    {
        return one * two;
    }
    else if (operation == "divide")
    {
        if (two == 0)
        {
            throw invalid_argument("Cannot divide by zero");
        }
        return one / two;
    }
    else
    {
        throw invalid_argument("Invalid operation");
    }
}

int add(int a, int b)
{
    return a + b;
}

bool is_even(int n)
{
    return n % 2 == 0;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return a / b;
}

int operation(Algebra algebra, int one, int two)
{
    algebra.one = one;
    algebra.two = two;
    return algebra.calculate();
}

int arith_test(Arithmetic arithmetic, int a, int b, int c)
{
    arithmetic.a = a;
    arithmetic.b = b;
    int result = add(arithmetic.a, arithmetic.b);
    return arithmetic.add_divide(a, b, c);
}
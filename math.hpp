// math.hpp
#ifndef MAIN_H
#define MAIN_H

#include "arithmetic.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
#include <string>

class Algebra {
public: 
    Algebra(std::string operation);
    int calculate();
    int one;
    int two;
    std::string operation;
};
int add(int a, int b);
bool is_even(int n);
int divide(int a, int b);
int operation(Algebra algebra, int one, int two);
int arith_test(Arithmetic arithmetic, int a, int b, int c);

#endif // math
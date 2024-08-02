#include "arithmetic.hpp"
#include <iostream>

using namespace std;

Arithmetic::Arithmetic(int a, int b) {
    this->a = a;
    this->b = b;
}

int Arithmetic::add_divide(int a, int b, int c) {
    int result = (a + b) / c;
    this->a = result;
    return result;
}
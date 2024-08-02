// test.cpp
#include <gtest/gtest.h>
#include "math.hpp"
#include "arithmetic.hpp"

TEST(AdditionTest, HandlesPositiveInput) {
    EXPECT_EQ(add(3, 4), 7);
}

TEST(AdditionTest, HandlesNegativeInput) {
    EXPECT_EQ(add(-3, -4), -8);
}

TEST(AdditionTest, ResultIsNonNegativeWhenInputsAreNonNegative) {
    int result = add(5, 7);
    EXPECT_GE(result, 0);
}

TEST(AdditionTest, AdditionIsCommutative) {
    int a = 3, b = 4;
    EXPECT_EQ(add(a, b), add(b, a));
}

TEST(AdditionTest, AddingZeroReturnsSameNumber) {
    int number = 5;
    EXPECT_EQ(add(number, 0), number);
    EXPECT_EQ(add(0, number), number);
}

TEST(AdditionTest, ResultIsNotLessThanAnyPositiveInput) {
    int a = 5, b = 10;
    int result = add(a, b);
    EXPECT_LE(a, result);
    EXPECT_LE(b, result);
}

TEST(EvenTest, ZeroIsEven) {
    EXPECT_TRUE(is_even(0));
}

TEST(DivideTest, HandlesDividingByPositiveNumber) {
    EXPECT_EQ(divide(10, 2), 5);
}

TEST(OperationTest, HandlesAddition) {
    Algebra algebra("add");
    EXPECT_EQ(operation(algebra, 3, 4), 7);
}

TEST(ArithmeticTest, HandlesAddDivide) {
    Arithmetic arithmetic(3, 4);
    int result = arith_test(arithmetic, 3, 4, 2);
    EXPECT_EQ(result, 3);
}
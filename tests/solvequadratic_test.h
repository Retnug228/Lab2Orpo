#include <gtest/gtest.h>

extern "C" {
    #include "solvequadratic.h"
    #include "myfunc.h"
}


TEST(SolveQuadraticTest, NoRoots) {
    double x1, x2;
    int result = solveQuadratic(1, 0, 1, &x1, &x2);
    EXPECT_EQ(result, 0);
}

TEST(SolveQuadraticTest, OneRoot) {
    double x1, x2;
    int result = solveQuadratic(1, -2, 1, &x1, &x2);
    EXPECT_EQ(result, 1);
    EXPECT_NEAR(x1, 1.0, 0.00001);
}

TEST(SolveQuadraticTest, TwoRoots) {
    double x1, x2;
    int result = solveQuadratic(1, -3, 2, &x1, &x2);
    EXPECT_EQ(result, 2);
    EXPECT_NEAR(x1, 2.0, 0.00001);
    EXPECT_NEAR(x2, 1.0, 0.00001);
}

TEST(SolveQuadraticTest, LinearEquation) {
    double x1, x2;
    int result = solveQuadratic(0, 4, -8, &x1, &x2);
    EXPECT_EQ(result, 1);
    EXPECT_NEAR(x1, 2.0, 0.00001);
}

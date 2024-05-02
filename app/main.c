#include <stdio.h>
#include "myfunc.h"
#include "solvequadratic.h"

int main() {
    double x1, x2;
    int result;

    printf("Hello World!\n");
    result = solveQuadratic(1, -3, 2, &x1, &x2);

    if (result) {
        printf("Корни уравнения: x1 = %f, x2 = %f\n", x1, x2);
    } else {
        printf("Реальных корней нет.\n");
    }

    return myfunc(2);
}

#include <math.h>

int solveQuadratic(double a, double b, double c, double *x1, double *x2) {
    if (a == 0) {
        if (b == 0) {
            return 0;
        } else {
            *x1 = -c / b;
            return 1;
        }
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double sqrt_discriminant = sqrt(discriminant);
        *x1 = (-b + sqrt_discriminant) / (2 * a);
        *x2 = (-b - sqrt_discriminant) / (2 * a);
        return 2;
    } else if (discriminant == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } else {
        return 0;
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include "Macros.h"

double calculate_w(double x, double y)
{
    double z = Z;
    double w = 0.0;

#if IS_BETWEEN_1_3(Z)
    w = MAX(ABS(x) + ABS(y) + ABS(z), CUBE(x));
#elif IS_GREATER_3(Z)
    w = MIN(2 * x + y, SQR(2 * y - z));
#else
    printf("Error: Z = %d is out of range (1 < z < 3 or z > 3)\n", Z);
#endif

    return w;
}
#pragma once
#include <stdio.h>

#define Z 2

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define SQR(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

#define IS_BETWEEN_1_3(z) (((z) > 1) && ((z) < 3))
#define IS_GREATER_3(z) ((z) > 3)

#define PRINTI(w) puts("control output:"); \
                  printf(#w " = %d\n", (int)(w))

#define PRINTR(w) puts("result:"); \
                  printf(#w " = %lf\n", (double)(w))

double calculate_w(double x, double y);
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "Macros.h"

int main()
{
    puts("Lab 9.2. Using macros and preprocessing directives (Variant 3)");

    double x, y, w;
    char ch;

    do
    {
        // Умовна компіляція інформаційного повідомлення про активну гілку
#if IS_BETWEEN_1_3(Z)
        puts("\nActive branch: 1 < z < 3 -> w = max(|x| + |y| + |z|, x^3)");
#elif IS_GREATER_3(Z)
        puts("\nActive branch: z > 3 -> w = min(2x + y, (2y - z)^2)");
#else
        puts("\nWarning: Z does not satisfy any branch condition!");
#endif

        PRINTI(Z); // Контрольний вивід значення константи Z

        printf("Input x = ");
        scanf("%lf", &x);
        PRINTR(x); // Контрольний вивід x

        printf("Input y = ");
        scanf("%lf", &y);
        PRINTR(y); // Контрольний вивід y

        // Обчислення та виведення результату
        w = calculate_w(x, y);
        PRINTR(w);

        puts("Repeat? y / n");
        ch = _getch();
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
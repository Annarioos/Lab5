#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, ".UTF8");

    const long double k = 7.0;
    long double a, b, y, x;

    printf("Программа вычисления функции (Вариант 9)\n");
    printf("Введите значение параметра x: ");
    scanf("%Lf", &x);

    a = powl(k + x, 3);
    b = log10l(fabsl(k * x));
    y = powl(b, 2) + sqrtl(fabsl(a));

    printf("Результаты: a = %.3Lf, b = %.3Lf, y = %.3Lf\n\n", a, b, y);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

long double c_psi(long double x, long double y, long double z);

int main() {
    setlocale(LC_CTYPE, ".UTF8");

    long double x, y, z;
    long double psi;

    printf("Расчет (Вариант 9)\n");
    printf("Подсказка:\n x = 182.5\n y = 18.225\n z = -0.03298\n");
    printf("Ответ: 1.2131\n\n");

    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);
    printf("Введите значение z: ");
    scanf("%lf", &z);

    psi = c_psi(x, y, z);

    printf("\nРезультат\n");
    printf("Значение функции psi = %.4lf\n", psi);
    return 0;
}

long double c_psi(long double x, long double y, long double z)
{
    long double n1, n2, psi;

    n1 = fabsl(powl(x, y/ x) - powl(y /x, 1.0 / 3.0));
    n2 = (y -x) * (cosl(y) - z / (y- x)) / (1.0 + powl(y - x, 2.0));
    psi = n1 + n2;
    return psi;
}

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    
    long double x, y, z;
    long double n1, n2, psi;

    printf("--- Расчет (Вариант 9) ---\n");
    printf("Подсказка:\n  x = 182.5\n  y = 18.225\n  z = -0.03298\n");
    printf("Ответ: 1.2131.\n\n");

    printf("Введите значение x: ");
    scanf("%Lf", &x);
    printf("Введите значение y: ");
    scanf("%Lf", &y);
    printf("Введите значение z: ");
    scanf("%Lf", &z);

    n1 = fabsl(powl(x, y / x) - pow(y / x,1./3));
    n2 = (y - x) * (cosl(y) - z / (y - x)) / (1.0 + powl(y - x, 2));
    psi = n1 + n2;

    printf("\n--- РЕЗУЛЬТАТ ---\n");
    printf("Значение функции psi = %.4Lf\n", psi);

    return 0;
}

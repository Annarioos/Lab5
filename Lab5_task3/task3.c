#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int n1(void);
int n2(void);
int n3(long double a, long double b, long double y);

int main(void) 
{
    setlocale(LC_CTYPE, ".UTF8");
    n1();
    n2();
    return 0;
}

int n1(void) 
{
    long double x, r, s;
    long double x1 = 30.0;
    long double x2 = 60.0;
    long double x3 = 90.0;

    long double r1, r2, r3;
    long double s1, s2, s3;

    printf("Программа расчета sin(x) из градусов.\nВведите x: ");
    scanf("%Lf", &x);

    r = x * M_PI / 180.0;
    s = sinl(r);
    printf("sin(%.0Lf град) = %.6Lf\n\n", x, s);

    r1 = x1 * M_PI / 180.0;
    s1 = sinl(r1);

    r2 = x2 * M_PI / 180.0;
    s2 = sinl(r2);

    r3 = x3 * M_PI / 180.0;
    s3 = sinl(r3);

    printf("проверка 1: sin(%.0Lf) = %.6Lf\n", x1, s1);
    printf("проверка 2: sin(%.0Lf) = %.6Lf\n", x2, s2);
    printf("проверка 3: sin(%.0Lf) = %.6Lf\n\n", x3, s3);
    return 0;
}

int n2(void) 
{
    const long double k = 7.0;
    long double a, b, y, x;

    printf("Программа вычисления функции (Вариант 9)\n");
    printf("Введите значение параметра x: ");
    scanf("%Lf", &x);

    a = powl(k + x, 3);
    b = log10l(fabsl(k * x));
    y = powl(b, 2) + sqrtl(fabsl(a));

    printf("Результаты: a = %.3Lf, b = %.3Lf, y = %.3Lf\n\n", a, b, y);
    n3(a, b, y);

    return 0;
}
int n3(long double a, long double b, long double y) 
{
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("Целые части для Задания 3\n");
    printf("A = %d, B = %d, C = %d\n\n", A, B, C);

    int us_a = (A % 2 == 0) ^ (B % 2 == 0);
    int us_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("а) Только одно из чисел A(a) и B(b) четное:\nУсловие выполнено (1 - да, 0 - нет): %d\n остаток от деления A на 2 равен: %d, остаток B на 2 равен: %d\n\n", us_a, A % 2, B % 2);
    printf("б) Каждое из чисел A(a), B(b), C(y) кратно трем:\nУсловие выполнено (1 - да, 0 - нет): %d\n остаток от деления на 3: A = %d, для B = %d, для C = %d\n", us_b, A % 3, B % 3, C % 3);

    return 0;
}

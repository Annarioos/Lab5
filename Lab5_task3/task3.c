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

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("Целые части для Задания 3\n");
    printf("A = %d, B = %d, C = %d\n\n", A, B, C);

    int punkt_a = (A % 2 == 0) ^ (B % 2 == 0);
    int punkt_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("а) Только одно из чисел A(a) и B(b) четное:\nУсловие выполнено (1 - да, 0 - нет): %d\nОстаток от деления A на 2 равен: %d, остаток B на 2 равен: %d\n\n", punkt_a, A % 2, B % 2);

    printf("б) Каждое из чисел A(a), B(b), C(y) кратно трем:\nУсловие выполнено (1 - да, 0 - нет): %d\nПодтверждение остатков от деления на 3: A = %d, для B = %d, для C = %d\n", punkt_b, A % 3, B % 3, C % 3);
    return 0;
}
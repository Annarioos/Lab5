#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, ".UTF8");
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

    printf("Контроль 1: sin(%.0Lf) = %.6Lf\n", x1, s1);
    printf("Контроль 2: sin(%.0Lf) = %.6Lf\n", x2, s2);
    printf("Контроль 3: sin(%.0Lf) = %.6Lf\n", x3, s3);

    return 0;
}
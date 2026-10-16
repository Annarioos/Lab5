#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int n_1();
double n_2();
int n_3(double x);

int main()
{
    setlocale(LC_CTYPE, ".UTF8");
    double s_x;
    n_1();
    s_x = n_2();
    n_3(s_x);
    return 0;
}

int n_1()
{
    double gr;
    double agl;

    double x1 = 30.0, x2 = 60.0, x3 = 90.0;
    double s1, s2, s3;

    puts("Введите угол в градусах (для расчета sin):");
    scanf("%lf", &gr);

    agl = sin(gr * M_PI / 180);
    printf("sin(%.0f град) = %.6f\n\n", gr, agl);

    s1 = sin(x1 * M_PI / 180.0);
    s2 = sin(x2 * M_PI / 180.0);
    s3 = sin(x3 * M_PI / 180.0);

    puts("Контрольные точки для sin(x):");
    printf("Контроль 1: sin(%.0f) = %.6f\n", x1, s1);
    printf("Контроль 2: sin(%.0f) = %.6f\n", x2, s2);
    printf("Контроль 3: sin(%.0f) = %.6f\n\n", x3, s3);

    return 0;
}

double n_2()
{
    double x;
    double b;
    double a;
    double y;
    double k = 7.0;

    puts("Введите число x для расчета формулы:");
    scanf("%lf", &x);
    printf("x = %.0f\n", x);

    a = pow(k + x, 3);
    b = log10(fabs(k * x));
    y = pow(b, 2) + sqrt(fabs(a));

    printf("Результаты Варианта 9:\na = %.3f, b= %.3f, y = %.3f\n\n", a, b, y);

    return x;
}

int n_3(double x)
{
    double b;
    double a;
    double y;
    double k = 7.0;

    int A;
    int B;
    int C;
    int usl_1;
    int usl_2;
    printf("Задание 3 для ранее введенного x= %.0f\n", x);

    a = pow(k + x, 3);
    b = log10(fabs(k * x));
    y = pow(b, 2) + sqrt(fabs(a));
    
    A = (int)a;
    B = (int)b;
    C = (int)y;
    
    usl_1 = (A % 2 == 0) != (B% 2 == 0);
    usl_2 = (A %3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);
    printf("Только одно из чисел A и B четное, условие выполнено (1 - да, 0 - нет): %d\n", usl_1);
    printf("Каждое из чисел A, B и C кратно трем,условие выполнено (1 - да, 0 - нет): %d\n\n", usl_2);
    return 0;
}

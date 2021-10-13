#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, c, k;
    printf("Введите три числа:");
    scanf("%f %f %f", &a, &b, &c);
    k = a;
    a = b;
    b = c;
    c = k;
    printf("Ответ %.3f %.3f %.3f\n", a, b, c);
}

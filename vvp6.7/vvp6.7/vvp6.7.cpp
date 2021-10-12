#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Rus");
    float a, y, x;
    printf("Введите значение A: ");
    scanf("%f", &a);
    y = a * a * a * a * a * a;
    x = a * a * a * a * a * a;
    printf("Ответ %f\n", y * x * a * a * a);
}
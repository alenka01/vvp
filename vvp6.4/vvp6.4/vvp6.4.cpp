#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Rus");
    float x, y;
    printf("Введите значение переменной x: ");
    scanf("%f", &x);
    y = (float)3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    printf("Ответ %f\n", y);
}
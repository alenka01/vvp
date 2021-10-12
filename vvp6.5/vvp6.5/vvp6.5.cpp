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
    y = (float)4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    printf("Ответ %f\n", y);
}
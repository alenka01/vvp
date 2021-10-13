#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Rus");
    float a, y;
    printf("Введите значение A: ");
    scanf("%f", &a);
     y = pow(a,6);
    printf("Ответ %f\n", y * a * a);
}

﻿#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    printf("Введите два числа:");
    scanf("%d %d", &a, &b);
    c = b;
    b = a;
    a = c;
    printf("Ответ %d %d\n", a, b);
}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, k;
    printf("Введите три числа:");
    scanf("%d %d %d", &a, &b, &c);
    k = a;
    a = c;
    c = b;
    b = k;
    printf("Ответ %d %d %d\n", a, b, c);
}
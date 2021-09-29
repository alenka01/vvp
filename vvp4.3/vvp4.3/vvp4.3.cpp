#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите два числа");
	scanf("%d %d", &a, &b);
	printf("Среднее арифметическое чисел: %.3f\n", (float)(a + b) / 2);

}

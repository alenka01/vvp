#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите числа");
	scanf("%d %d", &a, &b);
	printf("Сумма модулей %d\n", abs(a) + abs(b));
	printf("Произведение модулей %d\n", abs(a) * abs(b));
	printf("Частное модулей %f\n", (float)abs(a) / abs(b));
	printf("Разность модулей %d\n", abs(a) - abs(b));
}

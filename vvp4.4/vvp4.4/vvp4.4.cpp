#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите числа");
	scanf("%d %d", &a, &b);
	if (a != 0 || b != 0)
	{
		printf("Сумма квадрата %d\n", a * a + b * b);
		printf("Произведение квадратов %d\n", a * a * b * b);
		printf("Частное квадратов %f\n", (float)(a * a) / (b * b));
		printf("Разность квадратов %d\n", a * a - b * b);
	}
	else
	{
		printf("Error");
	}
}




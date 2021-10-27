#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, x;
	printf("Введите коэффициенты A и B соответственно:");
	scanf("%f%f", &a, &b);
	if (a != 0)
		x = -b / a;
	else
		printf("Error");
	printf("Ответ:%f\n", x);
}
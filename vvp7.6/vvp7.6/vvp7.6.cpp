#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float a1, b1, a2, b2, x, y,c1,c2;
	printf("Введите коэффициенты первого уравнения A1, B1 и C1 соответственно");
	scanf("%f%f%f", &a1, &b1,&c1);
	printf("Введите коэффициенты второго уравнения A2, B2 и C1 соответственно");
	scanf("%f%f%f", &a2, &b2, &c2);
	x = (c1 * b1 - c2 * b2) / (a1 * b2 - a2 * b1);
	y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	printf("Ответ: %.3f %.3f\n", x, y);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf("Координаты первой точки");
	scanf("%d", &a);
	printf("Координаты второй точки");
	scanf("%d", &b);
	printf("Координаты третьей точки");
	scanf("%d", &c);
	printf("Длина первого отрезка: %d\n", abs(a - c));
	printf("Длина второго отрезка: %d\n", abs(b - c));
	printf("Сумма длин отрезков: %d", abs(a - c) + abs(b - c));
}

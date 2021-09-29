#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf("Координаты первой точки(a)");
	scanf("%d", &a);
	printf("Координаты второй точки(b)");
	scanf("%d", &b);
	printf("Координаты третьей точки(c)");
	scanf("%d", &c);
	if (c>a && c<b)
	{
		printf("Произведение длин отрезков: %d", abs(a - c) * abs(b - c));
	}
	else
	{
		printf("Не подходит по условию\n");
	}
	
}

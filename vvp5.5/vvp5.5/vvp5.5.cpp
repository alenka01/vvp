#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x1, x2, y1, y2, x3, y3;
	float k, l, m, p;
	setlocale(LC_ALL, "Rus");
	printf("Введите координаты одной точки");
	scanf("%d%d", &x1, &y1);
	printf("Введите координаты второй точки");
	scanf("%d%d", &x2, &y2);
	printf("Введите координаты второй точки");
	scanf("%d%d", &x3, &y3);
	k = (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	m = (float)sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	l = (float)sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = (float)(k + m + l) / 2;
	printf("Площадь треугольника: %f", sqrt(p * (p - l) * (p - k) * (p - m)));
	printf("Периметр треугольника: %f", k+m+l);
}


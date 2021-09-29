#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x1, x2, y1, y2;
	float k, l, m;
	setlocale(LC_ALL, "Rus");
	printf("Введите координаты одной точки");
	scanf("%d%d", &x1, &y1);
	printf("Введите координаты второй точки");
	scanf("%d%d", &x2, &y2);
	k = (float)abs(y1 - y2);
	m = (float)abs(x1 - x2);
	l = (float)sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));
	printf("Площадь треугольника: %f", (k * m)/2);
	printf("Периметр треугольника: %f", k + m + l);
}


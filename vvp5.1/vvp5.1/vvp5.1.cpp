#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x1, x2, y1, y2;
	setlocale(LC_ALL, "Rus");
	printf("Введите координаты одной точки");
	scanf("%d%d", &x1, &y1);
	printf("Введите координаты второй точки");
	scanf("%d%d", &x2, &y2);
	printf("Расстояние между точками: %.3f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

}

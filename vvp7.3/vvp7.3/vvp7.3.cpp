#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float x, y, a,c,z;
	printf("Введите x");
	scanf("%f", &x);
	printf("Введите A");
	scanf("%f", &a);
	printf("Введите Y");
	scanf("%f", &y);
	c = a / x;
	z = c * y;
	printf("1кг стоит: %f\n", c);
	printf("%.3f кг стоит:%f\n",y, z);
}
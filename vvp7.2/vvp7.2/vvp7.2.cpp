#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include < math.h >
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, m;
	printf("Введите угол в радианах");
	scanf("%f", &a);
	m = (float)a * 180 /3.14;
	printf("Значение в радианах: %f\.1n", round(m));

}
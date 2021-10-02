#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float a,m;
	printf("Введите угол");
	scanf("%f", &a);
	m =(float) a*3.14/180;
	printf("Значение в радианах: %f\n", m);

}

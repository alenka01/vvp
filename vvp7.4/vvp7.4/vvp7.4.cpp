#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	float v1, v2, s, v, t,s1;
	printf("Введите скорости первого и второго автомобиля соотвественно:");
	scanf("%f%f", &v1, &v2);
	printf("Введите расстояние и время соотвественно:");
	scanf("%f%f", &s, &t);
	v = v1 + v2;
	s1 = v / t+s;
	printf("Расстояние между автомобилями через %f часа равно: %f", t, s1);
	
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int  d;
	setlocale(LC_ALL, "Rus");
	printf("Диаметр окружности:");
	scanf("%d", &d);
	if (d >= 0)
	{
		;
		printf("Длина окружности: %.3f\n", (float)d * 3.14);
	}
	else
	{
		printf("Error\n");
	}

}

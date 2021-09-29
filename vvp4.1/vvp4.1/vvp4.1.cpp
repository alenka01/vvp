#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, p, s;
	printf("Cтороны прямоугольника:");
	scanf("%d %d", &a, &b);
	if (a >= 0 && b >= 0)
	{
		p = (2 * (a + b));
		s = (a * b);
		printf("Периметр равен: %d\n", p);
		printf("Площадь равна: %d\n", s);
	}
	else
	{
		printf("Error\n");
	}
}

#include<string>
#include<iostream>
#include<math.h>
using namespace std;
float PowerA3(float a) 
{
	a = pow(a, 3);
	return a;
}
int Sign(float x) 
{
	if (x < 0)
		x = -1;
	if (x == 0)
		x = 0;
	if (x > 0)
		x = 1;
	return x;
}
float RingS(float r1, float r2) 
{
	float s1, s2, s;
		s1 = 3.14 * pow(r1, 2);
		s2 = 3.14 * pow(r2, 2);
		s = s1 - s2;
		return s;
}
int Quarter(float x, float y) 
{
	int k;
	if (x > 0 && y > 0)
		k = 1;
	if (x < 0 && y > 0)
		k = 2;
	if (x < 0 && y < 0)
		k = 3;
	if (x > 0 && y < 0)
		k = 4;
	return k;
}
float Fact2(int n) 
{
	float x;
	x = 1;
	if (n % 2 == 0) 
	{
		for (int i = 2; i <= n;) 
		{
			x = x * i;
			i = i + 2;
	    }
	}
	if (n % 2 != 0)
	{
		for (int i = 1; i <= n;)
		{
			x = x * i;
			i = i + 2;
		}
	}
	return x;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, x, y, nm, n, pp, g1, g2;
	float l, k, d, m, p, r1, r2, r11, r22, r111, r222;
	cout<<"Введите номер задания: ";
	cin >> nm;
	if (nm == 1)
	{
		cout<<"Введите 5 чисел для возведения в третью степень \n ";
		 int a[5];
		for (int i = 0; i < 5; i++) {
		     cout << "a[" << i + 1 << "]" << ": ";
			cin >> a[i];
		}
		for (int i=0; i < 5; i++) {
			a[i] = PowerA3(a[i]);
			cout << a[i]<<" ";
		}
	}
	if (nm == 2) 
	{
		cout << "Введите два числа: ";
		cin >> a>>b;
		x = Sign(a) + Sign(b);
		cout << "Сумма:" << x;
	}
	if (nm == 3) 
	{
		float s1, s2, s3;
		cout << "Введите внешний и внутренний радиус для первого кольца: ";
		cin >> r1 >> r2;
		cout << "Введите внешний и внутренний радиус для второго кольца: ";
		cin >> r11 >> r22;
		cout << "Введите внешний и внутренний радиус для третьего кольца: ";
		cin >> r111 >> r222;
		if (r1 > r2 && r1 > 0 && r2 > 0)
		{
			s1 = RingS(r1, r2);
			cout << "Площадь первого кольца: " << s1 << " ";
		}
		else
			cout << "error";
		if (r11 > r22 && r11 > 0 && r22 > 0)
		{
			s2 = RingS(r11, r22);
			cout << "Площадь второго кольца: " << s2 << " ";
		}
		else
			cout << "error ";
		if (r111 > r222 && r111 > 0 && r222 > 0)
		{
			s3 = RingS(r111, r222);
			cout << "Площадь третьего кольца: " << s3 << " ";
		}
		else
			cout << "error";
	}
	if (nm == 4) 
	{
		float x1, y1, x2, y2, x3, y3;
		cout << "Введите координаты для первой точки: ";
		cin >> x1 >> y1;
		cout << Quarter(x1, y1)<<"\n";
		cout << "Введите координаты для второй точки: ";
		cin >> x2 >> y2;
		cout << Quarter(x2, y2) << "\n";
		cout << "Введите координаты для третьей точки: ";
		cin >> x3 >> y3;
		cout << Quarter(x3, y3) << "\n";
	}
	if (nm == 5) 
	{
		cout << "Введите число: ";
		cin >> a;
		cout << Fact2(a);
	}

}
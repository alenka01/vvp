#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	int n, nm,n1;
	cout << "Введите номер задания: ";
	cin >> nm;
	if (nm == 1) 
	{
		cout << "n= ";
		cin >> n;
		n1 = n * 2;
		int *a = new int[n1];

		for (int i = 1; i < n1;)
		{
			a[i] = i;
			cout << a[i] << "";
			i = i + 2;
		}
	}
	if (nm == 2) 
	{
		int a, d;
		cout << "Введите количество значений в геометрической прогрессии (n>1), первый член геометрической прогрессии A и знаменатель D: ";
		cout << "n= ";
		cin >> n;
		cout << "A= ";
		cin >> a;
		cout << "D= ";
		cin >> d;
		int* b = new int[n];
		for (int i = 0; i < n; i++) 
		{
				b[i] = a * pow(a, i);
			cout << b[i] << " ";
		}
	}
	if (nm == 3) 
	{
		int a, b,sum=0;
		
		cout << "введите количество элементов N(N>2), первый элемент А и второй элемент В: ";
		cin >> n >> a >> b;
		int* d = new int[n];
		d[1] = a;
		d[2] = b;
		d[3] = a + b;
		sum = d[1] + d[2];
		cout << d[1] << " "<< d[2]<<" "<<d[3]<<" ";
		for (int i = 4; i < n; i++) 
		{
				d[i] = d[i - 1] + sum;
				sum = d[i-1] + sum;
			cout << d[i] << " ";
		}
	}
	if (nm == 4) 
	{
		int a, b,ch=1,cn=1;
		cout << "Введите длину массива: ";
		cin >> n;
		int* d = new int[n];
		for (int i = 1; i <= n; i++)
		{
			cout << "d[" << i << "]=" << " ";
			cin >> d[i];
			
		}
		cout << "Новый массив: \n ";
		for (int i = 1; i <= n; i++)
		{
			if (i == 1)
				cout << d[i] << " ";
			if ((i % 2 != 0) && (i > 1)) 
			{
			cout << d[i-ch]<<" ";
			ch = ch + 1;

			}
				
			if (i == 2)
			{
				cout << d[n] << " ";
			}
							
			if ((i % 2 == 0) && (i != 2)) 
			{
				cout << d[n-cn]<<" ";
				cn = cn + 1;
			}
		}
					
			
	}
	if (nm == 5)
	{
		int n;
		cout << "Введите длину массива N: ";
		cin >> n;
		int* d = new int[n];
		for (int i = 1; i <= n; i++) 
		{
			cout << "d[" << i << "]=";
			cin >> d[i];
		}
		for (int i = 1; i <= n; i++) 
		{
			if (i % 2 != 0)
				cout << d[i] << " ";
		}
		for (int i = n; i>=1; i--)
		{
			if (i % 2 == 0)
				cout << d[i] << " ";
		}
	}
}
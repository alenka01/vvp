#include<iostream>
#include<cmath>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int nm;
	cout << "Введите номер задания: ";
	cin >> nm;
	if (nm == 1) 
	{
		int n, sum = 0;
		int k, l, lk,d;
		float ar;
		cout << "Введите длину массива N и целые числа K и L: ";
		cin >> n >> k >> l;
		lk = l - k + 1;
		int* a = new int[n];
		if ((k < l) && (l < n) && (1 < k))
		{
			for (int i = 0; i < n; i++)
			{
				cout << "a[" << i << "]=";
				cin >> a[i];
			}
			d = l + 1;
			for  (k; k < d; k++)
			{
				sum = sum + a[k];
			}
			ar =(float) sum /lk;
			cout << sum<<" "<<ar;

		}
		else
			cout << "error";
	}
	if (nm == 2)
	{
		int n, b,b1;
		cout << "Количество символов в массиве N= ";
		cin >> n;
		int* a = new int[n];
		cout << "Заполните массив различными числами \n";
		for (int i = 0; i < n; i++) 
		{
			cout << "a[" << i << "]= ";
			cin >> a[i];
		}
		b = a[1] - a[0];
		b1 = a[2] - a[1];
		if (b == b1) 
		{
			cout << "разность прогресии: "<<b;
		}
		else 
		{
			cout << "0";
		}
	}
	if (nm == 3) 
	{
		int n, min = 1000;
		cout << "Введите количество элементов массива N= ";
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; i++) 
		{
			cout << "a[" << i << "]=";
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) 
		{
			if (i % 2 == 0) 
			{
				if (i < min) 
				{
					min = a[i];
				}
			}
			
		}
		cout << min;
	}
	if (nm == 4)
	{
		int n, max = 0,k;
		cout << "Введите количество элементов массива N= ";
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "]=";
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if ((a[i]>a[i-1]) && (a[i]>a[i+1]))
			{
				max = a[i];
				k = i;
			}	
			
		}
		cout << k;
	}
	if (nm == 5)
	{
		int n,k,l,m;
		cout << "Введите количество символов в массиве N= ";
		cin >> n;
		cout << "Заполните массив, внутри которого ровно два одинаковых элемента \n";
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "]=";
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) 
		{
			m = a[i];
			for (int j = i+1; j < n; j++)
				if (m == a[j])
				{
					k = i;
					l = j;
				}
		}
		cout << k << " " << l;
	}
	
}
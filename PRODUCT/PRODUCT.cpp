// Sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int prod = 1, counter = 0;
	while (1)
	{
		int a;
		counter++;
		cout << "a[" << counter << "] = ";
		cin >> a;
		if (a != 0)
			prod *= a;
		else
			break;
	}
	cout << "PRODUCT=" << prod;
}

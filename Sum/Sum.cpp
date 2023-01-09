// Sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int sum = 0, counter = 0;
	while (1)
	{
		int a ;
		counter++;
		cout << "a[" << counter << "] = ";
		cin >> a;
		if (a != 0)
			sum += a;
		else
			break;
	}
	cout <<"SUM="<< sum;
}

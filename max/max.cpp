// Sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int a, counter = 0;
	int temp =-2147483647;
	while (1)
	{
		counter++;
		cout << "a["<<counter<<"] = ";
		cin >> a;
		if (a != 0) {
			a > temp ? temp = a : true;
		}
		else
			break;
	}
	cout << "MAX=" << temp;
}

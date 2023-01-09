// Sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int sum = 0, counter = 0;
	while (1)
	{
		int a;
		cout << "Enter the number = ";
		cin >> a;
		if (a != 0) {
			a % 2 == 1 ? counter++ : true;
		}
		else
			break;
	}
	switch (counter) {
	case 0:
		cout << "There were no odd numbers";
		break;
	case 1:
		cout << "There was " << counter << " odd number";
		break;
	default:
		cout << "There were " << counter << " odd numbers";
	}
}

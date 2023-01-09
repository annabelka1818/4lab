// fibonacci.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
 
using namespace std;

int fibonacci(int x) {
	int res;
	((x == 1) || (x == 0)) ?res = x : res = (fibonacci(x - 1) + fibonacci(x - 2));
	return res;
}


int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	cout << "F(" << n << ") = " << fibonacci(n);
}


// parrot2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	char st[256]="";
	while (true)
	{
		cin.getline(st,256);
		if (st[0] == '\0')
			break;
		cout << st;	
	}
}

// hit2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>   
#include <time.h> 
using namespace std;

int main()
{
	double x0, y0, r, x = 0, y = 0;
	double temp = 0;
	srand(time(NULL));
	x0 = (rand() % 100 - 60) / 10.0;
	y0 = (rand() % 100 - 60) / 10.0;
	r = (rand() % 50) / 10.0;
	cin >> x >> y;
	while ((x - x0)*(x - x0) + (y - y0)*(y - y0) > r*r) {
		cout << "Try again! ";
		temp = (x - x0)*(x - x0) + (y - y0)*(y - y0);
		cin >> x >> y;
		if (temp > (x - x0)*(x - x0) + (y - y0)*(y - y0))
			cout << "Closer!\n";
		else
			cout << "Farther!\n";
	}
	cout << "Point (" << x << ", " << y << ") is in circle centered at a point (" << x0 << ", " << y0 << ") radius " << r << "\n";

}

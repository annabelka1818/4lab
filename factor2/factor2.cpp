#include <iostream>
#include <math.h>
int Fact(int n) {
	return n <= 1 ? 1 : n * Fact(n - 1);
}
using namespace std;
int main()
{
	double a;
	double n;
	cout << "N = ";
	cin >> n;
	if (!cin) {
		cout <<"Error: N must a number, no a string!";
		return 0;
	}
	else if (n < 0) {
		cout << "Error: N must be positive number!";
		return 0;

	}
	else if (modf(n, &a) != 0.0) {
		cout << "Error: N must be natutral number!";
		return 0;
	}
	cout << n << "! = " << Fact(n);
}
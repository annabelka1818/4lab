#include <iostream>
long int Fact(int n) {
	return n <= 1 ? 1 : n * Fact(n - 1);
 }
int main()
{
	int n;
	std::cin >> n;
	std::cout << Fact(n);
}
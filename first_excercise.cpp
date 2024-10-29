#include <iostream>

int main()
{
	int a = 10;
	int b = 5;

	int tmp = a;
	a = b;
	b = tmp;
	std:: cout << "a: " << a << ' ' << "b: " << b;
}
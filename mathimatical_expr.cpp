#include <iostream>

int main()
{
	int x = 4;
	int y = x++;
	std:: cout << "x = " << x << '\n' << "y = " << y << '\n';
	x = 4;
	int z = ++x;
	std:: cout << "x = " << x << '\n' << "z = " << z << '\n';

}

/// 1
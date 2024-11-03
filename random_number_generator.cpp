#include <ctime>
#include <cstdlib>
#include <iostream>

int main()
{
	srand(time(nullptr));
	int num = rand() % 10;
	std:: cout << num << std:: endl;
}
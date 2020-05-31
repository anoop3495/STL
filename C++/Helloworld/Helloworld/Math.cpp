#include <iostream>
#include "Log.h"

int multiply(int a, int b)
{
	return a * b;
}

void multiplyandlog(int a, int b)
{
	int result;
	result = multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	multiplyandlog(3, 2);
	multiplyandlog(5, 4);
	multiplyandlog(7, 6);
	std::cin.get();
}



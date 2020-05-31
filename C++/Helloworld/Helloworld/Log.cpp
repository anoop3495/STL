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


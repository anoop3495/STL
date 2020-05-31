#include <iostream>
#include "Log.h"

static int multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

int main()
{
	std::cout << multiply(5, 8) << std::endl;
	std::cin.get();
}



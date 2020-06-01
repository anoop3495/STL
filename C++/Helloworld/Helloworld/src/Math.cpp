#include "Log.h"


int main()
{
	int a = 5;
	int b = 10;
	int* ptr = &a;
	ptr = &b;
	*ptr = 12;

	multiplyandlog(a, b);
	std::cin.get();
}



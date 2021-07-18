
/*
A lambda is an unnamed function that is useful (in actual programming, not theory) 
for short snippets of code that are impossible to reuse .*/
#include <iostream>
#include <typeinfo>

void lamdaFunctions()
{
	int a = 1;
	int b = 1;

	auto lamda1 = [=](){ std::cout << a << "  " << b << std::endl; };
	auto lamda2 = [&](){ std::cout << a << "  " << b << std::endl; };
	auto lamda3 = [a,&b](){ std::cout << a << "  " << b << std::endl; };
	auto lamda4 = [&,b](){ std::cout << a << "  " << b << std::endl; };

	a++;
	b--;

	lamda1();
	lamda2();
	lamda3();
	lamda4();

	[](){}(); // call of empty lambda 
}

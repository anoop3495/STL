#include "Visitor_pattern.h"
#include "IteratorPattern.h"

int main()
{
	std::cout << "Iterator Pattern " << std::endl;
	iteratorCall();
	
	std::cout << "Visitor Pattern " << std::endl;
	callPattern1();

	std::cin.get();
}
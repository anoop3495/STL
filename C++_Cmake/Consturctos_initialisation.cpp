/*
When different constuctors are initialised in different ways and based on object declaration
type constructors are called. 
*/

#include <iostream>
#include <initializer_list>

class constuctors_init
{
public:
	constuctors_init(){ std::cout << "constuctors_initX() "  << std::endl; }
	constuctors_init(int){ std::cout << "constuctors_init(int) "  << std::endl; }
	constuctors_init(int,int){ std::cout << "constuctors_initint,int) "  << std::endl; }
	constuctors_init(int,int,int){ std::cout << "constuctors_init(int,int,int) "  << std::endl; }
	constuctors_init(std::initializer_list<int>){ std::cout << "constuctors_init(std::initializer_list<int>) "  << std::endl; }
	~constuctors_init() { std::cout << "~constuctors_init() "  << std::endl; }
};

/*int main()
{
	constuctors_init obj1;
	constuctors_init obj2( 7 );
	constuctors_init obj3( 1, 1 );
	constuctors_init obj4( 0, 9, 2 );
	constuctors_init obj9{ 0, 9, 2, 4, 5, 6, 2, 1, 1, 7 };
	return 0;
}*/

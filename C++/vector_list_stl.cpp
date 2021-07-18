/*
The use of standard template libraries from standad library 
functions. Here you could find the use of list and vector from
STL. 
*/

#include "vectorStlStd.h"


void stlVectorStd()
{
	std::list<int> list_stl{ 1, 2, 3 };   // {} => C++11
	std::vector<int> vector_stl{ 5, 6, 7 };

	list_stl.push_back( 5 );
	list_stl.push_front( 6 );

	vector_stl.push_back( 8 );
	vector_stl.push_back( 9 ); // vec.push_front( 22 );

	// sequencial traversation
	for( std::list<int>::iterator i( list_stl.begin() ); i != list_stl.end(); ++i )
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	// indexed traversation
	for( int i = 0; i < vector_stl.size(); ++i )
	{
		std::cout << vector_stl[i] << " ";
	}
	std::cout << std::endl;
	// sequencial traversation
	for( std::vector<int>::iterator i( vector_stl.begin() ); i != vector_stl.end(); ++i )
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

}


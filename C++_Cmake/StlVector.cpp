/*
The following descibes the method to create a userdefined
vector which is similar to stl::vectors
*/


#include "stlVectors.h"

void stlVector()
{
	VectorStl vectorObj;

	vectorObj.push_back( 1 );
	vectorObj.push_back( 2 );
	vectorObj.push_back( 3 );
	vectorObj.push_back( 4 );
	vectorObj.push_back( 10 );

	for( unsigned long i = 0; i < vectorObj.size(); ++i )
	{
		std::cout << vectorObj[i] << "  ";
	}
	std::cout << std::endl;

}


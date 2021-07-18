/*

This concept was introduced from C++ 11.

the concept of move semantics is introduced to move the contents of the objects from one object to another. 
The value whose address can be referenced in called lvalue and the value that exists only during 
the expression evaluation is called rvalue

*/

#include "Semantic.h"

unsigned long movieSemantic::n = 0;

movieSemantic run()
{
	movieSemantic tmp;
	return tmp;
}

void semanticCall()
{
	movieSemantic obj = run();
	movieSemantic obj2 = obj;
	movieSemantic &&r = run(); // r-value reference

	obj.call();

}

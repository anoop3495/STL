/*
This program describes the use of overide function and concept of object oriented
programming concept called encapsulation.

The method to declare object used was heap, which means the declared object has 
to be deleted manually . If we dont delete the delcared object the  unused memory 
resouces would be blocked even after execution of program.

This method of dynamic memory allocation is not allowed in embedded programming.

*/

#include "Overide_Encapsulation_heap_method.h"

void call( Base *ptr )
{
	ptr->m();
}

void mainCall()
{
	Base *p = new Parent();

	call( p );

	delete p;

}

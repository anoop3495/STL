/*

This program describes the use of overide function and concept of object oriented
programming concept called encapsulation.

The method to declare object used was stack, which means the object goes out of scope
once the program execution is finished.

This method of static memory allocation is allowed in embedded programming.
*/

#include "Overide_Encapsulation_stack_method.h"


void call(BaseStack&r )
{
	r.m();
}

void callStack()
{
	BaseStack obj;

	call( obj );

}

#pragma once

#ifndef OVERLOADSTACK_HPP
#define OVERLOADSTACK_HPP

#include <iostream>

class BaseStack
{
public:
	BaseStack() { std::cout << "Base constructor" << std::endl; }
	~BaseStack() { std::cout << "Base destructor" << std::endl; }

	virtual void m() { std::cout << "Overide function from base" << std::endl; }
};

class  ParentStack : public BaseStack
{
public:
	ParentStack() { std::cout << "ParentStack constructor" << std::endl; }
	~ParentStack() { std::cout << "ParentStack destructor" << std::endl; }

	void m() { std::cout << "Overide function from parent" << std::endl; }
};

void call(BaseStack& r);

void callStack();
#endif // !OVERLOADSTACK_HPP

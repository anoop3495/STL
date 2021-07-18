#pragma once

#ifndef OVERLOADHEAP_HPP
#define OVERLOADHEAP_HPP
#include <iostream>

class Base
{
public:
	Base() { std::cout << "Base constructor" << std::endl; }
	virtual ~Base() { std::cout << "Base destructor" << std::endl; }

	virtual void m() { std::cout << "Override function base" << std::endl; }
};

class Parent : public Base
{
public:
	Parent() { std::cout << "Parent constructor" << std::endl; }
	~Parent() { std::cout << "Parent destructor" << std::endl; }

	void m() { std::cout << "Override function parent" << std::endl; }
};
void call(Base* ptr);
void mainCall();

#endif // !OVERLOADHEAP_HPP

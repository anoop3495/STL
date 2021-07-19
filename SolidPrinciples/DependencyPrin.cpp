#include <iostream>
#include<string>

class Employee
{
private:
	std::string name;
public:
	virtual void setter(std::string name1)
	{
		name = name1;
	}
	std::string const getter()
	{
		return this->name;
	}
	virtual void print() = 0;
};

class Developer: public Employee
{
public:
	void print()
	{	
		Employee::setter("Anoop");
		std::cout << "DeveloperAdded    " <<Employee::getter() <<std::endl;
	}
};

class Designer : public Employee
{
public:
	void print()
	{
		Employee::setter("Alex");
		std::cout << "Designer                 " << Employee::getter() << std::endl;
	}
};

class Manager
{
Developer Dev;
Designer Deg;
public:
	void AllEmployees()
	{
		Dev.print();
		Deg.print();
	}
};

int main()
{
	Manager m;
	m.AllEmployees();
	std::cin.get();
}
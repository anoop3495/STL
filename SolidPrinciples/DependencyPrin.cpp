#include "DependencyPrin.h"

std::string const Employee::getter()
{
  return this->name;
}

void Developer::print()
{
  Employee::setter("Anoop");
  std::cout << "Developer   " << Employee::getter() << std::endl;
}

void Designer::print()
{
  Employee::setter("Alex");
  std::cout << "Designer  " << Employee::getter() << std::endl;
}

void Manager::AllEmployees()
{
  Manager::Dev.print();
  Manager::Deg.print();
}
void callDependency()
{
	Manager m;
	m.AllEmployees();
}
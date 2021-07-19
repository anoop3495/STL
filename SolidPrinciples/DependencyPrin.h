#pragma once
#ifndef DEPENDENCYPRIN_HPP
#define DEPENDENCYPRIN_HPP
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
  std::string const getter();
  virtual void print() = 0;
};

class Developer : public Employee
{
public:
  void print();
};

class Designer : public Employee
{
public:
  void print();
};

class Manager
{
  Developer Dev;
  Designer Deg;
public:
  void AllEmployees();
};

void callDependency();
#endif // !DEPENDENCYPRIN_HPP

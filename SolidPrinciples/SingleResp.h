#pragma once
#ifndef SINGLERESP_HPP
#define SINGLERESP_HPP
#include <iostream>
#include <vector>

class Geometry
{
private:
  int a;
  std::vector<int> array;
public:
  Geometry(const int& b) :a(b) {}
  void add(const int& element);
  std::vector<int> getEntries() const;
  int getValue() const;
};

class SRP
{
public:
  static void print(const Geometry& geo);
};
void callSRP();
#endif // !SINGLERESP_HPP

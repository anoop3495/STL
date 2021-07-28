#pragma once
#ifndef SINGLERESP_HPP
#define SINGLERESP_HPP
#include <iostream>
#include <vector>

class AreaRec
{
private:
  int a;
  int b;
public:
  AreaRec(const int& c, const int& d) : a(c), b(d) {}
  int calculate();

};

class PreRec
{
private:
  float a;
  float b;
public:
  PreRec(const float& c, const float& d) : a(c), b(d) {}
  float calculate();

};

template<typename T> void print(T ans);

void callSRP();
#endif // !SINGLERESP_HPP

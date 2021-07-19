#pragma once
#ifndef LIKOVSKIS_HPP
#define LIKOVSKIS_HPP
#include <iostream>
#include <string>
#include <vector>
class Areas
{
private:
  float h;
  float w;
public:
  Areas(float height, float width) :h(height), w(width) {}
  virtual void SetterH(float height) { h = height; }
  virtual void SetterW(float width) { w = width; }
  float GetterH() const { return this->h; }
  float GetterW() const { return this->w; }
  float calculate() { return w * h; }
};

void result(Areas& A);

void callLikovskis();
#endif // !LIKOVSKIS_HPP

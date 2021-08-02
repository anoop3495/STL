#pragma once
#ifndef OPENCLOSED_HPP
#define OPENCLOSED_HPP
#include <iostream>
#include <vector>
#include <string>

enum Shape { SQUARE, CIRCLE};

class ShapeGeo
{
private:
  Shape shapeObje1;
public:
  ShapeGeo(Shape s) : shapeObje1(s) {};
  virtual const Shape& getSize() const { return this->shapeObje1; }
  virtual void calculateArea() = 0;
};

class SqaureAreaSpecShape : public ShapeGeo
{
private:
  int side;

public:
  explicit SqaureAreaSpecShape(int s) :ShapeGeo(SQUARE), side(s) {}
  int getter() { return this->side; }
  virtual void calculateArea();
};

class CircleAreaSpecShape : public ShapeGeo
{
private:
  int radius;

public:
  explicit CircleAreaSpecShape(int a) :ShapeGeo(CIRCLE), radius(a) {}
  int getter() { return this->radius; }
  virtual void calculateArea();
};
void openclosed();

#endif // !OPENCLOSED_HPP


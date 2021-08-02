#include"OpenClosed.h"
void CircleAreaSpecShape::calculateArea()
{
  std::cout<<ShapeGeo::getSize()<<(CircleAreaSpecShape::getter()* 3.14);
}

void SqaureAreaSpecShape::calculateArea()
{
  std::cout << ShapeGeo::getSize() << SqaureAreaSpecShape::getter() *SqaureAreaSpecShape::getter();
}
void openclosed()
{
  SqaureAreaSpecShape s(4);
  s.calculateArea();

  CircleAreaSpecShape c(3);
  c.calculateArea();


}
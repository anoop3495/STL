#include "SingleResp.h"

void Geometry::add(const int& element)
{
  array.emplace_back(element);
}
std::vector<int> Geometry::getEntries() const
{
  return this->array;
}
int Geometry::getValue() const
{
  return this->a;
}

void SRP::print(const Geometry& geo)
{
  for (const auto& entrie : geo.getEntries())
  {
    std::cout << entrie << std::endl;
  }
}
void callSRP()
{
    Geometry geo(5);
    geo.add(6);
    geo.add(7);
    geo.add(8);
    geo.add(9);
    geo.add(10);
    SRP::print(geo);
}
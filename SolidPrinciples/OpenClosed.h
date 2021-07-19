#pragma once
#ifndef OPENCLOSED_HPP
#define OPENCLOSED_HPP
#include <iostream>
#include <vector>
#include <string>

enum class Size { ONE, TWO, THREE };

class Dim
{
private:
  Size size1;
  std::string name;
public:
  Dim(Size size, std::string name1) :size1(size), name(name1) {}
  const Size& getSize() const { return this->size1; }
  void print() { std::cout << " Type =" << this->name << std::endl; }

};

template <typename T>
class SizeSpec {
public:
  virtual bool valid(T* item) = 0;
};

class SizeSpecShape : public SizeSpec<Dim>
{
private:
  Size size2;

public:
  explicit SizeSpecShape(const Size size) :size2(size) {}
  bool valid(Dim* dim) override { return dim->getSize() == this->size2; }
};

template <typename T>
class Filter
{
public:
  virtual std::vector<T*> filter(std::vector<T*> items, SizeSpec<T>& spec) = 0;
};

class DimFil : public Filter<Dim>
{
public:
  std::vector<Dim*> filter(std::vector<Dim*> items, SizeSpec<Dim>& spec) override
  {
    std::vector<Dim*> results;
    for (const auto& item : items)
    {
      if (spec.valid(item))
      {
        results.emplace_back(item);
      }
    }
    return results;
  }
};
void openclosed();

#endif // !OPENCLOSED_HPP


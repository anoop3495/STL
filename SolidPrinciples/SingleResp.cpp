#include <iostream>
#include <vector>


class Geometry
{
private:
    int a;
    std::vector<int> array;
public:
    Geometry(const int& b) :a(b){}
    void add(const int& element)
    {
        array.emplace_back(element);
    }
    std::vector<int> getEntries() const { return this->array; }
    int getValue() const { return this->a; }
};

class SRP
{
public:
    static void print(const Geometry& geo)
    {
        for (const auto& entrie : geo.getEntries())
        {
            std::cout << entrie<<std::endl;
        }
    }
};

/*int main() {
    Geometry geo(5);
    geo.add(6);
    geo.add(7);
    geo.add(8);
    geo.add(9);
    geo.add(10);
    SRP::print(geo);
    std::cin.get();
}*/
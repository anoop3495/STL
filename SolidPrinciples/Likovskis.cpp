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
    float calculate () { return w * h; }
};

void result(Areas& A)
{
    float wid = A.GetterW();
    A.SetterH(10);
    std::cout << "area expect = " << (10 * wid) << " get result area = " << A.calculate() << std::endl;
}

/*int main() {

    Areas rectangle(7,8);
    result(rectangle); 

    std::cin.get();
}*/
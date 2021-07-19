#include"Likovskis.h"

void result(Areas& A)
{
    float wid = A.GetterW();
    A.SetterH(10);
    std::cout << "area expect = " << (10 * wid) << " get result area = " << A.calculate() << std::endl;
}

void callLikovskis() {

    Areas rectangle(7,8);
    result(rectangle);

    std::cin.get();
}
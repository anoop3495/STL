
#include "Adaptor.h"
#include <iostream>
void Shapes::DrawFunc()
{
    std::cout << "LegacyRectangle:  DrawFunc.  (" << x1_ << "," << y1_ <<
        ") => (" << x2_ << "," << y2_ << ")" << std::endl;
}

void Adaptor::draw()
{
    std::cout << "Adapter: draw." << std::endl;
    DrawFunc();
}
void adaptorCallFunc()
{
    Geometry* r = new Adaptor(120, 200, 60, 40);
    r->draw();
}
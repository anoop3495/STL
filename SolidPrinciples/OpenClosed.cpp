#include"OpenClosed.h"

void openclosed()
{

	Dim Rect(Size::ONE, "Rectangle");
	Dim Squ(Size::TWO, "Square");
	Dim Tri(Size::THREE, "Triangle");

	std::vector<Dim*> Shapes = { &Rect, &Squ, &Tri};
	DimFil dimfil;
	SizeSpecShape large(Size::THREE);
	auto Biggest = dimfil.filter(Shapes, large);
	std::cout << "Large product : " << std::endl;
	for (const auto& big : Biggest)
	{
		big->print();
	}

}
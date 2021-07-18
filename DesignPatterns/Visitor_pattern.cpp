#include "Visitor_pattern.h"

void VisitorCaller::VisitCaller(Callercall* const)
{
    std::cout << "Visitor 1: Visited." << std::endl;
}

void Callercall::accept(Visitor& visitor)
{
    visitor.VisitCaller(this);
}

void callPattern1()
{
    Callercall call;
    VisitorCaller visitor;
    call.accept(visitor);
}

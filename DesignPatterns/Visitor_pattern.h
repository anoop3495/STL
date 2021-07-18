#pragma once
#ifndef VISITOR_PATTERN_HPP
#define VISITOR_PATTERN_HPP

#include <iostream>

class Caller;
class Callercall;

class Visitor
{
public:
    virtual ~Visitor() {}

    virtual void VisitCaller(Callercall* const element) = 0;
};

class VisitorCaller : public Visitor
{
public:
    ~VisitorCaller() {}

    void VisitCaller(Callercall* const);
};

class Caller
{
public:
    virtual ~Caller() {}

    virtual void accept(Visitor& visitor) = 0;
};

class Callercall : public Caller
{
public:
    ~Callercall() {}

    void accept(Visitor& visitor);
};
void callPattern1();
#endif // !VISITOR_PATTERN_HPP


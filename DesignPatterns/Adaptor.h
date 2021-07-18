#pragma once
#ifndef ADAPTOR_HPP
#define ADAPTOR_HPP

#include<iostream>

typedef int position;
typedef int Meas;

class Geometry
{
public:
    virtual void draw() = 0;
};

class Shapes
{
public:
    Shapes(position x1, position y1, position x2, position y2)
    {
        x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;
        std::cout << "LegacyRectangle:  create.  (" << x1_ << "," << y1_ << ") => ("
            << x2_ << "," << y2_ << ")" << std::endl;
    }
    void DrawFunc();

private:
    position x1_;
    position y1_;
    position x2_;
    position y2_;
};

class Adaptor : public Geometry, private Shapes
{
public:
    Adaptor(position x, position y, Meas w, Meas h) :
        Shapes(x, y, x + w, y + h)
    {
        std::cout << "Adapter: create.  (" << x << "," << y <<
            "), width = " << w << ", height = " << h <<std::endl;
    }
    virtual void draw();
};

void adaptorCallFunc();

#endif // !ADAPTOR_HPP

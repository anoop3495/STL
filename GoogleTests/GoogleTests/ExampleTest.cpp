//
// pch.cpp
//

#include "ExampleTest.h"

int fibonacci(int value)
{
    auto result = 1;
    while (value > 0)
    {
        result *= value;
        --value;
    }
    return result;
}

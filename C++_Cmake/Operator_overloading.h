#pragma once

#ifndef OPERATOR_OVERLOADING_HPP
#define OPERATOR_OVERLOADING_HPP
#include<iostream>
const int SIZE = 10;
class overloadConcept {
private:
    int arr[SIZE];

public:
    overloadConcept() {
        int i;
        for (i = 0; i < SIZE; i++) {
            arr[i] = i;
        }
    }
    int& operator[](int i)
    {
        if (i > SIZE) {
            std::cout << "Index greater than size" << std::endl;
            // return first element.
            return arr[0];
        }

        return arr[i];
    }
};

void callOverLoadFunc();

#endif // !OVERLOAINGPOPERATOR_HPP

#include <iostream>
using namespace std;

#include"Operator_overloading.h"

void callOverLoadFunc() {
    overloadConcept A;

    cout << "Value of A[2] : " << A[1] << endl;
    cout << "Value of A[5] : " << A[2] << endl;
    cout << "Value of A[12] : " << A[100] << endl;

}
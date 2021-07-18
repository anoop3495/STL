#include <iostream>
using namespace std;

#include "IteratorPattern.h"

Iter* node::createIterator()const
{
    return new Iter(this);
}

bool operator == (const node& n1, const node& n2)
{
    Iter* it1 = n1.createIterator();
    Iter* it2 = n2.createIterator();
    for (it1->first(), it2->first(); !it1->isDone(); it1->next(), it2->next())
        if (it1->currentItem() != it2->currentItem())
            break;
    bool ans = it1->isDone() && it2->isDone();
    delete it1;
    delete it2;
    return ans;
}

void iteratorCall()
{
    node n1;
    for (int i = 1; i < 5; i++)
        n1.push(i);
    node n2(n1), n3(n1), n4(n1), n5(n1);
    n3.pop();
    n5.pop();
    n4.push(2);
    n5.push(9);
    cout << "1 == 2 is " << (n1 == n2) << endl;
    cout << "1 == 3 is " << (n1 == n3) << endl;
    cout << "1 == 4 is " << (n1 == n4) << endl;
    cout << "1 == 5 is " << (n1 == n5) << endl;
}
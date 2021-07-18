#pragma once
#ifndef ITERATORPATTERN_HPP
#define ITERATORPATTERN_HPP

class node
{
    int arr1[10];
    int s;
public:
    friend class Iter;
    node()
    {
        s = -1;
    }
    void push(int in)
    {
        arr1[++s] = in;
    }
    int pop()
    {
        return arr1[s--];
    }
    bool isEmpty()
    {
        return (s == -1);
    }
    Iter* createIterator()const; // 2. Add a createIterator() member
};

class Iter
{
    // 1. Design an "iterator" class
    const node* stk;
    int index;
public:
    Iter(const node* s)
    {
        stk = s;
    }
    void first()
    {
        index = 0;
    }
    void next()
    {
        index++;
    }
    bool isDone()
    {
        return index == stk->s + 1;
    }
    int currentItem()
    {
        return stk->arr1[index];
    }
};

void iteratorCall();

#endif // !ITERATORPATTERN_HPP

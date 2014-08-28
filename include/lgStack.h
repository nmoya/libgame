#ifndef LGSTACK_H
#define LGSTACK_H

#include "libgame.h"

class lgStack
{
private:
    int *stack;
    int capacity;
    int nbr_elems;

public:
    lgStack(int size = 20);
    ~lgStack();
    void push(int val);
    int pop();
    int size() const;
    bool full() const;
    bool empty() const;
    void print() const;
};

#endif
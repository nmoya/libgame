#ifndef LGSTACK_H
#define LGSTACK_H

#include "libgame.h"

template <class T>
class lgStack
{
private:
    T *stack;
    int capacity;
    int nbr_elems;

public:
    lgStack(int size = 20)
    {
        this->stack     = new T[size];
        this->capacity  = size;
        this->nbr_elems = 0;
    }
    ~lgStack()
    {
        delete[] this->stack;
    }
    void push(T value)
    {
        if (this->full())
            lgError("Stack is full, cannot push.", "lgStack::push");

        this->stack[this->nbr_elems++] = value;
    }
    T pop()
    {
        if (this->empty())
            lgError("Stack is empty, cannot pop.", "lgStack::pop");

        return this->stack[--this->nbr_elems];
    }
    int size() const
    {
        return this->nbr_elems;
    }
    bool full() const
    {
        return this->nbr_elems == this->capacity;
    }
    bool empty() const
    {
        return this->nbr_elems == 0;
    }
    void print() const
    {
        int i = this->nbr_elems - 1;
        //cout << "Size: " << this->nbr_elems << endl;
        if (this->empty())
            cout << "Empty stack" << endl;
        else
        {
            while (i >= 0)
                cout << this->stack[i--] << " ";
            cout << endl;
        }
    }
};

#endif
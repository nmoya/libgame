#include "lgStack.h"

lgStack::lgStack(int size)
{
    this->stack     = new int[size];
    this->capacity  = size;
    this->nbr_elems = 0;
}
lgStack::~lgStack()
{
    delete[] this->stack;
}
void lgStack::push(int value)
{
    if (this->full())
        lgError("Stack is full, cannot push.", "lgStack::push");

    this->stack[this->nbr_elems++] = value;
}
int lgStack::pop()
{
    if (this->empty())
    	lgError("Stack is empty, cannot pop.", "lgStack::pop");
    
    return this->stack[--this->nbr_elems];
}
int lgStack::size() const
{
    return this->nbr_elems;
}
bool lgStack::full() const
{
    return this->nbr_elems == this->capacity;
}
bool lgStack::empty() const
{
    return this->nbr_elems == 0;
}
void lgStack::print() const
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
#ifndef LGTSTACK_H
#define LGTSTACK_H

#include "libgame.h"

template<class T>
class Item
{
    T Data;
public:
    Item() : Data( T() )
    {}

    void SetData(T nValue)
    {
        Data = nValue;
    }

    T GetData() const
    {
        return Data;
    }

    void PrintData()
    {
        cout << Data << endl;
    }
};

#endif
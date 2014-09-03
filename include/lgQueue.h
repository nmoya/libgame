#ifndef LGQUEUE_H
#define LGQUEUE_H

#include "libgame.h"

template <class T>
class lgQueue
{
private:
    T *queue;
    int capacity;
    int first;
    int last;
    int nbr_elems;

public:
    lgQueue(int size = 20)
    {
        this->queue     = new T[size];
        this->capacity  = size;
        this->first = 0;
        this->last = 0;
        this->nbr_elems = 0;
    }
    ~lgQueue()
    {
        delete[] this->queue;
    }
    void insert(T value)
    {
        if (this->full())
            lgError("Queue is full, cannot insert.", "lgQueue::insert");

        this->queue[this->last++] = value;
        this->nbr_elems++;
        if (this->last == this->capacity)
            this->last = 0;
    }
    T remove()
    {
        if (this->empty())
            lgError("Queue is empty, cannot remove.", "lgQueue::remove");

        T value = this->queue[this->first++];
        this->nbr_elems--;
        if (this->first == this->capacity)
            this->first = 0;

        return value;
    }
    int size() const
    {
        return this->nbr_elems;
    }
    bool full() const
    {
        return (this->first == this->last) && (this->nbr_elems != 0);
    }
    bool empty() const
    {
        return this->nbr_elems == 0;
    }
    void print() const
    {
        int counter = this->nbr_elems;
        int i = this->first;
        //cout << "Size: " << this->nbr_elems << endl;
        if (this->empty())
            cout << "Empty queue" << endl;
        else
        {
            while (counter > 0)
            {
                cout << this->queue[i++] << " ";
                counter--;
                if(i == capacity)
                    i = 0;
            }
            cout << endl;
        }
    }
};

#endif
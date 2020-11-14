#pragma once

#include <string>
#include "Object.h"

template<typename T>
class List : public Object
{
private:
    T *_items;
    int _length;
    int SIZE;

    void resize(int size)
    {
        T *temp = new T[size];

        for (int i = 0; i < this->SIZE; i++)
        {
            temp[i] = this->_items[i];
        }

        delete[] this->_items;

        this->_items = temp;
        this->SIZE = size;
    }

public:
    List()
    {
        this->SIZE = 1;

        this->_items = new T[this->SIZE];
        this->_length = 0;
    }

    ~List()
    {
        delete[] this->_items;
    }

    void add(T item)
    {
        if (this->_length + 1 > this->SIZE)
        {
            this->resize(this->SIZE * 2);
        }

        this->_items[this->_length] = item;
        this->_length++;
    }

    int length()
    {
        return this->_length;
    }

    T operator[](int index)
    {
        return this->_items[index];
    }

    std::string toString() override
    {
        return "[...]";
    }
};
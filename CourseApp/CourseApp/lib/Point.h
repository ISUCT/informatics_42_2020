#pragma once

#include <string>
#include "Object.h"

struct Point : public Object
{
    double x;
    double y;

    Point() {}

    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    std::string toString() override
    {
        return "x = " + std::to_string(this->x) + "\t" +
               "y = " + std::to_string(this->y);
    }
};
#ifndef INFORMATICS_42_2020_FIGURE_H
#define INFORMATICS_42_2020_FIGURE_H

class Canvas;

#include "Canvas.h"

class Figure
{
public:
    virtual void draw(Canvas *canvas) = 0;
};

#endif //INFORMATICS_42_2020_FIGURE_H

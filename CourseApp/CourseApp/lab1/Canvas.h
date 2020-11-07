#ifndef INFORMATICS_42_2020_CANVAS_H
#define INFORMATICS_42_2020_CANVAS_H

#include <iostream>
#include "Buffer.h"
#include "Figure.h"

class Canvas
{
private:
    Buffer *buffer;

public:
    Canvas(int width, int height)
    {
        this->buffer = new Buffer(width, height);
    }

    ~Canvas()
    {
        delete this->buffer;
    }

    void draw(Figure &figure)
    {
        figure.draw(this);
    }

    void draw(char c, int x, int y)
    {
        this->buffer->put(c, x, y);
    }

    void output(std::ostream &stream)
    {
        for (int i = 0; i < this->buffer->getHeight(); i++)
        {
            for (int j = 0; j < this->buffer->getWidth(); j++)
            {
                stream << this->buffer->get(j, i);
            }

            stream << std::endl;
        }
    }
};

#endif //INFORMATICS_42_2020_CANVAS_H

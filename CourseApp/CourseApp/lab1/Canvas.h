#ifndef INFORMATICS_42_2020_CANVAS_H
#define INFORMATICS_42_2020_CANVAS_H

#include <iostream>
#include <string>
#include "Buffer.h"
#include "Figure.h"

class Canvas
{
private:
    Buffer *buffer;
    std::string symbol;

public:
    Canvas(int width, int height, std::string symbol)
    {
        this->buffer = new Buffer(width, height);
        this->symbol = symbol;
    }

    ~Canvas()
    {
        delete this->buffer;
    }

    void draw(Figure &figure)
    {
        figure.draw(this);
    }

    void draw(int x, int y)
    {
        this->buffer->put(x, y);
    }

    void output(std::ostream &stream)
    {
        for (int y = 0; y < this->buffer->getHeight(); y++)
        {
            for (int x = 0; x < this->buffer->getWidth(); x++)
            {
                std::string symbol = !this->buffer->is_empty(x, y) ? this->symbol : " ";
                stream << symbol << " ";
            }

            stream << std::endl;
        }
    }
};

#endif //INFORMATICS_42_2020_CANVAS_H

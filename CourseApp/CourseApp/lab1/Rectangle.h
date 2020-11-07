#ifndef INFORMATICS_42_2020_RECTANGLE_H
#define INFORMATICS_42_2020_RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure
{
private:
    int width;
    int height;

public:
    Rectangle(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    void draw(Canvas *canvas) override
    {
        for (int y = 0; y < this->height; y++)
        {
            if (y == 0 || y + 1 == this->height)
            {
                for (int x = 0; x < this->width; x++)
                {
                    canvas->draw('*', x, y);
                }
            }

            canvas->draw('*', 0, y);
            canvas->draw('*', this->width - 1, y);

            canvas->draw('\n', this->width, y);
        }
    }

    int getWidth() const
    {
        return this->width;
    }

    int getHeight() const
    {
        return this->height;
    }
};

#endif //INFORMATICS_42_2020_RECTANGLE_H

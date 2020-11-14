#ifndef INFORMATICS_42_2020_RECTANGLE_H
#define INFORMATICS_42_2020_RECTANGLE_H

#include "Figure.h"
#include "Line.h"

class Rectangle : public Figure
{
private:
    int xStart;
    int yStart;
    int width;
    int height;

public:
    Rectangle(int xStart, int yStart, int width, int height)
    {
        this->xStart = xStart;
        this->yStart = yStart;
        this->width = width;
        this->height = height;
    }

    void draw(Canvas *canvas) override
    {
        int rightX = xStart + width - 1;
        int bottomY = xStart + height - 1;

        Line topLine(xStart, yStart, rightX, yStart);
        Line bottomLine(xStart, bottomY, rightX, bottomY);

        Line leftLine(xStart, yStart, xStart, bottomY);
        Line rightLine(rightX, yStart, rightX, bottomY);

        canvas->draw(topLine);
        canvas->draw(bottomLine);

        canvas->draw(leftLine);
        canvas->draw(rightLine);
    }
};

#endif //INFORMATICS_42_2020_RECTANGLE_H

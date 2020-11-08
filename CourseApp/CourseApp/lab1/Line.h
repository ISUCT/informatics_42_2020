#ifndef INFORMATICS_42_2020_LINE_H
#define INFORMATICS_42_2020_LINE_H

#include "Figure.h"

class Line : public Figure
{
private:
    int xStart;
    int yStart;
    int xEnd;
    int yEnd;

public:
    Line(int xStart, int yStart, int xEnd, int yEnd)
    {
        this->xStart = xStart;
        this->yStart = yStart;
        this->xEnd = xEnd;
        this->yEnd = yEnd;
    }

    void draw(Canvas *canvas) override
    {
        int x = this->xStart;
        int y = this->yStart;

        int dx = this->xEnd - this->xStart;
        int dy = this->yEnd - this->yStart;

        int sx1 = (dx > 0) - (dx < 0);
        int sx2 = sx1;

        int sy1 = (dy > 0) - (dy < 0);
        int sy2 = 0;

        int longest = std::abs(dx);
        int shortest = std::abs(dy);

        if (longest <= shortest)
        {
            longest = std::abs(dy);
            shortest = std::abs(dx);

            sx2 = 0;
            sy2 = sy1;
        }

        int numerator = longest >> 1;

        for (int i = 0; i < longest; i++)
        {
            canvas->draw('*', x, y);
            numerator += shortest;

            if (numerator >= longest)
            {
                numerator -= longest;
                x += sx1;
                y += sy1;
            }
            else
            {
                x += sx2;
                y += sy2;
            }
        }
    }
};

#endif //INFORMATICS_42_2020_LINE_H

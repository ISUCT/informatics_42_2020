#include <iostream>

#include "lab1/lab1.h"

void drawSquare(int width, bool hasDiagonal = false)
{
    Canvas canvas(width, width, "■");

    Rectangle rectangle(0, 0, width, width);
    canvas.draw(rectangle);

    if (hasDiagonal)
    {
        Line line(0, 0, width, width);
        canvas.draw(line);
    }

    canvas.output(std::cout);
}

int main(int argc, char *argv[])
{
    drawSquare(15, true);

    return 0;
}
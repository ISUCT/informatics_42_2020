#include <iostream>

#include "lab1/lab1.h"

int main(int argc, char *argv[])
{
    auto canvas = new Canvas(20, 20);
    Rectangle rectangle(20, 20);

    canvas->draw(rectangle);
    canvas->output(std::cout);

    delete canvas;
    return 0;
}
#pragma once

#include "../lib/List.h"
#include "../lib/Point.h"

namespace lab0
{
    /**
     * Makes main calculations
     */
    double calculate(double x);

    /**
     * Solves first task
     * Gets x start, end, delta values and returns pairs of x and y
     */
    List<Point> *taskA(double xStart, double xEnd, double xDelta);

    /**
     * Solves second task
     * Gets x values and returns pairs of x and y
     */
    List<Point> *taskB(List<double> *values);
} // namespace lab0
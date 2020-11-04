#include <cmath>
#include "lab0.h"

using namespace lab0;

double lab0::calculate(const double x)
{
    if (std::abs(x) < 1)
    {
        return acos(x);
    }

    return pow(1.2, x) - pow(x, 1.2);
}

List<Point> *lab0::taskA(double xStart, double xEnd, double xDelta)
{
    auto *points = new List<Point>;

    for (double x = xStart; x <= xEnd; x += xDelta)
    {
        Point point(x, calculate(x));
        points->add(point);
    }

    return points;
}

List<Point> *lab0::taskB(List<double> *values)
{
    auto *points = new List<Point>;

    for (int i = 0; i < values->length(); i++)
    {
        auto x = (*values)[i];
        Point point(x, calculate(x));

        points->add(point);
    }

    return points;
}
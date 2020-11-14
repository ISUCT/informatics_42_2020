#include <iostream>
#include <cmath>
#include <iostream>
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

void printTaskResults(const char *title, List<Point> *results)
{
    std::cout << "=========== " << title << " ===========" << std::endl;
    std::cout << "Results: " << std::endl;

    for (int i = 0; i < results->length(); i++)
    {
        auto result = (*results)[i];
        std::cout << result.toString() << std::endl;
    }

    std::cout << std::endl;
}

void example()
{
    auto taskAResults = lab0::taskA(0.2, 2.2, 0.4);
    printTaskResults("Task A", taskAResults);

    auto *values = new List<double>;
    values->add(0.1);
    values->add(0.9);
    values->add(1.2);
    values->add(1.5);
    values->add(2.3);

    auto taskBResults = lab0::taskB(values);
    printTaskResults("Task B", taskBResults);

    delete taskAResults;
    delete taskBResults;
    delete values;
}

#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
#include "lab0.h"

double lab0::func(const double x)
{
    if (abs(x) < 1)
    {
        return acos(x);
    }

    return pow(1.2, x) - pow(x, 1.2);
}

std::vector<std::pair<double, double>> lab0::taskA(const double xStart, const double xEnd, const double xDelta)
{
    std::vector<std::pair<double, double>> results;

    for (double x = xStart; x <= xEnd; x += xDelta)
    {
        auto result = std::make_pair(x, lab0::func(x));
        results.push_back(result);
    }

    return results;
}

std::vector<std::pair<double, double>> lab0::taskB(const std::vector<double> values)
{
    std::vector<std::pair<double, double>> results;

    for (double x : values)
    {
        auto result = std::make_pair(x, lab0::func(x));
        results.push_back(result);
    }

    return results;
}

void lab0::printExampleInfo(const char *title, std::vector<std::pair<double, double>> results)
{
    std::cout << "=========== " << title << " ===========" << std::endl;
    std::cout << "Results: " << std::endl;

    for (auto result : results)
    {
        const double x = result.first;
        const double y = result.second;

        std::cout << "x = " << x << "\ty = " << y << std::endl;
    }

    std::cout << std::endl;
}

void lab0::execute()
{
    auto exampleAResults = lab0::taskA(0.2, 2.2, 0.4);
    lab0::printExampleInfo("Task A", exampleAResults);

    std::vector<double> values{0.1, 0.9, 1.2, 1.5, 2.3};
    auto exampleBResults = lab0::taskB(values);

    lab0::printExampleInfo("Task B", exampleBResults);
}
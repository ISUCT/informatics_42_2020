#include <iostream>
#include <math.h>
#include <vector>
#include <utility>

double func(const double x)
{
    if (abs(x) < 1)
    {
        return acos(x);
    }

    return pow(1.2, x) - pow(x, 1.2);
}

std::vector<std::pair<double, double>> taskA(const double xStart, const double xEnd, const double xDelta)
{
    std::vector<std::pair<double, double>> results;

    for (double x = xStart; x <= xEnd; x += xDelta)
    {
        auto result = std::make_pair(x, func(x));
        results.push_back(result);
    }

    return results;
}

std::vector<std::pair<double, double>> taskB(const std::vector<double> values)
{
    std::vector<std::pair<double, double>> results;

    for (double x : values)
    {
        auto result = std::make_pair(x, func(x));
        results.push_back(result);
    }

    return results;
}

void printExampleInfo(const char *title, std::vector<std::pair<double, double>> results)
{
    std::cout << "=========== " << title << " ===========" << std::endl;
    std::cout << "Results: " << std::endl;

    for (auto result : results)
    {
        const double x = result.first;
        const double y = result.second;

        std::cout << "  "
                  << "x = " << x << ", y = " << y << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    auto exampleAResults = taskA(0.2, 2.2, 0.4);
    printExampleInfo("Task A", exampleAResults);

    std::vector<double> values{0.1, 0.9, 1.2, 1.5, 2.3};
    auto exampleBResults = taskB(values);

    printExampleInfo("Task B", exampleBResults);

    return 0;
}
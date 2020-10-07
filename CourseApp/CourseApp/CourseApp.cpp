#include <iostream>
#include <math.h>
#include <vector>

double func(const double x)
{
    if (abs(x) < 1)
    {
        return acos(x);
    }

    return pow(1.2, x) - pow(x, 1.2);
}

std::vector<double> taskA(const double xStart, const double xEnd, const double xDelta)
{
    std::vector<double> results;

    for (double x = xStart; x <= xEnd; x += xDelta)
    {
        double result = func(x);
        results.push_back(result);
    }

    return results;
}

std::vector<double> taskB(const double *values, const int size)
{
    std::vector<double> results;

    for (int i = 0; i < size; i++)
    {
        double result = func(values[i]);
        results.push_back(result);
    }

    return results;
}

void printExampleInfo(const char *title, std::vector<double> results)
{
    std::cout << "=========== " << title << " ===========" << std::endl;
    std::cout << "Results: ";

    for (double result : results)
    {
        std::cout << result << "\t";
    }

    std::cout << std::endl;
}

int main()
{
    auto exampleAResults = taskA(0.2, 2.2, 0.4);
    printExampleInfo("Task A", exampleAResults);

    double values[] = {0.1, 0.9, 1.2, 1.5, 2.3};
    auto exampleBResults = taskB(values, sizeof(values) / sizeof(double));

    printExampleInfo("Task B", exampleBResults);

    return 0;
}
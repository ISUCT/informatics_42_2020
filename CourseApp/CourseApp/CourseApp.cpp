#include <iostream>
#include "lab0/lab0.h"

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

int main(int argc, char *argv[])
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

    return 0;
}
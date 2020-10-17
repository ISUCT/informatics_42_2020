#pragma once
#include <vector>

namespace lab0
{
    /**
     * Prints tasks results
     */
    void printExampleInfo(const char *title, std::vector<std::pair<double, double>> results);

    /**
     * Makes main calculations
     */
    double func(const double x);

    /**
     * Solves first task
     * Gets x start, end, delta values and returns pairs of x and y
     */
    std::vector<std::pair<double, double>> taskA(const double xStart, const double xEnd, const double xDelta);

    /**
     * Solves second task
     * Gets x values and returns pairs of x and y
     */
    std::vector<std::pair<double, double>> taskB(const std::vector<double> values);

    /**
     * Runs lab with tasks
     */
    void execute();
} // namespace lab0
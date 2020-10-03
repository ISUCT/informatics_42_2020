#include <iostream>
#include <math.h>

double func1(const double x)
{
    const double b = 2.5;
    const double axPow = pow(b, 3) + pow(x, 3);

    const double numerator = 1 + pow(sin(axPow), 2);
    const double denominator = pow(axPow, 1 / 3);

    return numerator / denominator;
}

int main()
{
    for (double x = 1.28; x <= 3.28; x += 0.4)
    {
        std::cout << "x = " << func1(x) << std::endl;
    }

    return 0;
}
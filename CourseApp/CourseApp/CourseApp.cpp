#include <iostream>
#include <math.h>

int main()
{
    const double a = 4.1;
    const double b = 2.7;
    double dx = 0.4;
    for (double x = 1.5; x <= 3.5; x += dx) {
        double numenator = a * pow(x, 1 / 3.0) - b * log(x) / log(5);
        double denominator = pow(log(x - 1) / log(10), 3);
        double y = numenator / denominator;

        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
    return 0;
}



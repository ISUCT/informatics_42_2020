#include <iostream>
#include <cmath>

int main() {

    const double a = 2.0;
    const double b = 3.0;

    for (double x = 0.11; x <= 0.36; x = x + 0.05)
    {
        double y = (asin(pow(x, a)) + acos(pow(x, b)));
        std::cout << "x = " << x << " y = " << y <<  std::endl;
    }

    return 0;
}
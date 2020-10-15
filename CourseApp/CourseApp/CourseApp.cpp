#include <iostream>
#include <math.h>
double func(double x, const double a = 1.6)
{
    double y = pow(a,pow(x,2)-1) - log10(pow(x,2)-1) + pow(pow(x,2)-1, 1/3.0);
    return y;
}
int main()
{
    std::cout << "Task A" << std::endl;
    double dx = 0.5;
    for (double x = 1.2 ; x <= 3.7; x += dx) 
    {
        double y = func(x);
        std::cout << "x= "<< x << " y= " << y <<std::endl;
    }
    std::cout << "------------------------------------------"<< std::endl;
    std::cout << "Task B" << std::endl;
    double  xs[5] = {1.28, 1.36, 2.47, 3.68, 4.56};
    for (int i = 0 ; i < 5; i++)  
    {
        double x = xs[i];
        double y = func(x);
        std::cout << "x= "<< x << " y= " << y <<std::endl;
    }
    return 0;
}

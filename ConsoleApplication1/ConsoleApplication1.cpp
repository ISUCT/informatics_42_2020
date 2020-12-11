#include <iostream>
#include <cmath>

double func28(double a, double b, double x)
{
    return (sin(pow(a + (b * x), 3.5))) / (1 + cos(log10(a + (b * x))));
}

double* taskA(double a, double b, double xs, double xk, double dx, double *y) {
        const int len = (xk - xs) / dx + 1;
        y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func28(a, b, i);
            k += 1;
        }
        return y;
}

void printA(double a, double b, double xs, double xk, double dx, double *y) {
    y = taskA(a,b,xs,xk,dx,y);
    int k =0;
    for (double i = xs; i <= xk; i += dx) {
        std::cout << *(y + k) << std::endl;
        k += 1;
    }
}
double* taskB(double a, double b, double x[5], double *y) {
        y = new double[5]();
        for (int i = 0; i < 5; i++) {
            y[i] = func28(0, 2.5, x[i]);
        }
        return y;
}

void printB(double a, double b, double x[5], double *y) {
    y = taskB(a,b,x,y);
    for (int i = 0; i < 5; i++) {
        std::cout << *(y + i) << std::endl;
    }
}

int main()
{
    std::string choice_task;
	double y;
    double x[5] = { 1.2, 1.36, 1.57, 1.93, 2.25 };
    const double a = 2.5;
    const double b = 4.6;
    const double xs = 1.15;
    const double xk = 3.05;
    const double dx = 0.38;
    std::cout << "Enter the letter of task: ";
    std::cin >> choice_task;
    if (choice_task == "A") {
        printA(a, b, xs, xk, dx, &y);
    }
    if (choice_task == "B") {
        printB(a, b, x, &y);
      }
        }


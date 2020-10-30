#include <iostream>
#include <cmath>

double global_len;

double func28(double a, double b, double x)
{
    return (sin(pow(a + (b * x), 3.5))) / (1 + cos(log10(a + (b * x))));
}

double* taskA(double a, double b, double xs, double xk, double dx) {
        const double len = (xk - xs) / dx + 1;
        global_len = len;
        double* y = new double[len]();
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func28(a, b, i);
            k += 1;
        } 
        return y;
}

double* taskB(double a, double b, double x[5]) {
        double* y = new double[5]();
        for (int i = 0; i < 5; i++) {
            y[i] = func28(0, 2.5, x[i]);
        }
        return y;
}

int main()
{
    std::string choice_task;
    double x[5] = { 1.2, 1.36, 1.57, 1.93, 2.25 };
    const double a = 2.5;
    const double b = 4.6;
    const double xs = 1.15;
    const double xk = 3.05;
    const double dx = 0.38;
    std::cout << "Enter the letter of task: ";
    std::cin >> choice_task;
    if (choice_task == "A") {
      double* u=taskA(a, b, xs, xk, dx);
      std::cout << "" << std::endl;
      for (int i = 0; i < sizeof(u);i++) {
          std::cout << u[i] << std::endl;
      };
    }
    if (choice_task == "B") {
        
        double* u = taskB(2.5, 4.6, x);
        for (int i = 0; i < sizeof(u); i++) {
            std::cout << u[i] << std::endl;
      }
        }

}
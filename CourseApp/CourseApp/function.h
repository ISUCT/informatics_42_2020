#pragma once
#include <iostream>
#include <cstdlib>
#include <list>
#include <cmath>
using namespace std;

class Function
{
public:

    Function()
    {
        get_task();
        get_task();
    }
    ~Function()
    {

    }
private:
    const double a = 2.0;
    const double b = 3.0;
    double xn = 0.11;
    double xk = 0.36;
    double dx = 0.05;
    int task = 1;
    list<double> listX; 
    list<double> listY;
 
    void get_task()
    {
        switch_task();
        calculation();
        print();
        clear();
    }
    void calculation()
    {   
        for (double n : listX)
        { 
            listY.emplace_back((asin(pow(n, a)) + acos(pow(n, b))));
        }
    }
    void print()
    {
        cout <<"Task #" << task << endl;
        for (double n : listX)
        {
            cout << "x = " << n << '\t';;
        }
        cout << endl;
        for (double n : listY)
        {
            cout << "y = " << n << '\t';
        }
        cout << endl;
        task++;
    }
    void switch_task()
    {
        if (task == 1)
        {
            for (double x = xn; x <= xk; x += dx)
            {
                listX.emplace_back(x);
            }
        }
        else if (task == 2)
        {
            listX = { 0.08, 0.26, 0.35, 0.41, 0.53 };
        }     
    }
    void clear()
    {
        listX.clear();
        listY.clear();
    }
}; 
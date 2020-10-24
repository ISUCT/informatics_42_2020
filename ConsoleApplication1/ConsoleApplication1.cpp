#include <iostream>
#include <cmath>

double global_len_for_A;

double func1(double a, double b, double x)
{
    return ((1 + pow(sin(pow(b, 3) + pow(x, 3)), 2)) / (pow(pow(b, 3) + pow(x, 3), 1 / 3)));
}

double func2(double a, double b, double x)
{
    return ((pow(a * x + b, 1 / 3)) / (pow(log10(x), 2)));
}

double func3(double a, double b, double x)
{
    return ((1+pow(log10(x/a),2)) / (b-exp(x/a)));
}

double func4(double a, double b, double x)
{
    return pow(fabs(pow(x,2)-2.5),0.25)+pow(log10(pow(x, 2)), 1/3);
}

double func5(double a, double b, double x)
{
    if (x > 5) {
        if ((pow((a+b*x),2.5))/(1.8+pow(cos(a*x),3)) >= 5) {
            return ((pow(log10(pow(a, 2) + x), 2) / (pow((a + x), 2))));
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }

}

double func6(double a, double b, double x)
{
    if (fabs(x) >= 1) {
        return pow(1.2, x) - pow(x, 1.2);
    }
    else {
        return acos(x);
    }
}

double func7(double a, double b, double x)
{
    return (pow(a, x) - pow(b, x)) * pow(a * b, 1 / 3) / log10(a / b);
}

double func8(double a, double b, double x)
{
    return (pow(b, 3) + pow(sin(a * x), 2)) / (acos(x * x * b) + exp(-x / 2));
}

double func9(double a, double b, double x)
{
    return log10(pow(x, 2) - 1) / (log(a * pow(x, 2) - b) / log(5));
}

double func10(double a, double b, double x)
{
    return acos(pow(x, 2) - pow(b, 2)) / asin(pow(x, 2) - pow(a, 2));
}

double func11(double a, double b, double x)
{
    return asin(pow(x, a)) + acos(pow(x, b));
}

double func12(double a, double b, double x)
{
    return pow(a,pow(x,2)-1)-log10(pow(x,2)-1)+pow(pow(x,2)-1,1/3);
}

double func13(double a, double b, double x)
{
    return (a * sqrt(x) - (b * log(x) / log(5))) / log10(fabs(x - 1));
}

double func14(double a, double b, double x)
{
    return sqrt(fabs(a - (b * x)) / pow(log10(x), 3));
}

double func15(double a, double b, double x)
{
    return pow(pow(asin(x), 2) + pow(acos(x), 4), 3);
}

double func16(double a, double b, double x)
{
    return log(fabs(pow(b,2)-pow(x,2)))/pow(fabs(pow(x,2)-pow(a,2)),1/5);
}

double func17(double a, double b, double x)
{
    return (a + pow(tan(b * x), 2)) / (b + pow(1 / tan(a * x), 2));
}

double func18(double a, double b, double x)
{
    return pow(a + (b * x), 2.5) / (1 + log10(a + (b * x)));
}

double func19(double a, double b, double x)
{
    return pow(log10(a + x), 2) / pow(a + x, 2);
}

double func20(double a, double b, double x)
{
    return (pow(x - a, 2 / 3) + pow(fabs(x + b), 1 / 5)) / pow(pow(x, 2) - pow(a + b, 2), 1 / 9);
}

double func21(double a, double b, double x)
{
    return (pow(sin(x), 3) + pow(cos(x), 3)) * log(x);
}

double func22(double a, double b, double x)
{
    return pow(a, pow(x, 2) - 1) - log10(pow(x, 2) - 1) + pow(pow(x, 2) - 1, 1 / 3);
}

double func23(double a, double b, double x)
{
    return (a * pow(x, 1 / 3) - (b * log(x) / log(5))) / pow(log10(x - 1), 3);
}

double func24(double a, double b, double x)
{
    return pow((a + (b * x)) / pow(log10(x), 3), 1 / 5);
}

double func25(double a, double b, double x)
{
    return pow(pow(asin(x), 4) + pow(acos(x), 6), 1 / 7);
}

double func26(double a, double b, double x)
{
    return (log(pow(b, 2) - pow(x, 2)) / log(a)) / (pow(fabs(pow(x, 2) - pow(a, 2)), 1 / 3));
}

double func27(double a, double b, double x)
{
    return (pow(a, 1 / 3) + pow(tan(b * x), 4.5)) / (pow(b, 1 / 5) + pow(1 / tan(a * x), 2.7));
}

double func28(double a, double b, double x)
{
    return (sin(pow(a + (b * x), 3.5))) / (1 + cos(log10(a + (b * x))));
}

double func29(double a, double b, double x)
{
    return tan(pow(log10(a + x), 3)) / pow(a + x, 2 / 7);
}

double func30(double a, double b, double x)
{
    return (pow(x - a, 1 / 3) + pow(x + b, 1 / 5)) / (pow(x, 1 / 7) - pow(pow(x, 2) - pow(a + b, 2), 1 / 9));
}

double* taskA(int choice) {
    if (choice == 1) {
        const double xs = 1.28;
        const double xk = 3.28;
        const double dx = 0.4;
        const double len = (xk - xs) / dx+1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func1(0, 2.5, i);
            k += 1;
        }
        return y;

    }
    if (choice == 2){
        const double xs = 1.14;
        const double xk = 4.24;
        const double dx = 0.62;
        const double len = (xk - xs) / dx+1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k]=func2(1.35, 0.98, i);
            k += 1;
        }
        return y;
    }
    if (choice == 3) {
        const double xs = 1.25;
        const double xk = 2.75;
        const double dx = 0.3;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func3(2.0, 0.95, i);
            k += 1;
        }
        return y;
    }
    if (choice == 4) {
            const double xs = 1.25;
            const double xk = 3.25;
            const double dx = 0.4;
            const double len = (xk - xs) / dx + 1;
            global_len_for_A = len;
            double* y = new double[len];
            int k = 0;
            for (double i = xs; i <= xk; i += dx) {
                y[k] = func4(0, 0, i);
                k += 1;
            }
            return y;
        
    }
    if (choice == 5) {
        const double xs = 3.5;
        const double xk = 6.5;
        const double dx = 0.6;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func5(-2.5, 3.4, i);
            k += 1;
        }
        return y;
    }
    if (choice == 6) {
        const double xs = 0.2;
        const double xk = 2.2;
        const double dx = 0.4;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func6(0, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 7) {
        const double xs = 3.2;
        const double xk = 6.2;
        const double dx = 0.6;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func7(0.4, 0.8, i);
            k += 1;
        }
        return y;
    }
    if (choice == 8) {
        const double xs = 0.7;
        const double xk = 2.2;
        const double dx = 0.3;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func8(1.2, 0.48, i);
            k += 1;
        }
        return y;
    }
    if (choice == 9) {
        const double xs = 1.2;
        const double xk = 2.2;
        const double dx = 0.2;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func9(1.1, 0.09, i);
            k += 1;
        }
        return y;
    }
    if (choice == 10) {
        const double xs = 0.2;
        const double xk = 0.95;
        const double dx = 0.15;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func10(0.05, 0.06, i);
            k += 1;
        }
        return y;
    }
    if (choice == 11) {
        const double xs = 0.11;
        const double xk = 0.36;
        const double dx = 0.05;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func11(2.0, 3.0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 12) {
        const double xs = 1.2;
        const double xk = 3.7;
        const double dx = 0.5;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func12(1.6, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 13) {
        const double xs = 1.2;
        const double xk = 5.2;
        const double dx = 0.8;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func13(4.1, 2.7, i);
            k += 1;
        }
        return y;
    }
    if (choice == 14) {
        const double xs = 1.81;
        const double xk = 5.31;
        const double dx = 0.7;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func14(7.2, 4.2, i);
            k += 1;
        }
        return y;
    }
    if (choice == 15) {
        const double xs = 0.26;
        const double xk = 0.66;
        const double dx = 0.08;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func15(0, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 16) {
        const double xs = 0.08;
        const double xk = 1.08;
        const double dx = 0.2;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func16(2.0, 1.1, i);
            k += 1;
        }
        return y;
    }
    if (choice == 17) {
        const double xs = 0.15;
        const double xk = 1.37;
        const double dx = 0.25;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func17(0.1, 0.5, i);
            k += 1;
        }
        return y;
    }
    if (choice == 18) {
        const double xs = 1.1;
        const double xk = 3.6;
        const double dx = 0.5;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func18(2.5, 4.6, i);
            k += 1;
        }
        return y;
    }
    if (choice == 19) {
        const double xs = 1.2;
        const double xk = 4.2;
        const double dx = 0.6;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func19(2.0, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 20) {
        const double xs = 1.23;
        const double xk = 7.23;
        const double dx = 1.2;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func20(0.8, 0.4, i);
            k += 1;
        }
        return y;
    }
    if (choice == 21) {
        const double xs = 0.11;
        const double xk = 0.36;
        const double dx = 0.05;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func21(0, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 22) {
        const double xs = 1.2;
        const double xk = 2.7;
        const double dx = 0.3;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func22(2.25, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 23) {
        const double xs = 1.5;
        const double xk = 3.5;
        const double dx = 0.4;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func23(4.1, 2.7, i);
            k += 1;
        }
        return y;
    }
    if (choice == 24) {
        const double xs = 1.56;
        const double xk = 4.71;
        const double dx = 0.63;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func24(7.2, 1.3, i);
            k += 1;
        }
        return y;
    }
    if (choice == 25) {
        const double xs = 0.22;
        const double xk = 0.92;
        const double dx = 0.14;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func25(0, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 26) {
        const double xs = 0.77;
        const double xk = 1.77;
        const double dx = 0.2;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func26(2.0, 4.1, i);
            k += 1;
        }
        return y;
    }
    if (choice == 27) {
        const double xs = 0.33;
        const double xk = 1.23;
        const double dx = 0.18;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func27(0.1, 0.5, i);
            k += 1;
        }
        return y;
    }
    if (choice == 28) {
        const double xs = 1.15;
        const double xk = 3.05;
        const double dx = 0.38;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func28(2.5, 4.6, i);
            k += 1;
        }
        return y;
    }
    if (choice == 29) {
        const double xs = 1.08;
        const double xk = 1.88;
        const double dx = 0.16;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func29(2.0, 0, i);
            k += 1;
        }
        return y;
    }
    if (choice == 30) {
        const double xs = 1.42;
        const double xk = 3.62;
        const double dx = 0.44;
        const double len = (xk - xs) / dx + 1;
        global_len_for_A = len;
        double* y = new double[len];
        int k = 0;
        for (double i = xs; i <= xk; i += dx) {
            y[k] = func30(0.8, 0.4, i);
            k += 1;
        }
        return y;
    }
    return 0;
}

double* taskB(int choice) {
    if (choice == 1) {
        double x[5] = {1.1, 2.4, 3.6, 1.7, 3.9};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func1(0, 2.5, x[i]);
        }
        return y;
    }

    if (choice == 2) {
        double x[5] = {0.35, 1.28, 3.51, 5.21, 4.16};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func2(1.35, 0.98, x[i]);
        }
        return y;
    }

    if (choice == 3) {
        double x[5] = {2.2, 3.78, 4.51, 6.58, 1.2};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func3(2.0, 0.95, x[i]);
        }
        return y;
    }

    if (choice == 4) {
        double x[5] = {1.84, 2.71, 3.81, 4.56, 5.62};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func4(0, 0, x[i]);
        }
        return y;
    }

    if (choice == 5) {
        double x[5] = {2.89, 3.54, 5.21, 6.28, 3.48};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func5(-2.5, 3.4, x[i]);
        }
        return y;
    }

    if (choice == 6) {
        double x[5] = {0.1, 0.9, 1.2, 1.5, 2.3};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func6(0, 0, x[i]);
        }
        return y;
    }

    if (choice == 7) {
        double x[5] = {4.48, 3.56, 2.78, 5.28, 3.21};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func7(0.4, 0.8, x[i]);
        }
        return y;
    }

    if (choice == 8) {
        double x[5] = {0.25, 0.36, 0.56, 0.94, 1.28};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func8(1.2, 0.48, x[i]);
        }
        return y;
    }

    if (choice == 9) {
        double x[5] = {1.21, 1.76, 2.53, 3.48, 4.52};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func9(1.1, 0.09, x[i]);
        }
        return y;
    }

    if (choice == 10) {
        double x[5] = {0.15, 0.26, 0.37, 0.48, 0.56};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func10(0.05, 0.06, x[i]);
        }
        return y;
    }

    if (choice == 11) {
        double x[5] = {0.08, 0.26, 0.35, 0.41, 0.53};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func11(2.0, 3.0, x[i]);
        }
        return y;
    }

    if (choice == 12) {
        double x[5] = {1.28, 1.36, 2.47, 3.68, 4.56};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func12(1.6, 0, x[i]);
        }
        return y;
    }

    if (choice == 13) {
        double x[5] = {1.9, 2.15, 2.34, 2.73, 3.16};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func13(4.1, 2.7, x[i]);
        }
        return y;
    }

    if (choice == 14) {
        double x[5] = {2.4, 2.8, 3.9, 4.7, 3.16};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func14(7.2, 4.2, x[i]);
        }
        return y;
    }

    if (choice == 15) {
        double x[5] = {0.1, 0.35, 0.4, 0.55, 0.6};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func15(0, 0, x[i]);
        }
        return y;
    }

    if (choice == 16) {
        double x[5] = {0.1, 0.3, 0.4, 0.45, 0.65};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func16(2.0, 1.1, x[i]);
        }
        return y;
    }

    if (choice == 17) {
        double x[5] = {0.2, 0.3, 0.44, 0.6, 0.56};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func17(0.1, 0.5, x[i]);
        }
        return y;
    }

    if (choice == 18) {
        double x[5] = {1.2, 1.28, 1.36, 1.46, 2.35};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func18(2.5, 4.6, x[i]);
        }
        return y;
    }

    if (choice == 19) {
        double x[5] = {1.16, 1.32, 1.47, 1.65, 1.93};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func19(2.0, 0, x[i]);
        }
        return y;
    }

    if (choice == 20) {
        double x[5] = {1.88, 2.26, 3.84, 4.55, -6.21};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func20(0.8, 0.4, x[i]);
        }
        return y;
    }

    if (choice == 21) {
        double x[5] = {0.2, 0.3, 0.38, 0.43, 0.57};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func21(0, 0, x[i]);
        }
        return y;
    }

    if (choice == 22) {
        double x[5] = {1.31, 1.39, 1.44, 1.56, 1.92};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func22(2.25, 0, x[i]);
        }
        return y;
    }

    if (choice == 23) {
        double x[5] = {1.9, 2.15, 2.34, 2.74, 3.16};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func23(4.1, 2.7, x[i]);
        }
        return y;
    }

    if (choice == 24) {
        double x[5] = {2.4, 2.8, 3.9, 4.7, 3.16};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func24(7.2, 1.3, x[i]);
        }
        return y;
    }

    if (choice == 25) {
        double x[5] = {0.1, 0.35, 0.4, 0.55, 0.6};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func25(0, 0, x[i]);
        }
        return y;
    }

    if (choice == 26) {
        double x[5] = {1.24, 1.38, 2.38, 3.21, 0.68};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func26(2.0, 4.1, x[i]);
        }
        return y;
    }

    if (choice == 27) {
        double x[5] = {0.5, 0.36, 0.4, 0.62, 0.78};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func27(0.1, 0.5, x[i]);
        }
        return y;
    }

    if (choice == 28) {
        double x[5] = {1.2, 1.36, 1.57, 1.93, 2.25};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func28(2.5, 4.6, x[i]);
        }
        return y;
    }

    if (choice == 29) {
        double x[5] = {1.16, 1.35, 1.48, 1.52, 1.96};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func29(2.0, 0, x[i]);
        }
        return y;
    }

    if (choice == 30) {
        double x[5] = {1.6, 1.81, 2.24, 2.65, 3.38};
        double* y = new double[5];
        for (int i = 0; i < 5; i++) {
            y[i] = func30(0.8, 0.4, x[i]);
        }
        return y;
    }

    return 0;
}

int main()
{
    int choice_func;
    std::string choice_task;
    std::cout << "Enter the number of function: ";
    std::cin >> choice_func;
    std::cout << "\nEnter the letter of task: ";
    std::cin >> choice_task;
    if (choice_task == "A") {
      double* u=taskA(choice_func);
      for (int i = 0; i < global_len_for_A;i++) {
          std::cout << u[i] << std::endl;
      };
    }
    if (choice_task == "B") {
      double* u=taskB(choice_func);
      std::cout << u[0] << std::endl;
      std::cout << u[1] << std::endl;
      std::cout << u[2] << std::endl;
      std::cout << u[3] << std::endl;
      std::cout << u[4] << std::endl;
        }

}
#pragma once
double calc(double a, double b, double x);
double calc(double x);
class ArrInfo
{
public:
	int length;
	double *function;
	ArrInfo(int length);

};
ArrInfo taskA(double a, double b, double xn, double xk, double dx);
ArrInfo taskB(double a, double b, double *x, int size);
void SquareWithD (int size, int length, int width);
void SquareWithOutD (int size, int length, int width);
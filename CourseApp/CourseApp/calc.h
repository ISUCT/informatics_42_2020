#pragma once
double calc(double a, double b, double x);
int init(double xn, double xk, double dx, int SizeA);
void outputA(int SizeA, double* ArrayA);
void outputB(int SizeB, double* ArrayB);
void ScoreTaskA(double a, double b, double xn, double xk, double dx, double* ArrayA);
void ScoreTaskB(double a, double b, double* x, int SizeB, double* ArrayB);
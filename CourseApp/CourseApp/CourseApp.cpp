

#include <iostream>
#include <string>
#include "Calc.h"
using namespace std;

class Pistolet {
private:
	int kalibr;
	int model;
	int massa;
public:
	void display() {
		cout << "Kalibr is " << kalibr << "\n" << "model is " << model << "\n" << "massa is " << massa << endl;
	}
	
	Pistolet(): Pistolet(9,1,4) {
		display ();
	}
	Pistolet(int a_kalibr, int a_model, int a_massa) {
		kalibr = a_kalibr;
		model = a_model;
		massa = a_massa;
	}
	void set(int a_kalibr, int a_model, int a_massa) {
		kalibr = a_kalibr;
		model = a_model;
		massa = a_massa;
	}
	
	
};


int main()


{
	Pistolet svd;
	svd.set(7, 2, 10);
	svd.display();
	
	
	
	

	
	double a = 2.25;
	taskA(1.2, 2.7, 0.3, a);
	double m[5] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
	cout << endl;
	taskB(m, sizeof(m), a);
	
	int n;
	cin >> n;
	int** p = new int* [n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			p[i][j] = 1;
		}

	}
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++) {
			p[i][j] = 0;
		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				p[i][j] = 1;
			}

		}
	}

	string s;
	s = "$";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (p[i][j] == 1) {
				cout << s << " ";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	delete[]p;
	return 0;
}





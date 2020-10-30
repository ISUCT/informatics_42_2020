

#include <iostream>
#include "Calc.h"
#include <cstdlib>
using namespace std;

	 int main(int argc,char *argv[])
	 {
		 cout << "We have " << argc << " params" << endl;
		 for (int i = 0; i < argc;i++) 
		 {
			 cout << argv[i] << endl;
		 }

		 int SizeA = 0;
		 int SizeB = 0;
		 int* pSizeA = &SizeA;
		 double x[] = { 1.88 ,2.26 ,3.84 ,4.55 ,-6.21 };
		 const double a = 0.8;
		 const double b = 0.4;
		 taskA( 1.23, 7.23, 1.2,pSizeA);
		 SizeA = SizeA * 2;
		 double* ArrayA = new double[SizeA];
		 SizeB = ((sizeof(x) / sizeof(x[0])) * 2);
		 double* ArrayB = new double[SizeB];
		 ScoreTaskA(a, b, 1.23, 7.23, 1.2, ArrayA);
		 for (int i = 0; i <= (SizeA - 1); i += 2)
		 {
			 cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;
		 }
		 cout << "--------------" << endl;
		 ScoreTaskB(a, b, x, SizeB, ArrayB);
		 for (int j = 0; j <= (SizeB - 1); j += 2)
		 {
			 cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;
		 }
		 char end;
		 cin >> end;
		 delete[] ArrayA;
		 delete[] ArrayB;
		 return 0;
		
			
		/*int tmp = 45;  ÏĞÈÑÂÀÈÂÀÍÈÅ ÓÊÀÇÀÒÅËß
		int *link = &tmp;
		cout << tmp << "\t" << &tmp << "\t" << link << "\t" << *link << endl;*/
	

	}





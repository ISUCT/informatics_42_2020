

#include <iostream>
#include "Calc.h"
using namespace std;

	 int main(int argc,char *argv[])
	 {
		 cout << "We have " << argc << " params" << endl;
		 for (int i = 0; i < argc;i++) 
		 {
			 cout << argv[i] << endl;
		 }


		 const double a = 0.8;
		 const double b = 0.4;
		 taskA(a, b, 1.23, 7.23, 1.2);
		 double x[] = { 1.88 ,2.26 ,3.84 ,4.55 ,-6.21 };
		 cout << "----------------------" << endl;
		 taskB(a, b, x, sizeof(x)/sizeof(x[0]));
		 char end;
		 cin >> end;
		 return 0;
		
			
		/*int tmp = 45;  ÏĞÈÑÂÀÈÂÀÍÈÅ ÓÊÀÇÀÒÅËß
		int *link = &tmp;
		cout << tmp << "\t" << &tmp << "\t" << link << "\t" << *link << endl;*/
	

	}





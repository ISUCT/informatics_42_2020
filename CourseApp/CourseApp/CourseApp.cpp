//#include <iostream>
//#include "Calc.h"
//using namespace std;
//
//
//int main(int argc, char* argv[])
//{
//    cout << "We have " << argc << " params" << endl;
//    for (int i = 0; i < argc; i++)
//    {
//        cout << argv[i] << endl;
//    }
//
//    const double a = 4.1;
//    const double b = 2.7;
//    double* y;
//    int m = taskA(a, b, 1.5, 3.5, 0.4, y);
//    for (int i = 0; i < m; i++) {
//        cout << y[i] << endl;
//    }
//    delete[] y;
//    double* y1;
//    double x[] = { 1.9 ,2.15 ,2.34 ,2.74 ,3.16 };
//    cout << "-----------------------" << endl;
//    m = taskB(a, b, x, sizeof(x) / sizeof(x[0]), y1);
//    for (int i = 0; i < m; i++) {
//        cout << y1[i] << endl;
//    }
//    delete[] y1;
//    char end;
//    cin >> end;
//    return 0;
//
//    
//}




//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Square
//{
//private:
//	int Compare = 0;
//	int SizeOfSquare = 0;
//	string Symbol;
//public:
//
//	Square(int SizeOfSquare)
//	{
//		this->SizeOfSquare = SizeOfSquare;
//		this->Symbol = Symbol;
//	}
//
//	void Draw(string Symbol, int compare)
//	{
//		Compare = compare;
//
//		for (int i = 1; i <= SizeOfSquare; i++)
//		{
//			for (int j = 1; j <= SizeOfSquare; j++)
//			{
//				if (i == 1 || i == SizeOfSquare || j == 1 || j == SizeOfSquare) {
//					cout << Symbol;
//				}
//				else if (Compare == 2 && i == j) {
//					cout << Symbol;
//				}
//				else {
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}
//
//
//
//	}
//
//	~Square()
//	{
//	}
//};
//
//int main()
//{
//	int compare = 1;
//	Square SquareOne(10);
//	cout << "Do you want to draw a diagonal? " << endl << "1 - No" << endl << "2 - Yes" << endl;
//	cin >> compare;
//	SquareOne.Draw("#", compare);
//
//	cout << endl;
//	return 0;
//}





#include <iostream>
#include <string>
using namespace std;
class EMPLOYEE
{
public:
	string name;
	string surname;
	string patronymic;
	int ident;
	string data;
	EMPLOYEE(string s, string n, string p, int a, string d)
	{
		surname = s; name = n; ident = a; data = d;   patronymic = p;
	}
	void display()
	{
		cout << "_____________________________" << endl;
		cout << "FULL NAME:  " << surname << " ";
		cout << name << " ";
		cout << patronymic << endl;
		cout << "IDENT " << ident << endl;
		cout << "DATE: " << data << endl;
		cout << "_____________________________" << endl;
		cout << endl;
	}
	~EMPLOYEE() {};
};
int main()
{
	EMPLOYEE ONE = EMPLOYEE("JOHNSON", "D.", "L.", 22, "08/09/15");
	EMPLOYEE TWO = EMPLOYEE("WILLIAMS", "A.", "R.", 21, "18/10/14");
	EMPLOYEE THREE = EMPLOYEE("JONES", "S.", "J.", 19, "06/07/19");
	EMPLOYEE FOUR = EMPLOYEE("BROWN", "P.", "Q.", 41, "01/09/04");
	EMPLOYEE FIVE = EMPLOYEE("WOOD", "E.", "O.", 28, "03/11/14");
	EMPLOYEE SIX = EMPLOYEE("HILL", "O.", "L.", 32, "28/10/12");
	EMPLOYEE SEVEN = EMPLOYEE("BAKER", "I.", "A.", 23, "21/03/10");
	EMPLOYEE EIGHT = EMPLOYEE("THOMAS", "T.", "E.", 24, "26/01/14");
	EMPLOYEE NINE = EMPLOYEE("HARRIS", "P.", "K.", 36, "01/10/10");
	ONE.display();
	TWO.display();
	THREE.display();
	FOUR.display();
	FIVE.display();
	SIX.display();
	SEVEN.display();
	EIGHT.display();
	NINE.display();
	return 0;
}




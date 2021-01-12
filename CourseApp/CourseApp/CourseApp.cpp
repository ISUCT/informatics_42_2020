//#include <iostream>
//#include "Calc.h"
//using namespace std;
//
//
//int main()
//{
//	const double a = 1.35;
//	const double b = 0.98;
//	double* y;
//	int h =taskA(a, b, 1.14, 4.24, 0.62, y);
//	for (int i = 0; i < h; i++)
//	{
//		cout << y[i] << endl;
//
//	}
//	delete[] y;
//	double* y1;
//	double arr[] = { 0.35, 1.28, 3.51, 5.21, 4.16 };
//	cout << "-----------------------" << endl;
//	h = taskB(a, b, arr, sizeof(arr) / sizeof(arr[0]), y1);
//	for (int i = 0; i < h; i++)
//	{
//		cout << arr[i] << "\t" << y1[i] << endl;
//	}
//	delete[] y1;
//	return 0;
//} 

// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// #include<iostream>
// using namespace std;
// int main()
// {
//	int n;
// setlocale(LC_ALL, "rus");
//	cout << " Программа рисует квадрат с диагональю звездочками со стороной\n";
//		cout << " Введите сторону квадрата\n";
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == 1 || i == n || j == 1 || j == n || i == j)
//				cout << "@@";
//			else cout << "  ";
//
//		}
//		 cout << endl;
//	}
//	return 0;
// }
//#include <iostream>
//#include <cstring>
//using namespace std;	

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
//		for (int i = 1; i <= SizeOfSquare;  i++)
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
//			Square SquareOne(10);
//			cout << "Do you want to draw a diagonal? " << endl << "1 - No" << endl << "2 - Yes" << endl;
//			cin >> compare;
//		SquareOne.Draw("#", compare);
//
//		
//			cout << endl;
//			return 0;
//			}

//#include <iostream>
//#include <cstring>
//using namespace std;

//class Fox
//{
//private:
  //  string name;
   // int weight;
   // int age;
   // string From; // откуда пришла Лиса
//public:
 ///   Fox()
  //  {
 //       this->name = name;
 //       this->From = From;
 //   }

  //  void GetView()
   // {
   //     string view = R""""(
  //                                                                   ,-,
  //                                                           _.-=;~ /_
  //                                                        _-~   '     ;.
  //                                                    _.-~     '   .-~-~`-._
  //                                              _.--~~:.             --.____88
  //                            ____.........--~~~. .' .  .        _..-------~~
  //                   _..--~~~~               .' .'             ,'
   //              _.-~                        .       .     ` ,'
  //             .'                                    :.    ./
 //            .:     ,/          `                   ::.   ,'
 //          .:'     ,(            ;.                ::. ,-'
//          .'     ./'.`.     . . /:::._______.... _/:.|/
//    _,'' . .,/',-~    |||||'                    ||'  |||
// _.'~  . .,:||'        ||||              _..--- ||o.--'||o.--..__
//:     ...' ||o __,------.|||o...__..._.=~- .    `~~   `~~      ~-._ -- _.
//;;;:='    ~~            ~~~                ~-    -       -   -
//)"""";
//        cout << view << endl;
//    }

  //  void Input()
   // {
   //     cout << "Name: "; cin >> name; cout << endl;
   //     cout << "Age: "; cin >> age; cout << endl;
   //     cout << "Weight: "; cin >> weight; cout << endl;
   //     cout << "Where did the" << name << " come from? "; cin >> From;
   // }

  //  void Display()
  //  {
  //      cout << name << "-fox is moving." << "Age: " << age << endl << " Weight: " << weight << " " << name << "-fox come from " << From << endl;
  //  }

  //  ~Fox() {}
//};


//int main()
//{
//    Fox fox_1;
 //   Fox fox_2;
 //   fox_1.GetView();
 //   cout << endl << endl;
 //   fox_1.Input();
 //   fox_1.Display();
 //   cout << endl;
  //  fox_2.Input();
 //   fox_2.Display();

//}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	char answ;
	do
	{
		cout << "Choose the weapon:" << endl
			<< "0 - rock" << endl
			<< "1 - scissors" << endl
			<< "2 - paper" << endl;
		int persWeapon;
		cin >> persWeapon;
		int compWeapon = rand() % 3;
		switch (compWeapon)
		{
		case 0:
			cout << "Great random selected rock... ";
			cout <<((persWeapon == 0) ? ("Draw...")
				: (persWeapon == 1) ? ("You lose. Hahaha")
				: ("You win... You are lucky, hooray"));
			break;
		case 1:
			cout << "Comuter selected scissors... ";
			cout <<((persWeapon == 1) ? ("Draw...")
				: (persWeapon == 2) ? ("You lose. Hahaha")
				: ("You win... You are lucky, hooray"));
			break;
		case 2:
			cout << "computer selected paper... ";
			cout <<((persWeapon == 2) ? ("Draw...")
				: (persWeapon == 0) ? ("You lose. Hahaha")
				: ("You win... You are lucky, hooray"));
			break;
		}
		cout << endl
			<< "Retry?" << endl;
		cin >> answ;
	} while (answ == 'yes');
	return 0;
}
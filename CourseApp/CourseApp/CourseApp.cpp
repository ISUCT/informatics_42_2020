// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите длину стороны = ";
	cin >> n;
	int **p = new int*[n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			p[i][j] = 1;
		}
	
	}
	for (int i = 1; i < n-1; i++)
	{
		for (int j = 1; j < n-1; j++) {
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
	s = "*";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (p[i][j] == 1) {
				cout << s << ' ';
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
		
	delete[]p;
	return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

class Strana {
private:
	int Naselenie;
	int Ploshat;
	int Smertnost;
public:
	void display() {
		cout << "Ќаселение(миллиононов) = " << Naselenie << "\n" << "ѕлощадь(тыс€ч) = " << Ploshat << "\n" << "—мертность(тыс€ч) = " << Smertnost << endl;
	}

	Strana() : Strana(132, 17, 91) {
		display();
	}
	Strana(int a_naselenie, int a_ploshat, int a_smertnost) {
		Naselenie = a_naselenie;
		Ploshat = a_ploshat;
		Smertnost = a_smertnost;
	}
	void set(int a_naselenie, int a_ploshat, int a_smertnost) {
		Naselenie = a_naselenie;
		Ploshat = a_ploshat;
		Smertnost = a_smertnost;
	}


};


int main()
{
	setlocale(LC_ALL, "Rus");
	Strana svd;
	svd.set(140,17,102);
	svd.display();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

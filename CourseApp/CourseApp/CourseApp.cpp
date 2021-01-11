#include <iostream>
#include <string>
using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	int n;
	cout << "¬ведите длину стороны" << endl;
	cin >> n;
	while (n <= 0) {

		cout << "„исло должно быть больше нул€. ¬ведите другое число." << endl;
		cin >> n;
	}

	int **p = new int *[n];

	for (int i = 0; i < n; i++) {

			p[i] = new int[n];

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

				p[i][j] = 1;

			}
		}

	for (int i = 1; i < n - 1; i++) {

		for (int j = 1; j < n - 1; j++) {

				p[i][j]=0;

			}


	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

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

				cout << " ";

				}

			}
			cout << endl;

		}

		delete[]p;
		return 0;

}
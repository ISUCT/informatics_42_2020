#include <iostream>
#include <string>
using namespace std;

class Pistol {
private:
	string model;
	int caliber;
	int year_of_release;
	int clip_capacity;
public:
	int number_of_bullets;
	int shoot = 0;


	void Input() {

			cout << "������: "; cin >> model; cout << endl;
			cout << "������: "; cin >> caliber; cout << endl;
			cout << "��� �������: "; cin >> year_of_release; cout << endl;
			cout << "����������� ������: "; cin >> clip_capacity; cout << endl;
	}

	void Reload() {

		number_of_bullets = clip_capacity;
		cout << "�������� �����������" << endl;
	}



	void Shoot() {
		cout << "������� �������� � ���������?:"; cin >> number_of_bullets;
		while (shoot < 1) {
			if (number_of_bullets > clip_capacity) {
				cout << "����������, ������� ������ �����"; cin >> number_of_bullets;

			}
			if (number_of_bullets < 1) {
				cout << "��� ��������, ������������ ��������" << endl;
				Reload();
			}
			else {
				cout << "������� ���������" << endl;
				shoot++;
			}

		}
	}


};

int main() {

	setlocale(LC_ALL, "Rus");
	int n;
	cout << "������� ����� �������" << endl;
	cin >> n;
	while (n <= 0) {

		cout << "����� ������ ���� ������ ����. ������� ������ �����." << endl;
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

		Pistol Glock_17;
		Pistol PM;

		Glock_17.Input();
		Glock_17.Shoot();
		cout << endl;

		PM.Input();
		PM.Shoot();

		return 0;
}
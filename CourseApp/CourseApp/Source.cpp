#include <iostream>
using namespace std;

int** create(int n) {
	int** p = new int* [n];
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	return p;

}
void init(int n, int** p) {
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			p[i][j] = n;
			if (i == j) {
				p[i][j] = 1;
			}
		}
	}
}
void draw(int n, int** p) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j];
		}
		cout << endl;
	}
}
int removal(int n, int** p) {
	for (int i = 0; i < n; i++)
	{
		delete[] p[i];
	}
	delete p;
	return 0;
}
int main()
{
	int i;
	int j;
	int n = 5;
	int** p = create(n);
	init(n, p);
	draw(n, p);
	removal(n, p);
}
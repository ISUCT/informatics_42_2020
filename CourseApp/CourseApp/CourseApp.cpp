
#include <iostream>
using namespace std;

class massive
{
private:
	int size;

public:
	massive(int s)
	{
		size = s;

		int* l = new int[size];

		cout << endl << "enter massive:" << endl;
		for (int i = 0; i < size; ++i) {
			cout << "a[" << i << "]=";
			cin >> l[i];
		}

		quick_sort(l, 0, size - 1);

		int k = 1;

		for (int i = size - 1; i > size - 3; --i) {
			k = k * l[i];
			cout << endl << "a[" << i << "]=" << l[i] << " —-max" << endl;
		}
		cout << endl << "Proizvedenie max =" << k << endl;
	}
	void quick_sort(int* a, int min, int max) {
		int i = min;
		int j = max;
		int x = a[(min + max) / 2];
		int t;
		do {
			while (a[i] < x) {
				++i;
			}
			while (a[j] > x) {
				--j;
			}
			if (i <= j) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				i++; j--;
			}
		} while (i <= j);

		if (min < j) {
			quick_sort(a, min, j);
		};
		if (i < max) {
			quick_sort(a, i, max);
		}

	}
};
int main()
{
	int size;
	cout << "enter size:";
	cin >> size;
	massive massive(size);

}
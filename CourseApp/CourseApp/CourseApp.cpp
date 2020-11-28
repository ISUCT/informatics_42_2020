#include <iostream>
using namespace std;

class Square
{
private:
    int size=0;
    char** array;
    int offsetX = 0;
    int offsetY = 0;
public:
    Square(int s)
    {
        size = s;
        array = new char* [size];
        for (int i = 0; i < size; i++) {
            array[i] =new char[size];
            for (int j = 0; j < size; j++) {
                array[i][j] = '*';
            };
        };
    }
    void printWithOffset() {
        for (int i = 0; i < size + offsetY; i++) {
            for (int j = 0; j < size + offsetX; j++) {
                if (i < offsetY or j < offsetX) {
                    cout << ' ' << ' ';
                }
                else {
                    if (i == offsetY || i == size + offsetY - 1 || j == offsetX || j == size + offsetX - 1 || j-offsetX==i-offsetY)
                        cout << array[i - offsetY][j - offsetX] << ' ';
                    else cout << "  ";
                }
            };
            cout << '\n';
        };
    };
    void printWithOffsetDiag() {
            for (int i = 0; i < size + offsetY; i++) {
                for (int j = 0; j < size + offsetX; j++) {
                    if (i < offsetY or j < offsetX) {
                        cout << ' ' << ' ';
                    }
                    else {
                        if (i == offsetY || i == size + offsetY - 1 || j == offsetX || j == size + offsetX - 1)
                            cout << array[i - offsetY][j - offsetX] << ' ';
                        else cout << "  ";
                    }
                };
                cout << '\n';
            };
    };

    void setOffset(int x, int y) {
        offsetX = --x;
        offsetY = --y;
    }

};

int main()
{
    bool f;
    cout << "Do you want to display the diagonal? " << endl;
    cin >> f;
    Square newSquare(10);
    newSquare.setOffset(15,7);
    newSquare.printWithOffsetDiag();
    if (f==1) newSquare.printWithOffset();
    return 0;
}


#include <iostream>
using namespace std;
class Square
{
private:
    int size;
    char** array;
    bool d;
    int x = 0; 
    int y = 0;
    array = new char* [size];
public:
    Square(int s, bool d)
    {
        int g;

       
        
            size = s;
            if (size > 0) {
                size = s;

                cin >> size;
                for (int i = 0; i < size; i++) {
                    array[i] = new char[size];
                    for (int j = 0; j < size; j++) {
                        array[i][j] = g;
                    }
                };
            };
            else std::cout << "Eror";
    }
    void drawDiagonal() {
        if (d == 1)
            for (int i = 0; i < size + y; i++) {
                for (int j = 0; j < size + x; j++) {
                    if (i < y or j < x) {
                        cout << ' ' << ' ';
                    }
                    else {
                        if (i == y || i == size + y - 1 || j == x || j == size + x - 1 || j - x == i - y)
                            cout << array[i - y][j - x] << ' ';
                        else cout << "  ";
                    }
                };
                cout << '\n';
            };
    };
    void nodrawDiagonal() {
        if (d == 0)
            for (int i = 0; i < size + y; i++) {
                for (int j = 0; j < size + x; j++) {
                    if (i < y or j < x) {
                        cout << ' ' << ' ';
                    }
                    else {
                        if (i == y || i == size + y - 1 || j == x || j == size + x - 1)
                            cout << array[i - y][j - x] << ' ';
                        else cout << "  ";
                    }
                };
                cout << '\n';
            };
    };
    void set(int a, int b)
    {
        x = --a;
        y = --b;
    }
};

int main()
{
    cout << "Do you wanna draw a diagonal ?" << "\nAnswer '1'- Draw a diagonal" << "\nAnswer '0'- Don't draw a diagonal" << endl;
    cout << "And enter size of square" << endl;
    Square newSquare(15, '$');
    newSquare.set(15, 7);
    newSquare.drawDiagonal();
    newSquare.nodrawDiagonal();
    return 0;
}
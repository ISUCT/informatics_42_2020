#include <iostream>
#include <cmath>
using namespace std;

void draw(int height, int width, char obj, char line, int **array)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (array[i][j] == 1) {
                cout << line << line;
            }
            else if (array[i][j] == 0) {
                cout << obj << obj;
            }
            else if(array[i][j] == 2) {
                cout << ' ' << ' ';
            }
        }
        cout << endl;
    }
}
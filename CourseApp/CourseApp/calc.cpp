#include <iostream>
#include <cmath>
using namespace std;

void Q_in(bool mode_switcher, bool line_switcher, int height, int width, int ** array)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if ((i == j) && (line_switcher == true))
            {
                array[i][j] = 0;
            }
            else if ((mode_switcher == true) && (i == 0) || (i == (height - 1)) || (j == 0) || (j == (width - 1)))
            {
                array[i][j] = 1;
            }
            else if (mode_switcher == false)
            {
                array[i][j] = 3;
            }
            else
            {
                array[i][j] = 2;
            }

        }
    }
}
void Q_out(int height, int width, char obj, char line, int **array)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (array[i][j] == 0) {
                cout << line << line;
            }
            else if (array[i][j] == 1) {
                cout << obj << obj;
            }
            else if(array[i][j] == 2) {
                cout << ' ' << ' ';
            }
            else if (array[i][j] == 3) {
                cout << obj << obj;
            }
        }
        cout << endl;
    }
}
#include <iostream>
#include <math.h>

using namespace std;

void SquareWD(int d, bool gop)
{
    if (gop == 1)
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                if (i == 1 || i == d || j == 1 || j == d || i == j)
                    cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
}
void SquareWOD(int d, bool gop)
{
    if (gop == 0)
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                if (i == 1 || i == d || j == 1 || j == d)
                    cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
}
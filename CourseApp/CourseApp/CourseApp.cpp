#include <iostream>
#include <cmath>
#include "func.h"

using namespace std;
int	main()
{
    int d;
    cout << "What a size of square you want to have?" << endl;
    cin >> d;
    cout << "Draw a diagonal?" << endl;
    bool gop;
    cin >> gop;
    SquareWD(d,gop);
    SquareWOD(d,gop);
    return 0;
}
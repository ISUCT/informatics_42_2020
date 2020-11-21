#include <iostream>
#include "calc.h" 

using namespace std;

int main()
{   
    string name;
    cout << "Enter name: "; cin >> name;
    Square sqr(name);
    return 0;
}

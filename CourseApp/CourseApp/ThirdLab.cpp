#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main()
{
    string name,gender,nationality,CountryOfResidence;
    int age;
    cout << "What is the type of the information you want to enter? (1 - Full, 0 - Main)" << endl;
    int decision;
    cin >> decision;
    if (decision == 0)
    {
        MainInfo(name,age,gender);
    }
    else if (decision == 1)
    {
        FullInfo(name,age,gender,nationality,CountryOfResidence);
    }
    return 0;
}


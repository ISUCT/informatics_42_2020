#include <iostream>
#include <string>
#include "person.h"
using namespace std;

void MainInfo(string name,int age,string gender)
{
    cout << "Enter your name, age and gender" << endl;
    cin >> name >> age >> gender;
    Person person(name,age,gender);
    person.DisplayMainInfo();
}
void FullInfo(string name,int age,string gender,string nationality,string CountryOfResidence)
{
    cout << "Enter your name, age and gender" << endl;
    cin >> name >> age >> gender;
    cout << "Now enter your nationality and country of residence" << endl;
    cin >> nationality >> CountryOfResidence;
    Person person (name,age,gender,nationality,CountryOfResidence);

}

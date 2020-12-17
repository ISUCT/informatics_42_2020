#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int age,string gender)
    {
        this->name = name;
        setAge(age);
        this->gender = gender;
    }
    Person(string name,int age,string gender,string nationality,string CountryOfResidence):Person(name,age,gender)
    {
        this->nationality = nationality;
        this->CountryOfResidence = CountryOfResidence;
    }
    ~Person()
    {
    }
    void setAge(int age)
    {
        if (age >= 0 && age < 100)
        {
            this->age = age;
        }
    }
    void setHealthInfo(string health)
    {
        this->health = health;
    }
    string getHealthInfo()
    {
        return health;
    }
    void DisplayInfo()
    {
        cout << "There is your personal information" << endl;
        cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Gender: " << gender << endl;
        if(nationality != "")
        {
            cout << "Nationality: " << nationality << endl;
        }
        if(CountryOfResidence != "")
        {
            cout << "Country: " << CountryOfResidence << endl;
        }
    }

private:
    string gender = "Heavy Battle Tank (T-92)";
    string nationality;
    string CountryOfResidence;
    string name = "NoName";
    string health;
    int age = 0;
};

int main()
{
    string name;
    string gender;
    string nationality;
    string CountryOfResidence;
    string health;
    int age;
    int choose;
    cout << "What is the type of the information you want to enter? (1 - Full, 0 - Main)" << endl;
    cin >> choose;
    Person *person;
    if (choose == 1)
    {
        cout << "Enter your name, age and gender." << endl;
        cin >> name >> age >> gender;
        cout << "Enter your nationality and country of residence." << endl;
        cin >> nationality >> CountryOfResidence;
        person = new Person(name,age,gender,nationality,CountryOfResidence);
    }
    else if (choose == 0)
    {
        cout << "Enter your name, age and gender." << endl;
        cin >> name >> age >> gender;
        person = new Person(name,age,gender);
    }
    system("cls");
    person->DisplayInfo();
    cout << "Do you want to share information about your health?" << endl;
    cin >> choose;
    if(choose == 1)
    {
        cout << "Write your general condition." << endl;
        cin >> health;
        person->setHealthInfo(health);
        cout << "Your health`s condition is " << health << endl;
    }
    system("pause");
    delete person;
    return 0;
}


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
    string getNationality()
    {
        return nationality;
    }
    string getName()
    {
        return name;
    }
    string getCountryOfResidence()
    {
        return CountryOfResidence;
    }
    string getGender()
    {
        return gender;
    }
    int getAge()
    {
        return age;
    }
    void DisplayInfo()
    {
        cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Gender: " << gender << endl;
        if(nationality[0] != '\0')
        {
            cout << "Nationality: " << nationality << endl;
        }
        if(CountryOfResidence[0] != '\0')
        {
            cout << "Country: " << CountryOfResidence << endl;
        }
    }

private:
    string gender = "Heavy Battle Helicopter";
    string nationality;
    string CountryOfResidence;
    string name = "NoName";
    int age = 0;
};

int main()
{
    string name,gender,nationality,CountryOfResidence;
    int age,choose;
    cout << "What is the type of the information you want to enter? (1 - Full, 0 - Main)" << endl;
    cin >> choose;
    Person Firstbody = Person;
    if (choose == 1)
    {
        cout << "Enter your name, age and gender" << endl;
        cin >> name >> age >> gender;
        cout << "Enter your nationality and country of residence" << endl;
        cin >> nationality >> CountryOfResidence;
        Firstbody(name,age,gender,nationality,CountryOfResidence);
    }
    else if (choose == 0)
    {
        cout << "Enter your name, age and gender" << endl;
        cin >> name >> age >> gender;
        Firstbody(name,age,gender);
    }
    return 0;
}


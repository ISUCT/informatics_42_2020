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
    Person(string name,int age,string gender,string nationality,string CountryOfResidence)
    {
        this->name = name;
        setAge(age);
        this->gender = gender;
        DisplayMainInfo();
        Nation(nationality);
        CountryOfR(CountryOfResidence);
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
    void Nation(string nationality)
    {
        this->nationality = nationality;
        cout << "Nationality: " << this->nationality << endl;
    }
    string getName()
    {
        return name;
    }
    void CountryOfR(string CountryOfResidence)
    {
        this->CountryOfResidence = CountryOfResidence;
        cout << "Country of residence: " << CountryOfResidence << endl;
    }
    string getGender()
    {
        return gender;
    }
    int getAge()
    {
        return age;
    }
    void DisplayMainInfo()
    {
        cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Gender: " << gender << endl;
    }

private:
    string gender;
    string nationality;
    string CountryOfResidence;
    string name;
    int age;
};
void MainInfo(string name,int age,string gender);
void FullInfo(string name,int age,string gender,string nationality,string CountryOfResidence);
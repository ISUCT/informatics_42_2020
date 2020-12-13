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
    string getName()
    {
        return name;
    }
    string getNationality()
    {
        return nationality;
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
private:
    string gender;
    string nationality;
    string CountryOfResidence;
    string name;
    int age;
};
int main()
{
    cout << "Indicate your main information (Name, age, gender)" << endl;
    string gender;
    string name;
    int age;
    cin >> name >> age >> gender;
    Person FirstBody(name,age,gender);
    cout << "Do you want to share more information about yourself (Nationality and country of residence)" << endl;
    int decision;
    cin >> decision;
    if (decision == 1)
    {
        string nationality;
        string CountryOfResidence;
        cin >> nationality >> CountryOfResidence;
        Person FirstBody(name,age,gender,nationality,CountryOfResidence);
        cout << "Name: " << FirstBody.getName()<< "\n" << "Age: " << FirstBody.getAge() << "\n" << "Gender: " << FirstBody.getGender() << endl;
        cout << "Nationality: " << FirstBody.getNationality() << "\n" << "Country of Residence: " << FirstBody.getCountryOfResidence() << endl;
    }
    else if (decision == 0)
    {
        cout << "Name: " << FirstBody.getName()<< "\n" << "Age: " << FirstBody.getAge() << "\n" << "Gender: " << FirstBody.getGender() << endl;
    }
    return 0;
}


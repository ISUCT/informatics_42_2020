#ifndef INFORMATICS_42_2020_PHONE_H
#define INFORMATICS_42_2020_PHONE_H

#include <iostream>
#include <string>

int randomInteger(int min, int max);
std::string generatePhoneNumber();

class Phone
{
private:
    std::string phoneNumber;

public:
    Phone()
    {
        this->phoneNumber = generatePhoneNumber();
    }

    Phone(std::string phoneNumber)
    {
        changePhoneNumber(phoneNumber);
    }

    void call(std::string phoneNumber)
    {
        std::cout << "Calling " << phoneNumber << " from" << this->phoneNumber << std::endl;
    }

    std::string getPhoneNumber()
    {
        return this->phoneNumber;
    }

    void changePhoneNumber(std::string phoneNumber)
    {
        // Тут должен быть .trim(), но увы, это C++
        if (phoneNumber.length() == 0)
        {
            return;
        }

        this->phoneNumber = phoneNumber;
    }
};

#endif
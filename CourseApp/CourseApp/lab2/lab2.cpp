#include <string>

int randomInteger(int min, int max)
{
    return min + (rand() % (max - min + 1));
}

std::string generatePhoneNumber()
{
    int countryCode = randomInteger(1, 9);
    int areaCode = randomInteger(100, 999);
    int number = randomInteger(1000000, 9999999);

    return std::to_string(countryCode) + " (" + std::to_string(areaCode) + ") " + std::to_string(number);
}
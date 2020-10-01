#include <iostream>
#include <string>

bool isEven(int number)
{
    return number % 2 == 0;
}

template <typename T>
T input(std::string message)
{
    T result;

    std::cout << message;
    std::cin >> result;

    return result;
}

int main()
{
    int number = input<int>("Enter number: ");

    printf("Число %i - %s\n", number, isEven(number) ? "четное" : "нечетное");

    return 0;
}
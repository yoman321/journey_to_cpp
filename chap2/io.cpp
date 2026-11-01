#include <iostream>
#include "io.h"

void writeAnswer(int sum)
{
    std::cout << "The sum is " << sum << '\n';
}

int readNumber()
{
    std::cout << "Please input the number: ";
    int num {};
    std::cin >> num;
    return num;
}

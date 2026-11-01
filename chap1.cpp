#include <iostream>
#include <string>

int main() 
{
    std::cout << "Enter an interger: ";
    int num1 {};
    std::cin >> num1;
    std::cout << "Enter another integer: ";
    int num2 {};
    std::cin >> num2;
    std::string result = std::to_string(num1) + " + " + std::to_string(num2) + " is " + std::to_string(num1+num2);
    std::cout << result << std::endl;
}

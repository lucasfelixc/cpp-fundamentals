#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Input and Output in C++
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;

    // --------------------------------------------

    // Variables and Data types in C++

    // Integer values
    int x;

    // Single-precision floating-point values
    float y;

    // Double-precision floating-point values
    double z;

    // Single characters
    char c;

    // --------------------------------------------

    // Control Structures in C++

    // If-Else Statement
    if (number > 5)
    {
        std::cout << "The number is greater than 5" << std::endl;
        // Code to execute if the condition is true
    }
    else
    {
        // Code to execute if the condition is false
    }

    // While loop
    while (number > 5)
    {
        std::cout << "The number now is equal to: " << number << std::endl;
        number--;
    }

    // For loop
    for (int i = 0; i < 5; i++)
    {
        std::cout << "The value of i is: " << i << std::endl;
    }

    // Switch Statement
    switch (number)
    {
    case 1:
        std::cout << "The number is 1, this validation was done using a switch statement." << std::endl;
        break;

    case 5:
        std::cout << "The number is 5, this validation was done using a switch statement." << std::endl;
        break;

    case 10:
        std::cout << "The number is 10, this validation was done using a switch statement." << std::endl;
        break;

    default:
        std::cout << "The number is not 1, 5, or 10." << std::endl;
        break;
    }

    // --------------------------------------------

    // Functions in C++
    int firstNumber;
    int secondNumber;

    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    int result = add(firstNumber, secondNumber);

    std::cout << "The sum of the two numbers is: " << result << std::endl;
}
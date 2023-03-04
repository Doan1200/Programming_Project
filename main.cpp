/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

/* Sum function return interger number type*/
int sum(int num1, int num2) { return num1 + num2; }

int main()
{
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Sum of the two numbers is: " << sum(num1, num2) << std::endl;

    return 0;
}
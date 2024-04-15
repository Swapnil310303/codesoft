#include<iostream>

int main() {
    char operation;
    double num1, num2;

    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Input the operation
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the selected operation and display the result
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation. Please use +, -, *, or /." << std::endl;
            break;
    }

    return 0;
}

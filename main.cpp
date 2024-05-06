#include <iostream>

int main() {
    int number;

    int number2;
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    } 
    return 0;
}

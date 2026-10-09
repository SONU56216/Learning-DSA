#include <iostream>

int main() {
    int number;

    // Prompt user for input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Determine if the number is Positive, Negative, or Zero
    if (number > 0) {
        std::cout << number << " is Positive." << std::endl;
    } else if (number < 0) {
        std::cout << number << " is Negative." << std::endl;
    } else {
        std::cout << "The number is Zero." << std::endl;
    }

    return 0;
}

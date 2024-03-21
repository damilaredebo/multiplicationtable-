#include <iostream>

int main() {
    int number, range;

    // Prompt the user for the number and range
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Enter the range: ";
    std::cin >> range;

    // Display the multiplication table
    std::cout << "Multiplication table for " << number << " up to " << range << ":\n";

    for (int i = 1; i <= range; ++i) {
        int result = number * i;
        std::cout << number << " x " << i << " = " << result << std::endl;
    }

    return 0;
}


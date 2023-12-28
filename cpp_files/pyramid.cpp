#include <iostream>

void printPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}

int main() {
    int height;

    // Get the height of the pyramid from the user
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    // Check if the height is greater than 0
    if (height > 0) {
        // Print the pyramid
        printPyramid(height);
    } else {
        std::cout << "Invalid height. Please enter a positive integer." << std::endl;
    }

    return 0;
}

#include <stdio.h>

// Function to print spaces
void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
}

// Function to print asterisks
void printAsterisks(int asterisks) {
    for (int i = 0; i < asterisks; i++) {
        printf("*");
    }
}

// Function to print pyramid pattern
void printPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        // Print spaces
        printSpaces(height - i);

        // Print asterisks
        printAsterisks(2 * i - 1);

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int height;

    // Input the height of the pyramid
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    // Check if the height is non-negative
    if (height < 0) {
        printf("Please enter a non-negative height.\n");
        return 1; // Exit with an error code
    }

    // Print the pyramid
    printPyramid(height);

    return 0; // Exit successfully
}

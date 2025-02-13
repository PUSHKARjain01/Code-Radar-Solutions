#include <stdio.h>

int main() {
    int n;
    
    // Take input from the user
    scanf("%d", &n);

    // Check if the input is valid (positive integer)
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit the program with an error code
    }

    // Loop to print '*' n times
    for (int i = 0; i < n; i++) {
        printf("*");
    }

    // Print a newline after the stars
    printf("\n");

    return 0;
}

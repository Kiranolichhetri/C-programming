#include <stdio.h>

int main() {
    // Initialize factorial to 1
    int fact = 1;
    // Declare variables for input number and loop counter
    int n, i;
    
    // Ask for user input
    printf("Enter the number: ");
    // Read the input number
    scanf("%d", &n);
    
    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact*i; // Multiply current factorial by the loop counter
    }
    
    // Print the factorial
    printf("Factorial of %d is %d\n", n, fact);
    
    return 0;
}

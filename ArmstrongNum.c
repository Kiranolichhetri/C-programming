#include<stdio.h>

int main() {
    int n, arm = 0, c, r;
    
    // Ask the user for a number
    printf("Enter any number: ");
    scanf("%d", &n);
    
    c = n; // Store the original number
    
    // Loop to calculate the sum of cubes of digits
    while (n > 0) {
        r = n % 10; // Extract the last digit
        arm = (r * r * r) + arm; // Add the cube of the digit to the sum
        n = n / 10; // Move to the next digit
    }
    
    // Check if the sum of cubes of digits equals the original number
    if (c == arm)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
    
    return 0;
}

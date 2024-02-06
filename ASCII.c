#include<stdio.h>

int main() {
    char ch; // Declare a variable to store the character
    
    // Ask the user to enter a character
    printf("Enter any Character: ");
    scanf("%c", &ch); // Read the character entered by the user
    
    printf("%d", ch); // Print the ASCII value of the character
    
    return 0;
}

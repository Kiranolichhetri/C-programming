#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int lower_input, upper_input, random_num;
    
    // Ask the user to input the lower bound
    printf("Enter lower input number: ");
    scanf("%d", &lower_input);
    
    // Ask the user to input the upper bound
    printf("Enter upper input number: ");
    scanf("%d", &upper_input);
    
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number within the given range
    random_num = (rand() % (upper_input - lower_input + 1)) + lower_input;
    
    // Print the random number within the specified range
    printf("Random number within the range %d and %d is %d\n", lower_input, upper_input, random_num);
    
    return 0;
}

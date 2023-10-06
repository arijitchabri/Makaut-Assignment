#include <stdio.h>

int main() {
    int number, digit, sum = 0;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10; // Get the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }
    
    // Display the result
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}

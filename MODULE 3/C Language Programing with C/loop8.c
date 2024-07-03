/*Write a program make a summation of given number (E.g., 1523 Ans: -11)*/
#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the summation of digits
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        sum += digit; // Add the last digit to the sum
        number /= 10; // Remove the last digit from the number
    }

    // Output the summation
    printf("Sum of digits: %d\n", sum);

    return 0;
}

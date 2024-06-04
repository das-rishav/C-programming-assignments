/*Write a program to accept 2 numbers. Calculate the difference between the two values.
If the difference is equal to any of the values entered, then display the following message: 
Difference is equal to value 
If the difference is not equal to any of the values entered, display the following message: 
Difference is not equal to any of the values entered*/
#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, difference;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Calculate the difference between the two numbers
    difference = fabs(num1 - num2); // Using fabs to ensure positive difference

    // Check if the difference is equal to any of the values entered
    if (difference == num1 || difference == num2) {
        printf("Difference is equal to %.2f\n", difference);
    } else {
        printf("Difference is not equal to any of the values entered\n");
    }

    return 0;
}

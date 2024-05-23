#include <stdio.h>

int main() {
    float num1, num2, product;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Check if the product is equal to, greater than, or less than 1000
    if (product == 1000) {
        printf("The product of %.2f and %.2f is equal to 1000.\n", num1, num2);
    } else if (product > 1000) {
        printf("The product of %.2f and %.2f is greater than 1000.\n", num1, num2);
    } else {
        printf("The product of %.2f and %.2f is less than 1000.\n", num1, num2);
    }

    return 0;
}

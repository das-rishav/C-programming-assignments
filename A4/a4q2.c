#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    // Input the numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Output the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Call the function to swap numbers
    swap(&num1, &num2);
    
    // Output the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

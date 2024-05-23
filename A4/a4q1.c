#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int number, result;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call the function to calculate square
    result = square(number);
    
    // Output the result
    printf("Square of %d is %d\n", number, result);
    
    return 0;
}

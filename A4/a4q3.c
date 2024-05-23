#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32], i = 0;
    
    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    
    // Print binary number in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimalNumber;
    
    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    // Call the function to convert decimal to binary
    decimalToBinary(decimalNumber);
    
    return 0;
}

//Write a program that accepts one string. Find the length of the string without using string function. 
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // This allows the input to include spaces

    // Traverse the string to find its length
    while (str[length] != '\0') {
        length++;
    }

    // Print the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}

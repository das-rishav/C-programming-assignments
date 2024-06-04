//Write a program that converts a string like "124" to an integer 124.
#include <stdio.h>

int main() {
    char str[100];
    int num = 0, i = 0;

    // Prompt user for input
    printf("Enter a number as a string: ");
    scanf("%s", str);

    // Convert string to integer
    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    // Print the integer value
    printf("The integer value is: %d\n", num);

    return 0;
}

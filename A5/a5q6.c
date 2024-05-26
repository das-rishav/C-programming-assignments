#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // This allows the input to include spaces

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Print the reversed string
    printf("The reversed string is: %s\n", reversed);

    return 0;
}

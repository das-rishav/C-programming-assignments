#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%[^\n]%*c", source); // This allows the input to include spaces

    // Copy the string
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string

    // Print the copied string
    printf("The copied string is: %s\n", destination);

    return 0;
}

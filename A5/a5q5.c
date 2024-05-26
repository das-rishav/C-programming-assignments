#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // This allows the input to include spaces

    // Convert lowercase letters to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }

    // Print the converted string
    printf("The converted string is: %s\n", str);

    return 0;
}

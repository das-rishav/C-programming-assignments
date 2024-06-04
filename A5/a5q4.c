//Write a program that accepts two strings. Check whether these two strings are same or not. 
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, same = 1;

    // Prompt user for the first string
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);

    // Prompt user for the second string
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2);

    // Compare the strings
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            same = 0;
            break;
        }
        i++;
    }

    // Check if the strings are the same
    if (same && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are the same.\n");
    } else {
        printf("The strings are not the same.\n");
    }

    return 0;
}

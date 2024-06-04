//Write a program that accepts two strings. The program should determine whether the first string occurs at the end of the second string.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i, occurs_at_end = 1;

    // Prompt user for the first string
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);

    // Prompt user for the second string
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2);

    // Calculate the length of the first string
    while (str1[len1] != '\0') {
        len1++;
    }

    // Calculate the length of the second string
    while (str2[len2] != '\0') {
        len2++;
    }

    // Check if the first string occurs at the end of the second string
    if (len1 > len2) {
        occurs_at_end = 0;
    } else {
        for (i = 0; i < len1; i++) {
            if (str1[len1 - 1 - i] != str2[len2 - 1 - i]) {
                occurs_at_end = 0;
                break;
            }
        }
    }

    // Print the result
    if (occurs_at_end) {
        printf("The first string occurs at the end of the second string.\n");
    } else {
        printf("The first string does not occur at the end of the second string.\n");
    }

    return 0;
}

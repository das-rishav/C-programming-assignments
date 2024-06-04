//Write a C Program to accept 5 names and a prefix. Insert the prefix at the beginning of each name in the array. Display the modified names.
#include <stdio.h>

int main() {
    char names[5][100], prefix[50], modifiedNames[5][150];
    int i, j, k, prefixLength, nameLength;

    // Prompt user for the prefix
    printf("Enter the prefix: ");
    scanf("%s", prefix);

    // Prompt user for the 5 names
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Calculate the length of the prefix
    prefixLength = 0;
    while (prefix[prefixLength] != '\0') {
        prefixLength++;
    }

    // Insert the prefix at the beginning of each name
    for (i = 0; i < 5; i++) {
        // Calculate the length of the current name
        nameLength = 0;
        while (names[i][nameLength] != '\0') {
            nameLength++;
        }

        // Insert the prefix at the beginning of the current name
        for (j = 0; j < prefixLength; j++) {
            modifiedNames[i][j] = prefix[j];
        }
        for (k = 0; k <= nameLength; k++) {
            modifiedNames[i][j + k] = names[i][k];
        }
    }

    // Print the modified names
    printf("\nModified names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", modifiedNames[i]);
    }

    return 0;
}

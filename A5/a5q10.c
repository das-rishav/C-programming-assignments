#include <stdio.h>

int main() {
    char str[1000], cleaned_str[1000];
    int i, j;

    // Prompt user for input
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    // Initialize index for cleaned string
    i = 0;
    j = 0;

    // Remove extra spaces
    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ') {
            i++;
        }
        
        // Copy non-space characters
        while (str[i] != ' ' && str[i] != '\0') {
            cleaned_str[j++] = str[i++];
        }
        
        // Insert one space for consecutive spaces
        if (str[i] == ' ') {
            cleaned_str[j++] = str[i++];
            
            while (str[i] == ' ') {
                i++;
            }
        }
    }
    
    cleaned_str[j] = '\0';

    // Print the cleaned string
    printf("Cleaned string: %s\n", cleaned_str);

    return 0;
}

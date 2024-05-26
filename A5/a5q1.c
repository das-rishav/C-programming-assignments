#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    int vowels = 0, consonants = 0;

    // Prompt user for input
    printf("Enter a word: ");
    scanf("%s", word);

    // Traverse the word
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]); // Convert to lowercase for uniformity

        // Check if character is a letter
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

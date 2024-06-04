//Write a program in C to count the total number of duplicate elements in an array.
#include <stdio.h>

#define SIZE 10 // Change the size of the array as needed

int main() {
    int numbers[SIZE];
    int duplicates = 0;

    // Accepting numbers into the array
    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // Counting duplicates
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (numbers[i] == numbers[j]) {
                duplicates++;
                break; // Count the duplicate only once
            }
        }
    }

    // Printing the total number of duplicate elements
    printf("Total number of duplicate elements: %d\n", duplicates);

    return 0;
}

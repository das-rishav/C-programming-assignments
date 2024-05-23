#include <stdio.h>

#define SIZE 5 // Change the size of the array as needed

int main() {
    int numbers[SIZE];
    int sum = 0;

    // Accepting numbers into the array
    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculating the sum of all elements
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }

    // Printing the sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

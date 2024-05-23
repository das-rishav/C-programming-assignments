#include <stdio.h>

#define SIZE 5 // Change the size of the array as needed

int main() {
    int numbers[SIZE];
    int min, max;

    // Accepting numbers into the array
    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initializing min and max with the first element
    min = max = numbers[0];

    // Finding the minimum and maximum values
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Printing the minimum and maximum values
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

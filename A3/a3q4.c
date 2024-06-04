//Write a program in C to copy the elements of one array into another array.
#include <stdio.h>

#define SIZE 5 // Change the size of the array as needed

int main() {
    int sourceArray[SIZE];
    int destinationArray[SIZE];

    // Accepting numbers into the source array
    printf("Enter %d numbers for the source array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copying elements from the source array to the destination array
    for (int i = 0; i < SIZE; i++) {
        destinationArray[i] = sourceArray[i];
    }

    // Printing the destination array
    printf("\nElements copied to destination array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}

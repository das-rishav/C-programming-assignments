#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int unique[SIZE] = {0}; // Array to store unique elements

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        unique[numbers[i]]++;
    }

    printf("\nUnique elements in the array:\n");
    for (int i = 0; i < SIZE; i++) {
        if (unique[numbers[i]] == 1) {
            printf("%d ", numbers[i]);
            unique[numbers[i]] = 0; // Marking as printed
        }
    }
    

    return 0;
}

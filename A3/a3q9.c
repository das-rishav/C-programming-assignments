//Write a program in C to sort elements of an array in ascending order.
#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; scanf("%d", &numbers[i++]));

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < SIZE; printf("%d ", numbers[i++]));
    printf("\n");
    return 0;
}

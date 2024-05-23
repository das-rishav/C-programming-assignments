#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE], largest, secondLargest;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; scanf("%d", &numbers[i++]));

    largest = (numbers[0] > numbers[1]) ? numbers[0] : numbers[1];
    secondLargest = (numbers[0] > numbers[1]) ? numbers[1] : numbers[0];

    for (int i = 2; i < SIZE; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    printf("Second largest element in the array: %d\n", secondLargest);

    return 0;
}

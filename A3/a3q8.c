#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE], even[SIZE], odd[SIZE], evenCount = 0, oddCount = 0;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; scanf("%d", &numbers[i++]));

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] % 2 == 0) even[evenCount++] = numbers[i];
        else odd[oddCount++] = numbers[i];
    }

    printf("\nEven integers:\n");
    for (int i = 0; i < evenCount; printf("%d ", even[i++]));

    printf("\n\nOdd integers:\n");
    for (int i = 0; i < oddCount; printf("%d ", odd[i++]));

    return 0;
}

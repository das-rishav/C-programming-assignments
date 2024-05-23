#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next;

    // Input the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Printing the first two terms (1, 1)
    printf("%d %d ", first, second);

    // Generating and printing the rest of the terms
    for (int i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

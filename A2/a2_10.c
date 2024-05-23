#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for the pattern
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

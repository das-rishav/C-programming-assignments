//Write a program to generate the following pattern: 
//1
//1 2 
//1 2 3 
//1 2 3 4 
//1 2 3 4 5 
//1 2 3 4 5 6 
//1 2 3 4 5 6 7 
//1 2 3 4 5 6 7 8 
//1 2 3 4 5 6 7 8 9
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

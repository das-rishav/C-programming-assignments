//Declare two variables x and y. Assign values to these variables. Number x should be printed only if it is less than 2000 or greater than 3000, and number y shouldbe printed only if it is between 100 and 500.
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    // Printing x only if it's less than 2000 or greater than 3000
    if (x < 2000 || x > 3000) {
        printf("x: %d\n", x);
    }

    // Printing y only if it's between 100 and 500
    if (y >= 100 && y <= 500) {
        printf("y: %d\n", y);
    }

    return 0;
}

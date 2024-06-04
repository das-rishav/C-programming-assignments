//Write a program to print the series 100, 95 , 90, 85,………., 5.
#include <stdio.h>

int main() {
    // Starting value of the series
    int num = 100;

    // Loop to print the series
    while (num >= 5) {
        printf("%d\n", num);
        num -= 5; // Decrease the value by 5 for each iteration
    }


    return 0;
}

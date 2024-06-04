//Accept values in three variables and print the highest value.
#include <stdio.h>

int main() {
    int a, b, c;

    // Input values for three variables
    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assuming 'a' as the highest initially
    int highest = a;

    // Checking if 'b' is higher than 'a'
    if (b > highest) {
        highest = b;
    }

    // Checking if 'c' is higher than 'a' and 'b'
    if (c > highest) {
        highest = c;
    }

    // Printing the highest value
    printf("The highest value is: %d\n", highest);

    return 0;
}

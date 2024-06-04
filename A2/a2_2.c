//Write a program that accepts two numbers a and b and checks whether or not a is divisible by b.
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers from the user
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Check if a is divisible by b
    if (b != 0 && a % b == 0) {
        printf("%d is divisible by %d\n", a, b);
    } else {
        printf("%d is not divisible by %d\n", a, b);
    }

    return 0;
}

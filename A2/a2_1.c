#include <stdio.h>
int main() {
    int sum = 10;
    char letter = 'A';
    float discount = 0.15;
    float dump = 123.456789;

    printf("Value of sum: %d\n", sum);
    printf("Welcome\n");
    printf("Character: %c\n", letter);
    printf("Discount: %f\n", discount);
    printf("Dump with two decimal places: %.2f\n", dump);

    int s;
    float discount_rate;
    printf("Enter a decimal value for sum: ");
    scanf("%d", &s);
    printf("Enter a float value for discount rate: ");
    scanf("%f", &discount_rate);
    printf("Sum: %d\n", s);
    printf("Discount Rate: %f\n", discount_rate);

    return 0;
}


//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of the series
double sumOfSeries() {
    double sum = 0.0;
    for (int i = 1; i <= 5; i++) {
        sum += (double) factorial(i) / i;
    }
    return sum;
}

int main() {
    // Calculate and print the sum of the series
    double result = sumOfSeries();
    printf("The sum of the series is: %.2f\n", result);

    return 0;
}

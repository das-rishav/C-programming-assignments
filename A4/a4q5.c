#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;

    // Calculate the sum of divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum is equal to the original number
    return (sum == num);
}

// Function to print all perfect numbers in a given range
void printPerfectNumbersInRange(int start, int end) {
    printf("Perfect numbers between %d and %d are: ", start, end);
    for (int num = start; num <= end; num++) {
        if (isPerfect(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int startRange, endRange;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &startRange);
    printf("Enter the end of the range: ");
    scanf("%d", &endRange);

    // Call the function to print perfect numbers in the range
    printPerfectNumbersInRange(startRange, endRange);

    return 0;
}

//Write a program in C to check Armstrong and Perfect numbers using the function.
#include <stdio.h>
#include <math.h>

int check_armstrong(int n) {
  int originalNum = n;
  int sum = 0;
  int digitCount = 0;

  // Count the number of digits in the input number.
  while (n != 0) {
    n /= 10;
    digitCount++;
  }

  // Reset n to the original value for further processing.
  n = originalNum;

  // Calculate the sum of cubes of digits using a loop.
  while (n != 0) {
    int digit = n % 10;
    sum += pow(digit, digitCount);
    n /= 10;
  }

  // Check if the sum is equal to the original number.
  if (sum == originalNum) {
    return 1;
  } else {
    return 0;
  }
}

int check_perfect(int n) {
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  // Check if the sum is equal to the original number.
  if (sum == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (check_armstrong(n)) {
    printf("%d is an Armstrong number.\n", n);
  } else {
    printf("%d is not an Armstrong number.\n", n);
  }

  if (check_perfect(n)) {
    printf("%d is a Perfect number.\n", n);
  } else {
    printf("%d is not a Perfect number.\n", n);
  }

  return 0;
}

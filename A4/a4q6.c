//Write a C program to find the maximum and minimum of some values using a function that returns an array.
#include <stdio.h>

// Function to find the maximum and minimum values in an array
void findMaxMin(int arr[], int n, int result[]) {
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    result[0] = max;
    result[1] = min;
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result[2];  // Array to store max and min values

    // Call the function to find max and min
    findMaxMin(arr, n, result);

    // Output the result
    printf("Maximum value: %d\n", result[0]);
    printf("Minimum value: %d\n", result[1]);

    return 0;
}

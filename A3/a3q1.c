//Write a program that accepts the following numbers in an array and reverses the array. 
//34 
//45 
//56 
//67 
//89
#include <stdio.h>
#define SIZE 5
int main() 
{
    int numbers[SIZE];

    // Accepting numbers into the array
    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    // Reversing the array in place
    for (int i = 0, j = SIZE - 1; i < j; i++, j--) 
    {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    // Printing the reversed array
    printf("\nReversed array:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

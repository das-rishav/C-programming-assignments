//Write a program in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>
#define size 5
int main() {
    int arr1[size], arr2[size], merged[2*size], i = 0, j = 0, k = 0;

    printf("Enter %d elements for the first array (in descending order) :\n",size);
    for (i = 0; i < size; scanf("%d", &arr1[i++]));

    printf("Enter %d elements for the second array (in descending order) :\n",size);
    for (i = 0; i < size; scanf("%d", &arr2[i++])) ;

    i = 0;
    while (i < size && j < size) merged[k++] = (arr1[i] >= arr2[j]) ? arr1[i++] : arr2[j++];
    while (i < size) merged[k++] = arr1[i++];
    while (j < size) merged[k++] = arr2[j++];

    printf("Merged and sorted array: ");
    for (i = 0; i < 2*size; printf("%d ", merged[i++]));
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int marks;

    // Input marks from the user
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Evaluate the grade based on the given constraints
    if (marks > 75) {
        printf("Grade: A\n");
    } else if (marks > 60 && marks <= 75) {
        printf("Grade: B\n");
    } else if (marks > 45 && marks <= 60) {
        printf("Grade: C\n");
    } else if (marks > 35 && marks <= 45) {
        printf("Grade: D\n");
    } else {
        printf("Grade: E\n");
    }

    return 0;
}

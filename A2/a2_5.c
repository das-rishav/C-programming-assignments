//Write a program to evaluate the Grade of a student for the following constraints:
//   If marks > 75 – grade A
//    If 60 < marks < 75 – grade B 
//    If 45 < marks<60 – grade C 
//    If 35 < marks<45 - grade D 
//    If marks < 35 – grade E
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

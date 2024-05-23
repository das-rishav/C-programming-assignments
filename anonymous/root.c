#include <stdio.h>
#include <math.h>

void find_roots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %.2f\nRoot 2: %.2f\n", root1, root2);
    } else {
        float real_part = -b / (2 * a);
        float imaginary_part = sqrt(fabs(discriminant)) / (2 * a);
        printf("Root 1: %.2f + %.2fi\nRoot 2: %.2f - %.2fi\n", real_part, imaginary_part, real_part, imaginary_part);
    }
}

int main() {
    float a, b, c;
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the constant term: ");
    scanf("%f", &c);

    find_roots(a, b, c);

    return 0;
}

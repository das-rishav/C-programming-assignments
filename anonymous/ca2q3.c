#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area, perimeter;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area and perimeter
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    // Output the calculated values
    printf("Area of the circle: %.2lf\n", area);
    printf("Perimeter of the circle: %.2lf\n", perimeter);

    return 0;
}

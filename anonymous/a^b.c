#include<stdio.h>
#include<math.h>
int main()
{
double a, b;
printf("Enter two numbers : ");
scanf("%lf %lf", &a, &b);

double result = pow(a, b);
printf("%.2lf raised to the power %.2lf is %.2lf\n", a, b, result);

return 0;
}
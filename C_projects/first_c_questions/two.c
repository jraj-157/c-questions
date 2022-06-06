#include <stdio.h>

void area(double radius, double *area);
void circum(double radius, double *circum);

int main(void)
{
    double radius, ar, cir;

    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius); 
    area(radius, &ar);  // caling the function by reference
    circum(radius, &cir);  // caling the function by reference  
    printf("Area of circle : %0.4f\n", ar);
    printf("Circumference of circle : %0.4f\n", cir);
    return 0;
}

void area(double radius, double *area)
{
    double PIE = 3.1416;
    *area = PIE * radius * radius;
    
}
void circum(double radius,  double *circum)
{
    double PIE = 3.1416;
    *circum = PIE * radius * 2;
}
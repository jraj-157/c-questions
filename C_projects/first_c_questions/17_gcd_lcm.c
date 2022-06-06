#include <stdio.h>
 
// defining the function
int gcd_lcm(num1 ,num2){

    int  gcd, lcm, remainder, numerator, denominator;
 
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;  // the gratest common devisor deviding the easisst way
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    return 0 ;
}

int main()
{
    int num1 ,num2 ;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    gcd_lcm(num1,num2);
}

#include <stdio.h>
#include <math.h> // using the sqrt

int main()
{
    float a,b,c; //input of equation
    float r1 ,r2 ;  // two real roots
    float D; // the discriminant to find the roots
    float img; // any imaginary root for + or - to be multiplies
    

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b*b) - (4*a*c);
    if (D>0){
        r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);
        printf("roots are %0.2f and %0.2f",r1,r2 );
    }
    else if (D==0)
    {
       r1 = r2 = -b/(2*a);
       printf("roots are %0.2f and %0.2f",r1,r2 );
    }
    else {
        r1 = r2 = -b/(2*a);
        img = sqrt(-D)/(2*a);
        printf("the roots are  %.2f + i%.2f and %.2f - i%.2f",r1,img,r2,img);
    }
    
    return 0;
}

#include<stdio.h>
#include<math.h>
// assigning function 
float area(float, float, float);
 // calling the function
int main()
{
   float a, b, c, result;
 
   printf("\n Please Enter the three sides\n");
   scanf("%f%f%f",&a,&b,&c);
 
   result= area(a, b, c);
   printf("\nArea of triangle = %.2f\n", result);
 
   return 0;
}
 // defining the function
float area( float a, float b, float c )
{
   float s, result;
 
   s = (a+b+c)/2;
   result = sqrt(s*(s-a)*(s-b)*(s-c));
   return result;
}


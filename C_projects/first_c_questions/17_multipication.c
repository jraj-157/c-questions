#include<stdio.h>  
  
int tables(int);  
  // taking the input and calling the function
int main()  
{  
    int num;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    tables(num);  
  
    return 0;  
}  
  // defining the function
int tables(int num)  
{  
    int count;  
  
    for(count = 1; count <= 10; count++)  
    {  
        printf("%d x %d = %d\n", num, count, num*count);  
    }
    return 0;
}
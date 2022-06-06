#include<stdio.h>

int main()

{

void swap(int,int);

int a,b;

printf("enter the values for a,b \n");

scanf("%d%d",&a,&b);

swap(a,b); // calling the function

printf("%3d%3d\n",a,b);

}

void swap(int x,int y)

{

int t; // main function starts 

t=x; // assigning a constant to first value

x=y; // assigning the second value to first value

y=t; // final assigning

printf("%3d%3d\n",x,y);

}
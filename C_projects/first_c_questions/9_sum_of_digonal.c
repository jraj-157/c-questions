#include<stdio.h>
 
int main()
{
    int i,j,r,c,sum=0,summ=0;
    printf("Enter the size of the square matrix\n");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    if (r==c){
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
 
    printf("The matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==r-1)
            {
                summ=summ+mat[i][j];
            }
        }
    }
 
    printf("The sum of principal diagonal elements of a square matrix = %d\n",sum);
    printf("The sum of off-principal diagonal elements of a square matrix = %d\n",summ);
    }
    else{
        printf("Enter valid square matrix ");
    }
}
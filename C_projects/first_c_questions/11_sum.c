#include<stdio.h>
 
int main()
{
    int i, j, rows, columns, a[10][10], s,p ,q,Sum_row=0,Sum_col=0;
    
    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);
    
    printf("Please Enter the Matrix Row and Column Elements \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    printf("use 0 for row and 1 for column :");
    scanf("%d",&s);
    if(s==0){
    printf("Provide the row-1 no. you want to sum of all elements in it :");
    scanf("%d",&p);
    for(columns = 0; columns < j; columns++)
    {
        
        Sum_row = Sum_row + a[p][columns]; // keeping that row constant
    
    }
    printf("The Sum of Elements of a Rows in a Matrix =  %d\n", Sum_row );
    }
    else if (s==1)
    {
       
    
    
    printf("Provide the column-1 no. you want to sum of all elements in it :");
    scanf("%d",&q);
    for(rows = 0; rows < j; rows++)
        {
            
            Sum_col = Sum_col + a[rows][q]; // keeping that column constant
    }
    printf("The Sum of Elements of a column in a Matrix =  %d\n", Sum_col );
    }
    else{
        printf("enter valid no.");
    }
    return 0;
}
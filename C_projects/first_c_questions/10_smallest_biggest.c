#include<stdio.h>
int main()
{
  int m, n, b, s;
  int largrow, largcolumn, smallrow, smallcolumn;
  printf("Enter number of row and column: ");
  scanf("%d %d",&m,&n);
  int arr[m][n], i, j;
  for(i=0;i<m;i++)  
  {
    for(j=0;j<n;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  b=arr[0][0];      // for two variables one taking smallest and another biggest and assigning to [0][0] then comparing
  s=arr[0][0];


  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(b<arr[i][j])
      {
        b=arr[i][j];
        largrow=i;  //row location of largest element
        largcolumn=j;   //column location of largest element
      }

      if(s>arr[i][j])
      {
        s=arr[i][j];
        smallrow=i;  //row location of smallest element
        smallcolumn=j;  //column location of smallest element
      }
    }
  }

 
  printf("\n"); 
  printf("Largest element in matrix is %d in location %d %d\n",
             b, largrow+1, largcolumn+1);
  printf("Smallest element in matrix is %d in location %d %d\n",
             s, smallrow+1, smallcolumn+1);

  return 0;
}

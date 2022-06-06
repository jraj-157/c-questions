#include <stdio.h>

// defining the function
int base_conv(int n, int b)
{
    int a[100], i;
    for (i = 0; n > 0; i++)
    {
      a[i] = n % b;
      printf("%d", n%b);
      n = n / b;
    }
    for(i=i-1;i>=0;i--)
  {
    printf("%d", a[i]);
  }
    return 0;
}

// calling the function
int main(){
  int n, b;
  while (1){
      printf ("Enter base 10 number and base: {space sparated}\n");
      scanf ("%d %d", &n, &b);
      if (b > 9){
          printf("Conversion not possible.\n");
      }
      else{
          break;
      }
  }
  
  printf("Conversion of %d to base %d is: ", n, b);
  int res_a[100], i= base_conv(n, b);
  return 0;
}
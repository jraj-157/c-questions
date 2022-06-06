#include <stdio.h>

int x ,y ;
// defining the function
int Power(x,y){
    int result = 1; 
	for(int i = 0; i < y; i++) 
	{ 
		result *= x; 
	} 
	return result;
}
// scanning the input and providing the output

int main(){
    int num1, num2;

  printf("Enter base and power repectively ");
  scanf("%d %d", &num1, &num2);

  printf("%d ^ (%d) = %d\n", num1, num2, Power(num1, num2));
  

  return 0;
}


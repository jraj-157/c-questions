#include <stdio.h>
// defining factorial common for both
int factorial(int n) {
	int factorial = 1;
	for (int i = 2; i <= n; i++)
		factorial = factorial * i;
	return factorial;
}
// using ncr definition
int nCr(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}
 
int nPr(int n, int r) {
	return factorial(n) / (factorial(n - r));
}
// using npr defintition
int main() {
    int n,r;
	printf("Enter n and r:");
    scanf("%d %d",&n ,&r);

	printf("nCr is %d\n", nCr(n, r));
    printf("nPr is %d",nPr(n,r));
	return 0;
}



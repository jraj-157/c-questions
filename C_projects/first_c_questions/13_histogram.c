#include <stdio.h>
int main(){
    int y;
    printf("enter number of years for which data to be made: ");
    scanf("%d",&y);
    int a[y],b[y];
    for(int i=0;i<y;i++){
        printf("Enter year: ");
        scanf("%d",&a[i]);
        printf("Enter students: ");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<y;i++){
        printf("     |\n");
        printf("     |");
        for(int j=0;j<b[i];j++)
            printf("$"); // using any sybmolic representation for count
        printf("\n");
        printf("%d |",a[i]);
        for(int j=0;j<b[i];j++)
            printf("$");
        printf(" %d\n",b[i]);
        printf("     |");
        for(int j=0;j<b[i];j++)
            printf("$"); 
        printf("\n");
        printf("     |\n");
    }
    
}
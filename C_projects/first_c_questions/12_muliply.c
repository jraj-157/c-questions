#include <stdio.h>
int main(){
    int r1, c1 , r2, c2;
    printf("Enter the number of row for 1st matrix: ");
    scanf("%d" , &r1);
    printf("Enter the number of column 1st matrix: ");
    scanf("%d" , &c1);
    printf("Enter the number of row for 2nd matrix: ");
    scanf("%d" , &r2);
    printf("Enter the number of column 2nd matrix: ");
    scanf("%d" , &c2);

    int mat1[r1][c1] , mat2[r2][c2];
    if(c1 != r2){
        printf("c1 != r2 so multipication invalid");
    }
    else{
    printf("Enter 1st matrix elements:\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
        scanf("%d" , &mat1[i][j]);
        }
    }
    printf("Enter 2nd matrix elements:\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
        scanf("%d" , &mat2[i][j]);
        }
    }

    int mat[r1][c2]  ;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            mat[i][j] = 0;
            for(int k=0; k<c1; k++){
                mat[i][j]+= mat1[i][k] * mat2[k][j]; // using M11 = a11*b11 + a12 *b21 + a13*b31
            }
        }
    }
    printf("Product matrix is:\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
        printf("%d " , mat[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}

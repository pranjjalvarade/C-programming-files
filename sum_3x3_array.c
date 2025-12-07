//   ADDITION OF TWO 3X3 ARRAYS

#include<stdio.h>
int main(){
    int A[3][3] ,B[3][3], C[3][3] , i , j ;
    printf("Enter arrays A & B :\n");
    // accepting arrays
    for( i = 0 ; i < 3 ; i++)  
    {
        for ( j = 0 ; j < 3 ; j++){
        // scanf("%d %d",&A[i][j], &B[i][j]);
        printf("Enter a number for A[%d][%d] & B[%d][%d] :\n ", i+1 , j+1 , i+1 , j+1);
        scanf("%d%d",&A[i][j],&B[i][j]);
        C[i][j] = A[i][j] + B[i][j];    // adding the elements directly after accepting
        }
    }
    printf("\nThe sum of the given two matrices is :\n");
    // printing the solution array
    for( i = 0 ; i < 3 ; i++)
    { 
        printf("\n");
        for ( j = 0 ; j < 3 ; j++)
        printf("%d\t", C[i][j]);
    }    
    return 0 ;
}
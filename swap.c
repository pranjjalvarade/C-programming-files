//              SWAPPING NUMBERS USING THIRD VARIABLE 

#include<stdio.h>

int main (){
    int n1,n2,empty;
    printf("Enter two numbers here :");
    scanf("%d %d",&n1,&n2);
    empty = n1 ;
    n1 = n2 ;
    n2 = empty;
    printf("The numbers have been swapped as n1 = %d and n2 = %d", n1 , n2 );
    return 0 ;
}
//    PRINTS A SQUARE OF NxN 

#include<stdio.h>
void main (){
    int n , r , c;
    printf("Enter a number here:");
    scanf ("%d",&n);

    for (r=1 ; r <= n ; r++)
    {
        for (c = 1 ; c <= n ; c++) 
    printf("  %d", r);
    printf("\n");
    }
}
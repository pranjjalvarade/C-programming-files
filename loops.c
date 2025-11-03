// Accept a number from the user and display it's table

#include<stdio.h>
void main (){
    int num ;
    printf("Enter a number here :");
    scanf("%d", &num);
    int i;
    for (i=0; i<13 ; i++)
    printf ("%d x %d = %d\n", num, i , num*i);
     
}
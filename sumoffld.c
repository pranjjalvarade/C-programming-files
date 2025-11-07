//          PRINTS THE ADDITION OF THE FIRST AND THE LAST DIGIT OF THE ENTERED NUMBER

#include<stdio.h>
void main (){
    int num , d1 , d2 ;

    try_again :
    printf("Enter a 5 digit number:");
    scanf("%d", &num);

    if( num>99999 || num < 10000 )
    {
        printf("Please enter a 5 digit number\n");
        goto try_again ;
    }
    d1 = num/10000;
    d2= num%10 ;

    printf("The sum of the first and the last digit is %d", d1 + d2);
}
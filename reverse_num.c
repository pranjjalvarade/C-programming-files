//         PRINTS THE REVERSE NUMBER OF THE ENTERED NUMBER

#include<stdio.h>
void main (){
    int num , rev_num , d1 , d2 , d3 , d4 ;

    do {
    printf("Enter a 4 digit number here:");
    scanf ("%d", &num);

    if ( num < 1000 || num > 9999 )
    printf("Invalid number . Please enter a 4 digit number\n");
    } while (num < 1000 || num > 9999 );

    d1 = num / 1000;
    d2 = (num /100) % 10;
    d3 = ( num/10 ) % 10;
    d4 = num % 10;

    rev_num = d4*1000 + d3*100 + d2*10 + d1;
    printf("The reverse number is %d", rev_num); 
}
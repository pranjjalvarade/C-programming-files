//        FINDS THE NUMBERS BETWEEN THE GIVEN RANGE WHICH ARE DIVISIBLE BY 7


#include<stdio.h>
void main (){
    int x , n=1 , u ;

    printf("Enter the upper limit here:");
    scanf("%d", &u);

    for (n = 1; n <= u ; n++)
    {   
        if ( n % 7 == 0 )
        printf("%d  ", n);
    }

}
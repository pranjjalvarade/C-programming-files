#include<stdio.h>
void main (){
    int x = 0 , y = 1, sum = 0 ;
    sum = x + y;

    while (sum<=1000)
    {
        int temp;
        temp = sum;
        x = y ;
        y = temp ;
        sum = x + y;
        printf("   %d",sum);
    }
}
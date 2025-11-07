//      COUNTS THE NUMBER OF DIGITS IN A NUMBER

#include<stdio.h>

int main (){
    int num , cnt=0;

    printf("Enter a number here:");
    scanf("%d", &num);

    if ( num == 0 )
    {
        cnt = 1 ;
    }
    else {
        if (num < 0)
        num = -num;
    }
    while (cnt <= num)
    {
        num = num / 10 ;
        cnt++; 
    }
    printf("Thr number of digits is %d", cnt);

    return 0 ;
}
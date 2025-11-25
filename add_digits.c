//        ADDS THE DIGITS OF THE NUMBER TILL THE SUM IS A SINGLE DIGIT

#include<stdio.h>
#include<stdlib.h>
void main (){

    int num ;

    printf("Enter a 2 digit number :");         // taking input from the user
    scanf("%d", &num);

    if (num < 10 || num > 99)             // run the program only if the number is a 2 digit no.
    {
        printf("Invalid number. Exiting the program .");
        exit(0);
    }

    while (num > 9 )        // making sure that the number is 2 digit number
    {
        int temp = num ;     // transfering the number to another variable so that it isn't harmed
        int sum = 0 ;

        while (temp != 0)   // enter this loop only when the number isn't finished 
        {
            sum += temp % 10 ;   // adding the last digit
            temp /= 10 ;         //   eliminating the last digit 
        }
        num = sum ;      // replacing the number by the sum as we want the final sum to be single digit
    }
    printf("%d", num);
}
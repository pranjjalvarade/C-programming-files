//    CALCULATES THE FACTORIAL OF THE GIVEN NUMBER

#include<stdio.h>
void main()
{
    int n , cnt , fact = 1;
    printf("Enter a number to find it's factorial:");
    scanf("%d", &n);

    for (cnt = 1 ; cnt <=n ; cnt++)
    fact = fact*cnt ;

    printf("The factorial of %d is %d", n , fact);

}
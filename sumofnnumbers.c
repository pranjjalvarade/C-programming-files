//     PRINTS THE SUM OF FIRST N NATURAL NUMBERS

#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number here:");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of natural numbers upto %d is %d.", n , sum);
    return 0;
}
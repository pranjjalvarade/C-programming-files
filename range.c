//        CHECKS IF A NUMBER LIES IN THE ENTERED RANGE OR NOT


#include <stdio.h>
#include <stdlib.h>
int main()
{

    int upl, ll, num;

try_again:
    printf("Enter the upper and the lower limit (upper limit > lower limit) :");
    scanf("%d  %d", &upl, &ll);

    if (upl <= ll)
    {
        printf("The upper limit should be greater than the lower limit");
        printf("\n");
        goto try_again;
    }

    printf("Enter the number :");
    scanf("%d", &num);

    if (num <= upl && num >= ll)
        printf("The number lies in the range.");
    else
        printf("The number doesn't lie in the range.");

    return 0;
}
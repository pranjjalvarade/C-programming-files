#include <stdio.h>

void main()
{

    int x = 0, osum = 0, esum = 0 , n ;
    printf("Enter the number here :");
    scanf ("%d", &n);
    
    while (x <=n)
    {
        if (x % 2 == 0)
            esum += x;
        else
            osum += x;
        x++;
    }
    printf("The sum of even numbers is %d\n", esum);
    printf("The sum of odd numbers is %d", osum);
}
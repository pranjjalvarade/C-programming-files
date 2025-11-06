//     PRINTS TRIANGLE OF THE ENTERED NUMBER OF LINES

#include <stdio.h>
void main()
{
    int n, r, c;
    printf("Enter a number here:");
    scanf("%d", &n);

    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
            // printf("%d", c);
            printf("*");
        printf("\n");
    }
}
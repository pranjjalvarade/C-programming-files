//         PRINTS THE NUMBERS WHICH ARE DIVISBLE BY 3 AND NOT 4

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers between 1 and %d that are divisible by 3 but not by 4:\n", n);

    for (i = 1; i <= n; i++) 
    {
        if (i % 3 == 0 && i % 4 != 0) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

//              SWAPPING NUMBERS WITHOUT USING 3rd VARIABLE

#include <stdio.h>
int main()
{
    int a = 30;
    int b = 10;
    printf(" Here a = %d and b = %d\n", a , b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Thr numbers are swapped as a = %d and b = %d", a , b);
    return 0;
}
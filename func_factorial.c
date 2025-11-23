//       CALCULATE FACTORIAL OF A NUMBER USING FUNCTION

#include<stdio.h>

int fact(int);

// int fact(int no)
// {
//     int i , f=1;
//     for (i = 1 ; i <= no ; i++)
//     f = f*i;
//     return f;
// }

void main (){
    int n;
    printf("Enter the number to find it's factorial:");
    scanf("%d", &n);

    printf("The factorial of %d is %d.", n , fact(n));
}

int fact(int no)
{
    int i , f=1;
    for (i = 1 ; i <= no ; i++)
    f = f*i;
    return f;
}

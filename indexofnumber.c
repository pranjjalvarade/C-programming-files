//      CALCULATES THE POWER OF THE ENTERED NUMBER

#include<stdio.h>
#include<math.h>

void main (){
    int x , y , ans ;
    printf("Enter the base here:");
    scanf("%d", &x);

    printf("Enter the power here:");
    scanf("%d", &y);

    ans = pow(x,y);

    printf("%d raised to power %d is %d", x , y , ans);
}
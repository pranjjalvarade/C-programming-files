//       CHECKS IF A TRIANGLE IS RIGHT ANGLED OR NOT

#include<stdio.h>
int main (){
    int a , b , c ;
    
    printf("Enter the sides of a triangle:");
    scanf("%d  %d  %d", &a , &b, &c);

    if ( (b*b) == (a*a + c*c))
    printf("The given triangle is a right angled triangle.");
    else
    printf("Thr given triangle is not a right angled triangle.");

    return 0 ;
}

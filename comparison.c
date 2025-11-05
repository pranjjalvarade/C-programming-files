//                COMPARISON BETWEEN TWO NUMBERS

#include<stdio.h>
int main (){
    int x , y;
    printf ("Enter two numbers here :");
    scanf ("%d     %d", &x,&y);
    if (x>y)
    printf("%d is greater than %d",x,y);
    else 
    {
        if (x==y)
        printf("Both are equal");
        else
        printf("%d is greater than %d",y,x);
    }
    return 0 ;
}
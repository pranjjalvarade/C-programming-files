//     CHECKS IF A NUMBER IS AN ALPHBET OR NOT

#include<stdio.h>
void main (){
    char ch ;

    printf("Enter a character here:");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch<='Z') || (ch>= 'a' && ch <='z'))
    {printf("The entered character is an alphabet.");}
    else 
    {printf("Th entered character is not an alphabet.");}
}
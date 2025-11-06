//           CHECKS IF THE ENTERED ALPHABET IS UPPERCASE OR LOWERCASE


#include<stdio.h>
void main (){
    char al ;
    printf("Enter an plphabet here:");
    scanf("%c", &al);

    if (al >= 'A' && al <= 'Z')
    printf ("The entered alphabet is UPPERCASE.");
    else 
    {
        if (al >= 'a' && al <= 'z') 
        printf("The entered alphabet is lowercase.");
    }
}
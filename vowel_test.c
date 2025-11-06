//                      CHECKS WHETHER THE ENTERED ALPHABET IS A VOWEL OR NOT


#include <stdio.h>
void main()
{

    char alpha;

    printf("Enter an alphabet here:");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        printf("The entered alphabet is a vowel.");
    else
        printf("The entered alphabet is a consonant.");
}
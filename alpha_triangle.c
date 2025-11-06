//             PRINTS A TRIANLE OF ALPHABETS


#include<stdio.h>
void main (){

    int r , c ;
    // char alpha = 'A' ;                
   
    for (r = 1 ; r <= 5 ; r++)
    {
        char alpha = 'A' ;
        for (c = 1 ; c <= r ; c++)
        {
            printf ("%c", alpha);
            alpha++;
        }
            printf("\n");
    }
    
}


#include<stdio.h>
void main (){
    int x = 0 ;
    while ( x==5)    // GIVES BLANK OUTPUT
    {
        printf ("Hello");
        x++;
    }    
}

/* EVEN IF WE WRITE 
    for (x=0 ; x==5 ; x++)   ==>  BLANK OUTPUT 
    BECAUSE THIS MEANS 'RUN THE BLOCK ONLY IF x==5 OTHERWISE EXIT THE BLOCK' 
*/

/* HOWEVER IF WE WRITE 
    for (x=0 ; x<5 ; x+=)   ==>   PRINTS HELLO 5 TIMES 
    BECAUSE THIS MEANS 'RUN THE CODE TILL THE GIVEN CONDITION (x<5) BECOMES FALSE'
    SO THE CONDITION IS TRUE TILL x BECOMES 4 
    SO IT PRINTS HELLO 5 TIMES (x is initialised with 0)
*/

// IF WE DON'T WRITE x++  IT BECOMES AN INFINITE LOOP 
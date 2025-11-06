//         BASIC DO - WHILE LOOP


#include<stdio.h>

int main(){
    // int x = 10 ;
    int x = 0 ;
    do    //  FIRST IT WILL EXECUTE THIS BLOCK THEN CHECK THE CONDITION
    {     //  MEANING EVEN IF THE CONDITION IS FALSE THE LOOP WILL BE EXECUTED ONCE
        printf ("Hello\n");
        x++;
    }
    while (x<10);

    return 0 ;
}
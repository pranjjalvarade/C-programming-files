//    ACCEPT MARKS AND DISPLAY PERCENTAGE (using array)

#include <stdio.h>
void main()
{
    int marks[5];
    int i = 0;
    printf("Enter marks of 5 subjects\n" );

    for (i = 0; i <= 4; i++)
    {
        printf("Enter the marks for subejct %d:", i+1);
        scanf("%d", &marks[i]);
    }

    for (i=0 ; i<5 ; i++)
    {
    printf("Marks of subject %d are %d\n",i+1, marks[i]);
    }

    int total = 0;

    for (i = 0; i <= 4; i++)
        total = total + marks[i];
        printf("total marks are %d\n", total);    
}
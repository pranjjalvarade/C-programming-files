//    ACCEPT MARKS AND DISPLAY PERCENTAGE (using array)

#include <stdio.h>
void main()
{
    int marks[5];
    int i = 0;
    int total_subs = 5;
    int maxmarkspersub;
    printf("Enter maximum marks per subject :");
    scanf("%d", &maxmarkspersub);
    int maxtotal = total_subs * maxmarkspersub;

    printf("Enter marks of 5 subjects\n");

    for (i = 0; i <= 4; i++)
    {
        printf("Enter the marks for subejct %d:", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Marks of subject %d are %d\n", i + 1, marks[i]);
    }

    int total = 0;

    for (i = 0; i <= 4; i++)
        total = total + marks[i];
    printf("Total marks are %d out of %d\n", total, maxtotal);

    float percentage = ((float)total / maxtotal) * 100;
    printf("The student has scored %f percentage ", percentage);
}
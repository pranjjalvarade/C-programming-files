//         SEARCH FOR A NUMBER IN THE ARRAY

#include<stdio.h>

void main (){
    int noe ;
    printf("Enter the number of elements you want in the array:");
    scanf("%d", &noe);

    int i=0;
    int nos[noe];
    for (i =0; i < noe ; i++)
    scanf("%d", &nos[i] );

    // Read the number which is to be searched
    int s_no;
    printf("Enter the number you want to search:");
    scanf("%d", &s_no);
    
    for (i=0 ; i < noe ; i++)
    {
        //   The search begins here
        if (nos[i]== s_no)
        printf("The number %d found in the array after %d iterations", s_no , i+1);
        else {
            if (i== noe)
            printf("Number not found in the array");
            break;
        }
    }

}
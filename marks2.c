#include<stdio.h>
void main (){
    float m1,m2,m3,m4,m5,per;
    int maxMarksPerSub = 100;
    int totalSubs = 5;
    printf ("Enter marks of 5 subjects here : ");
    scanf ("\n %f \n %f \n %f \n %f \n %f", &m1,&m2,&m3,&m4,&m5);
    
    int maxMarks = maxMarksPerSub * totalSubs;
    per = ((m1 + m2 + m3 + m4 + m5)/maxMarks) * 100 ;
    printf ("the percentage obtained = %f \n ", per) ;
    if (per>=80)
    printf("s grade");
    else 
    if (per>=70)
    printf("A grade");
    else 
    if (per>=60)
    printf ("B grade");
    else 
    if (per>=50)
    printf("C grade");
    else
    printf ("fail");
}
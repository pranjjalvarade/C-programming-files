#include<stdio.h>
void main (){
    float m1,m2,m3,m4,m5,per;
    printf ("Enter marks of 5 subjects here : ");
    scanf ("\n %f \n %f \n %f \n %f \n %f", &m1,&m2,&m3,&m4,&m5);
    int maxMarksPerSub = 100;
    int totalSubs = 5;
    int maxMarks = maxMarksPerSub * totalSubs;
    printf("max marks = %d\n",maxMarks);
    per = ((m1 + m2 + m3 + m4 + m5)/maxMarks) * 100 ;
    printf ("the percentage obtained = %f \n ", per) ;
    if (per < 50)
    printf ("Fail");
    if (per >=50 && per <60)
    printf("C grade");
    if (per>=60 && per<70)
    printf ("B grade");
    if (per >=70 && per <80)
    printf ("A grade");
    if (per >= 80)
    printf("S grade");
    
}
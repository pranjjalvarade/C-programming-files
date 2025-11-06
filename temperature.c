//        CONVERTS FAHRENHEIT TO CELSUIS


#include<stdio.h>
#include<math.h>

int main (){
    float temp_c , temp_f ;
    printf("Enter the temperature in degree Fahrenheit :");
    scanf("%f", &temp_f);

    temp_c = (5.0 / 9) *(temp_f - 32) ;

    printf("The temperature in degree Celsius is %.2f", temp_c);

    return 0;
}
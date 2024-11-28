//A-4

//  PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
#include <stdio.h>
int main()
{
    float b,a;
    printf("Enter temperature in Fahrenheit");
    scanf("%f",&b);
    a=((b-32)*5)/9;
    printf("Temperature in centigrade=%f",a);
    
}
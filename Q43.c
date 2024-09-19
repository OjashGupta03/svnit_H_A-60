//A-43
//CALCULATE THE COMMISSION FOR A SALES
#include<stdio.h>
int main()
{
    float sales,a;
    printf("Enter sales amount:");
    scanf("%f",&sales);
    if (sales<=500)
    {
        a=sales*5/100;
    }
    else if((sales>500)&&(sales<=2000))
    {
        a=((sales-500)*(0.1))+35;
    }
    else if ((sales>2000)&&(sales<=5000))
    {
        a=((sales-2000)*12/100)+185;
    }
    else
    {
        a=sales*(12.5/100);
    }
    printf("Total commission=%.3f",a);
}
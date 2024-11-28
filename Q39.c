//A-39

#include<stdio.h>
int main()
{
    

    float a,b=1,c=0,i=1;
    printf("Enter n value=");
    scanf("%f",&a);
    while(i<=a)             
    {
       b=b*i;
       c=c+(i/b);
       i+=1;
    }
    printf("%f",c);


}
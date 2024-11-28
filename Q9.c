//A-9

#include <stdio.h>

int main() 
{
    int a,b,c,d;
    printf("enter time");
    printf("in hours-");
    scanf("%d",&a);
    printf("in minutes-");
    scanf("%d",&b);
    printf("in sec-");
    scanf("%d",&c);
    d=(a*60*60)+(b*60)+c;
    printf("time in sec=%d",d);
}
//A-30

// reverse of a given number
#include<stdio.h>
int main()
{
    int a,b,s=0,q;
    printf("Enter any number:");
    scanf("%d",&a);
    b=a;
    while (a!=0)
    {
        q=a%10;
        s=(s*10)+q;
        a=a/10;
    }
    printf("Reverse of %d is %d",b,s);
    
}
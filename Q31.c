//A-31

//  sum of individual digits of nth digit number
#include<stdio.h>
int main()
{
    int a,s=0,q;
    printf("Enter any number:");
    scanf("%d",&a);
    
    while (a!=0)
    {
        q=a%10;
        s=s+q;
        a=a/10;
    }
    printf("sum=%d",s);
    
}
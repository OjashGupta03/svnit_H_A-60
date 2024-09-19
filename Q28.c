//A-28


#include<stdio.h>
int main()
{
    
    printf("enter the number to be checked");
    int b=0,c,d,e,sum=0,f;
    scanf("%d",&c);
    while(c!=0)
    {
        int f=c;
        f=f/10;
        b+=1;
    }
    
    e=c;
   
    while (c!=0)
    {
        d=c%10;
        f=d;
        c=c/10;
        for (int i=1;i<=b;i++)
        {
            f=f*d;
        }
        sum=sum+f; 

    }
    if (sum==e)
        printf("number is armstrong");
    else 
        printf("not armstrong");

}

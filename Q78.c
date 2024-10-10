#include<stdio.h>
#include<math.h>
int armstrong(int c);
int armstrong(int c)
{
    int b=0,d,e,sum=0;
    int f=c;
    while(f!=0)
    {
        f=f/10;
        b+=1;
    }
    e=c;

    while (c!=0)
    {
        d=c%10;
        f=1;
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

int main()
{
    int a;
    printf("number to be checked armstrong or not:");
    scanf("%d",&a);
    armstrong(a);
}
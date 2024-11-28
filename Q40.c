//A-40

#include<stdio.h>
int main()
{
    int a=0,b=0,i=1;
    while (a>=0)
    {
        printf("Enter number %d=",i);
        b=b+a;
        scanf("%d",&a);
        i=i+1;
    }
    b=b+a;
    printf("\nsum = %d",b);
}
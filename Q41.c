//A-41

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any nyumber:\n");
    scanf("%d",&a);
    printf("%d=",a);
    for (int i=1;i<a;i++)
    {
        b=a%i;
        if (b==0)
           printf("%d,",i);
    }
    printf("%d.",a);
}
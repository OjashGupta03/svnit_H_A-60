//A-17

// PROGRAM TO READ THREE NOS AND PRINT MAX
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the nos:\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("max nos=%d",a);
    }
    else if (b>c)
        printf("max nos=%d",b);
    else 
        printf("max nos=%d",c);
}
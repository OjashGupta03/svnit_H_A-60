//A-25

// Print Table of Number (A-25)
#include<stdio.h>
int main()
{
    int a,i=1,b;
    printf("Enter Number of which table need to be printed:");
    scanf("%d",&a);
    while (i<=10)
    {
        b=a*i;
        printf("%d x %d = %d \n",a,i,b);
        i=i+1;
    }
    
    
}

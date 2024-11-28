//A-26


//sum of all odd and even number between 1 to n
#include<stdio.h>
int main()
{
    int n,i=1,q=0,z=0;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    while (i<=n)
    {
        q=q+i;
        i=i+2;
    }
    i=0;
    while (i<=n)
    {
        z=z+i;
        i=i+2;
    }
    printf("sum of all odd values=%d\n",q);
    printf("sum of all even values=%d\n",z);
    
}
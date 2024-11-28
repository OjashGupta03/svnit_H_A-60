//A-22


// PROGRAM TO CALCULATE FACTORIAL OF ANY NUMBER
#include<stdio.h>
int main()
{
    printf("Enter number of which we find factorial:\n");
    int a,d=1;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        d=d*i;
    }
    printf("The factorial of %d is %d",a,d);
}

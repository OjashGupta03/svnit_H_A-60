#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Number of number to read:");
    scanf("%d",&n);
    int a[n];
    printf("enter number for a array \n");
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers:");
        scanf("%d",&a[i]);
    }
    printf("a array is \n");
    for (int i=0;i<n;i++)
    {
        printf("number %d=%d \n",i+1,a[i]);
    }

    for (int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("sum of all terms=%d",sum);
}
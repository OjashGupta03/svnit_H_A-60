#include<stdio.h>
int main()
{
    int n,sum=0,O_count=0,E_count=0;
    printf("Number of number to read:");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("enter number for a array \n");
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter number for b array \n");
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&b[i]);
    }
    printf("a array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\nb array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",b[i]);
    }
    for (int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nc array is \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",c[i]);
    }
}

#include<stdio.h>
int main()
{
    int n,sum=0,O_count=0,E_count=0;
    printf("Number of number to read:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("a array is \n");
    for (int i=0;i<n;i++)
    {
        printf("number %d=%d \n",i+1,a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]%2==1)
        {
            O_count+=1;
        }
        else
        {
            E_count+=1;
        }
    }
    printf("Total number of odd terms=%d\n",O_count);
    printf("Total number of even terms=%d",E_count);
}
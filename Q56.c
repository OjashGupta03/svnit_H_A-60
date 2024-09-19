#include<stdio.h>
int main()
{
    int n,zero=0,pos_count=0,neg_count=0;
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
        if (a[i]>0)
        {
            pos_count+=1;
        }
        else if (a[i]<0)
        {
            neg_count+=1;
        }
        else
        {zero+=1;}
    }
    printf("Total number of positive terms=%d\n",pos_count);
    printf("Total number of negative terms=%d\n",neg_count);
    printf("Total number of zero terms=%d",zero);
}
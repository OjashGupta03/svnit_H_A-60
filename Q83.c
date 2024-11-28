#include<stdio.h>
int getarray();
int getarray()

{
    int n;
    printf("enter number of values in array:\n");
    scanf("%d",&n);
    int a[n];
    printf("ENter array\n");
    for (int i=0;i<n;i++)
    {
        printf("Number %d=",i+1);
        scanf("%d",&a[i]);
    }
    int d=0;
    int max=a[0],max_index;
    for (int i=1;i<n;i++)
    {
        if(max<a[i])
        {
           max=a[i];
           d=i;
        }
        else 
            continue;
    }
    printf("value value of array is :number %d=%d",d+1,max);
}
int main()
{
    getarray();
}

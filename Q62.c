// reverse the array
#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)           //declaration and initialization of array
    {
        printf("enter number %d= ",i+1);
        scanf("%d",&a[i]);
    }
    printf("array A\n");
    for (int i=0;i<n;i++)            //printing array before reversing
    {   printf("values=%d\n",a[i]);   }
    //reversing array 
    for (int i=0;i<n/2;i++)
    {
        c=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    printf("reversed array:\n");
    for (int i=0;i<n;i++)            //printing array before reversing
    {   printf("values=%d\n",a[i]);   }
}
    
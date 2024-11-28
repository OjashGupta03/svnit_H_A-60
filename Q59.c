// reverse the array
#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0;i<n;i++)           //declaration and initialization of array A
    {
        printf("enter number %d= ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)           //declaration and initialization of array B
    {
        printf("enter number %d= ",i+1);
        scanf("%d",&b[i]);
    }
    printf("array A\n");
    for (int i=0;i<n;i++)            //printing array before reversing
    {   printf("%d \t",a[i]);   }
    printf("\n");
    
    
    printf("\narray B\n");
    for (int i=0;i<n;i++)            
    {   printf("%d \t",a[i]);   }
    
    
    for (int i=0;i<n;i++)
    {
        c=a[i];
        a[i]=b[i];
        b[i]=c;
    }
    printf("\nModified array A:\n");
    for (int i=0;i<n;i++)            
    {   printf("%d \t",a[i]);   }
    printf("\nModified array B:\n");
    for (int i=0;i<n;i++)           
    {   printf("%d \t",b[i]);   }
}
    
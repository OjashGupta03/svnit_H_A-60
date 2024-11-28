#include <stdio.h>
int main()
{
   int n,max,min;
   printf("Enter number of rows and columns of matrix:");
   scanf("%d",&n);
   int a[n][n];
   printf("enter element of matrix \n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {scanf("%d",&a[i][j]);}
   }
   max=min=a[0][0];
   printf("\n\n");
   printf("     Matrix\n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
   }
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            if (max<a[i][j])
            {max=a[i][j];}
            if (min>a[i][j])
            {min=a[i][j];}
        }
   }
   printf("max element =%d\n",max);
   printf("min=%d",min);
}


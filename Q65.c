#include <stdio.h>
int main()
{
   int n,c,sum=0;
   printf("Enter number of rows of matrix:");
   scanf("%d",&n);
   
   int a[n][n];
   printf("enter matrix \n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {scanf("%d",&a[i][j]);}
   }
   printf("\n\n");
   printf(" Matrix \n");
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
        for (int j=0;j<=i;j++)
        {
            c=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=c;
        }
   }
   printf("Transpose of matrix \n");
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
   }
}
   
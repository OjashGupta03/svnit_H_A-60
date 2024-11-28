// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>i;j--)
        {   printf(" ");    }
        for(int z=1;z<=2*i-1;z++)
        {   printf("*");    }
        printf("\n");
    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=n-i;j++)
        {   printf(" ");   }
        for (int z=2*i-1;z>0;z--)
        {   printf("*");    }
        printf("\n");
    }
}
    
    
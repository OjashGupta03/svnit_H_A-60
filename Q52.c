//pattern to print
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=5;j>i;j--)
        {
            printf(" ");
        }
        for (int z=1;z<=i;z++)
        {
            printf("%d",z);
        }
        for (int z=i-1;z>=1;z--)
        {
            printf("%d",z);
        }
        printf("\n");
    }
}
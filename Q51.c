#include<stdio.h>
int main()
{
    int a=1,b=0;
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if (j==i)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",b);
            }
        }
        printf("\n");
    }
}
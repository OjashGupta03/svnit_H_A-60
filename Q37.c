//A-37


#include<stdio.h>
int main()
{
    int N,i=2;
    printf("Enter a even number:");
    scanf("%d",&N);
    while (i<N)
    {
        printf("%d,",i);
        i=i+2;
    }
    printf("%d.",i);
    
}
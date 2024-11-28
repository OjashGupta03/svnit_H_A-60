//A-38


#include<stdio.h>
int main()
{
    int N,i=1,sum=0;
    printf("Enter a number:");
    scanf("%d",&N);
    while (i<N)
    {
        printf("%d,",(i*i));
        i=i+1;
    }
    printf("%d.",(i*i));
    
}
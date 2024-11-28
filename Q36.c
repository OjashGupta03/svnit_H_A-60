//A-36


//  sum of individual digits of nth digit number
#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter a odd number:");
    scanf("%d",&N);
    while (i<N)
    {
        printf("%d,",i);
        i=i+2;
    }
    printf("%d.",i);
    
}

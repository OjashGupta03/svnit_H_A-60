// USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    a=(int*)malloc(10*sizeof(int));
    printf("Enter element of array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    int c=0,d;
    for(int i=1;i<10;i++)
    {
        if(*(a+c)<*(a+i))
            c=i;
    }
    printf("Biggest number from list =%d",*(a+c));
}
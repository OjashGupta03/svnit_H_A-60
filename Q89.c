/*WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b;
    a=(int*)malloc(10*sizeof(int));
    b=(int*)malloc(10*sizeof(int));
    printf("enter number of element in array:");
    int N;
    scanf("%d",&N);
    printf("Enter element of array:\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<N;i++)
    {
        *(b+i)=*(a+N-1-i);
    }
    for(int i=0;i<N;i++)
    {
        printf("%d\t",*(b+i));
    }
    free(a);
    free(b);
}
//progream to enter element of one array to another array using pointers#include<stdio.h>
int main()
{
    int a[10],b[10];
    int *ptr,*btr;
    ptr=a;
    btr=b;
    printf("Enter element of array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
    }
    int *c=btr;
    for (int i=0;i<10;i++)
    {
        *(btr++)=*(ptr++);
    }
    btr=c;
    printf("array a is copied in b:");
    for (int i=0;i<10;i++)
    {
        printf("%d\t",*(btr++));
    }
}
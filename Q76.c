#include<stdio.h>
void check(int a);
void check(int a)
{
    if (a%2==0)
        printf("number %d is even",a);
    else 
        printf("number %d is odd",a);
}
int main()
{
    int a;
    printf("enter number to be checked:");
    scanf("%d",&a);
    check(a);
}
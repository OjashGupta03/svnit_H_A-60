#include<stdio.h>
void check_pal(int a);
void check_pal(int a)
{
    int q,s=0,b=a;
    while (a!=0)
    {
        q=a%10;
        s=(s*10)+q;
        a=a/10;
    }
    if (b==s)
       printf("Number is palindrome");
    else 
       printf("Number is not palindrome");
}

int main()
{
    int a;
    printf("Enter number to be checked palindrome or not:");
    scanf("%d",&a);
    check_pal(a);
}
//A-29

// check whether number is palindrome or not
#include<stdio.h>
int main()
{
    int a,b,s=0,q;
    printf("Enter any number:");
    scanf("%d",&a);
    b=a;
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
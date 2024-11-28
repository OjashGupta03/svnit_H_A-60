//A-6

// PROGRAM TO SWAP TwO VARIABLES without USING THIRD VARIABLE
//method-1
#include <stdio.h>
int main()
{ 
    int a,b;
    printf("enter value of a and b:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\nb=%d",a,b);
}
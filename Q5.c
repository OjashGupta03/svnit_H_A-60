//A-5

// PROGRAM TO SWAP TwO VARIABLES USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b:\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\nb=%d",a,b);
    
}

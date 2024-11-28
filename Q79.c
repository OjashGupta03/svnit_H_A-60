#include<stdio.h>
int exchange();
int exchange()
{
    int c,X,Y;
    printf("Enter value of X and Y");
    scanf("%d%d",&X,&Y);
    c=X;
    X=Y;
    Y=c;
    printf("Enter value of X=%d and Y=%d",X,Y);
}
int main()
{
    exchange();   
}
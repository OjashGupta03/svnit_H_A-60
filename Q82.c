#include<stdio.h>
int fact(int N);
int nCr(int n,int r);
int fact(int N)
{
    int d=1;
    for (int i=1;i<=N;i++)
    {
        d=d*i;
    }
    return d;
    

}
int nCr(int n,int r)
{
    int b=fact(n)/(fact(r)*fact(n-r));
    return (b);
}
int main()
{
    int n,r,b;
    printf("Enter value of n and r respectively:\n");
    scanf("%d%d",&n,&r);
    b=nCr(n,r);
    printf("nCr=%d",b);
}

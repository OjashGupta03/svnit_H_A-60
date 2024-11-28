/*fibonacci series using function*/
#include<stdio.h>
int fibo(int N);
int main()
{   
    int a;
    printf("Enter N");
    scanf("%d",&a);
    fibo(a);
}
int fibo(int N)
{
    int sum;
    static int a=0,b=0;
    if(N>0)
    {
    if (a==0)
    {
        printf("%d\t",a++);
        printf("%d\t",a);
        fibo(N-2);
    }
    else 
    {
        sum=a+b;
        b=a;
        a=sum;
        printf("%d\t",sum);
        fibo(N-1);
    }
    }
}


#include<stdio.h>
int check_prime(int a);
int main()
{   
    int a,b;
    printf("Enter number to be checked:");
    scanf("%d",&a);
    b=check_prime(a);
    printf("%d",b);
}
int check_prime(int a)
{
    int i=2,q=1;
    while ((q!=0)&&(i<a))
    {
        q=a%i;
        i++;
    }
    if (q==0)
        return 0;
    else 
        return 1;
}
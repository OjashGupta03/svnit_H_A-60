//A-42
// check whether number is prime or composite
#include<stdio.h>
int main()
{
    int a,i=2,q=1;
    printf("Enter number to be checked:");
    scanf("%d",&a);
    while ((q!=0)&&(i<a))
    {
        q=a%i;
        i=i+1;
    }
    if (q==0)
        printf("%d is a composite number",a);
    else 
        printf("%d is prime number",a);
}
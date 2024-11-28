//A-34

// fibonacci series
#include <stdio.h>

int main() {
    int n,sum=0,q=1,c,i=1;
    scanf("%d",&c);
    printf("%d,",sum);
    while(i<=(c-2))
    {
       n=sum;
       sum=sum+q;
       q=n;
       i=i+1;
       printf("%d,",sum);
    }
    sum+=q;
    printf("%d.",sum);
}
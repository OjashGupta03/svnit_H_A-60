//A-24

#include<stdio.h>
int main()
{
   int x,n,Y;
   printf("Enter value of x=");
   scanf("%d",&x);
   printf("Enter value of n=");
   scanf("%d",&n);
   int b=n;
   switch(b)
   {
    case 1: Y=1+x;
     break;
    case 2: Y=1+(x/n);
     break;
    case 3:{
        int c=x;
        for (int i=1;i<n;i++)
        {
            x*=c;
        }
        Y=1+x;
    }
     break;
    default: Y=1+(n*x);
    
   }
   printf("Y=%d",Y);
}
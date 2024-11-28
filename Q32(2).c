//A-32

#include<stdio.h>
int main()
{
   int n,max=0,sec_max=1,c,i=1;
   printf("Enter number OF NUMBER to be checked:");
   scanf("%d",&n);
   printf("enter number %d:",i);
   scanf("%d",&c);
   max=sec_max=c;
   for (int i=2;i<=n;i++)
   {
        
        printf("enter number %d:",i);
        scanf("%d",&c);
        
        //now compare p,q,c and print max in a and second max in b
        if (max<c)
        {
            sec_max=max;
            max=c;
        }
        else if (sec_max<c)
        {
            sec_max=c;
        }
        else 
            continue;
    }
   printf("Max=%d\n\n",max);
   printf("second max=%d",sec_max);
}

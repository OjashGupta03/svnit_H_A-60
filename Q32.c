//A-32

#include<stdio.h>
int main()
{
   int n,a=0,b=1,c,i=1;
   printf("Enter number OF NUMBER to be checked:");
   scanf("%d",&n);
   printf("enter number %d:",i);
   scanf("%d",&c);
   a=b=c;
   for (int i=2;i<=n;i++)
   {
        int p,q;
        printf("enter number %d:",i);
        scanf("%d",&c);
        p=a;
        q=b;
        //now compare p,q,c and print max in a and second max in b
        if (p>q&&p>c)
        {
            a=p;
            if (q>c)
            {b=q;}
            else 
            {b=c;}
        }
        else if (q>p&&q>c)
        {
            a=q;
            if (p>c)
            {b=p;}
            else 
            {b=c;}
        }
        else 
        {
            a=c;
            if (p>q)
            {b=p;}
            else 
            {b=q;}
        }
        
   }
   printf("Max=%d\n\n",a);
   printf("second max=%d",b);
}

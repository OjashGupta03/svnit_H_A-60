#include<stdio.h>
int main()
{
    int max,min,n,num,i;
    printf("enter ");
    scanf("%d",&n);
    if (n<2)
    {
        printf("Enter at least 2 nos to compare and restart code if this statement is printed");
    }
    else
    {
      printf("Enter number %d:",i=1);
      scanf("%d",&num);  
      min=max=num;  
      for (i=2;i<=n;i++)
      {
        printf("Enter number %d:",i);
        scanf("%d",&num);
        
        if (num>max)
        {
            max=num;
        }
        else if (num<min)
        {
            min=num;
        }
      }
    
      if (max==min)
        {
            printf(" all same number is not allowed");
        }
      else 
        {
            printf("\n\nmax=%d\n\n",max);
            printf("min=%d\n",min);
        }
    }
}
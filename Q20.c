//A-20

#include<stdio.h>
int main()
{
    printf("enter 1 to add , 2 to subtract, 3 to multiply and 4 to divide\n");
    
    int a,b,c,d;
    scanf("%d",&c);
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    switch(c)
    {
       case 1: d=(a+b);
        break;
       case 2: d=(a-b);
        break;
       case 3: d=(a*b);
        break;
       case 4: d=(a/b);
        break;
       default :
         printf("invalid\n");
    }   
    if (d!=0)
    {printf("answer=%d",d);}

}


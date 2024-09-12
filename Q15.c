//A-15


#include <stdio.h>

int main() 
{
   float a,b,c,d,e,sum;
   printf("Enter marks of maths,physics,eng,CS,chemistry out of 100 respectively\n");
   scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
   sum=(a+b+c+d+e)/5;
   if (sum>=80&&sum<100)
      printf("A grade");
   else if (sum>=60&&sum<80)
      printf("B Grade");
   else if (sum>=40&&sum<60)
      printf("C grade");
   else
      printf("D grade");
   return 0;
}
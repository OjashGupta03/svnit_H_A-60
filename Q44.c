//A-44
#include<stdio.h>
int main()
{
   float a,b;
   printf("Enter number of units used:");
   scanf("%f",&a);
   if (a<=200)
   {
        b=(0.5)*a;
   }
   else if (a>200&&a<=400)
   {
        b=100+((a-200)*0.65);
   }
   else if (a>400&&a<=600)
   {
        b=230+((a-400)*0.80);
   }
   else
   {
        b=425+((a-600)*125);
   }
   printf("domestic cahrges=%.2f Rs",b);
}
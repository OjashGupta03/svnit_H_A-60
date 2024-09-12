//A-19

#include<stdio.h>
int main()
{
    char a;
    printf("Enter any Letter");
    scanf("%c",&a);
    int b=a,d;
    d=96<b&&b<123?b:96;
    if (d==96)
      printf("not small case");
    else 
      printf("it is small case character");
}
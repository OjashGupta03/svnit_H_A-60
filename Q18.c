//A-18
#include <stdio.h>

int main() 
{
  int a,b,c,d,e;
  printf("enter 3 numbers \n");
  scanf("%d%d%d",&a,&b,&c);
  d=a>b?a:b;
  e=d>c?d:c;
  printf("the max no=%d",e);
}

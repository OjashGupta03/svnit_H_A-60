//A-14



#include <stdio.h>

int main() 
{
  char c;
  int g;
  printf("enter any single character\n");
  scanf("%C",&c);
  printf("The ASCII value of %c is %d \n", c, c);
  g=c;
  
  if (g>=32&&g<=47)
      printf("special character");
  else if (g>=48&&g<=57)
      printf("a Digit");
  else if (g>=58&&g<=64)
      printf("special character");
  else if (g>=65&&g<=90)
      printf("a Capital letter");
  else if (g>=97&&g<=122)  
      printf("a small case letter");
  
}
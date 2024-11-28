//WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char st[100];
    char *a;
    printf("Enter string:");
    gets(st);
    a=st;
    int c1=0,c2=0;
    int i=0;
    while(*(a+i)!='\0')
    {
        c2++;
        if(*(a+(i++))!=' ')
            c1++;
        else 
            continue;
    }
    printf("LENGTH OF A GIVEN STRING INCLUDING SPACES=%d\n",c2);
    printf("LENGTH OF A GIVEN STRING EXCLUDING SPACES=%d",c1);
    free(a);
}
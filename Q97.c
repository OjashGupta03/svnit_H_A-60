#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *a=(char*)malloc(100*sizeof(char));
    gets(a);
    int i=0,count=0;
    while(*(a+i)!='\0')
    {
        switch(*(a+i))
        {   
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
        }
        i++;
    }
    printf("number of vowels in the string:%d",count);
}
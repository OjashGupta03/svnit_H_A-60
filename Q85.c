#include<stdio.h>
#include<ctype.h>
int check_V(char A);
int check_V(char A)
{
    char b;
    b=tolower(A);
    int d=0;
    switch(b)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': d=1;
            break; 
    }
    if (d==1)
        printf("it is vowel");
    else 
        printf("not a vowel");
}
int main()
{
    char a;
    scanf("%c",&a);
    check_V(a);
}
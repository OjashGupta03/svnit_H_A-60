//A-10
#include<stdio.h>
int main() 
{
    int M,P,C,E;
    float CM;
    printf("enter marks in maths(out of 200),physics(out of 200),Chemistry(out of 200),marks in entrance exam(out of 100) respectively");
    scanf("%d%d%d%d",&M,&P,&C,&E);
    CM=(M/2)+(P/2)+(C/2)+E;
    printf("cutoff marks=%f",CM);
}
//A-3

// PROGRAM TO CALCULATE GROSS SALARY
#include <stdio.h>
int main()
{
    float BS,HR,OA,G_S;
    printf("Enter Basic salary:");
    scanf("%f",&BS);
    printf("Enter HR:");
    scanf("%f",&HR);
    printf("Enter Other allowances:");
    scanf("%f",&OA);
    G_S=BS+HR+OA;
    printf("Gross salary=%f",G_S);
}

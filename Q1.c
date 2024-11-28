//A-1

#include <stdio.h>
int main() {
    // PROGRAM TO CALCULATE SIMPLE INTEREST
    float P,R,T,SI;
    printf("Enter Principal amount:");
    scanf("%f",&P);
    printf("Enter Rate of interest:");
    scanf("%f",&R);
    printf("Enter Time:");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("simple interest=%f",SI);
    return 0;
}

//A-2

// PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
#include <stdio.h>
int main()
{
    float P,C,M,E,CS,T_marks,PER;
    printf("Enter marks in physics:");
    scanf("%f",&P);
    printf("Enter marks in chemistry:");
    scanf("%f",&C);
    printf("Enter marks in maths:");
    scanf("%f",&M);
    printf("Enter marks in English:");
    scanf("%f",&E);
    printf("Enter marks in Computer science:");
    scanf("%f",&CS);
    T_marks=P+C+M+E+CS;
    PER=(T_marks/500)*100;
    printf("Percentage=%f",PER);
}
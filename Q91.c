// CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER
#include<stdio.h>
int main()
{
    int num;
    int *a=&num;
    printf("Enter the number:");
    scanf("%d",a);
    int b=(*a)*(*a);
    int c=(*a)*(*a)*(*a);
    printf("Square of %d is: %d\n",*a,b);
    printf("Cube of %d is: %d\n",*a,c);
}
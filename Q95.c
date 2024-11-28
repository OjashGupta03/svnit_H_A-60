//WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
//,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
//ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
//PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.

#include<stdio.h>
struct employee
{
    int ID;
    char name[100];
    float salary;
};
int main()
{
    printf("enter number of employee:");
    int n;
    scanf("%d",&n);
    struct employee a[n];
    struct employee *ptr;
    for(int i=0;i<n;i++)
    {
        ptr=&a[i];
        printf("enter employee number:");
        scanf("%d",&ptr->ID);
        printf("enter employee name:");
        scanf("%s",ptr->name);
        printf("enter employee basic pay:");
        scanf("%f",&ptr->salary);
    }
    for(int i=0;i<n;i++)
    {
        ptr=&a[i];
        printf("%d\t%s\t%0.2f\n",ptr->ID,ptr->name,ptr->salary);
    }


}

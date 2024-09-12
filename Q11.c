//A-11

//PROGRAM TO READ TOTAL SECOND AND CONVERT IT IN TO TIME
#include <stdio.h>
int main()
{ 
    int a,b,c,d;
    printf("Enter time in seconds:");
    scanf("%d",&a);
    b=a/(60*60);
    c=a%(60*60);
    d=c/60;
    a=c%60;
    printf("Hour=%d,minutes=%d,seconds=%d",b,d,a);
}

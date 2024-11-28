//A-8

#include <stdio.h>
#include<math.h>
int main()
{ 
    int time,a,b,c,e;
    printf("enter time taken to revolve in sec-");
    scanf("%d",&time);
    e=time/(24*3600);
    a=time%(24*60*60);
    b=a%(60*60);
    a=a/(60*60);
    b=b/60;
    c=b%(60);
    printf("days=%d\n",e);
    printf("hours=%d\n",a);
    printf("minutes=%d\n",b);
    printf("seconds=%d\n",c);
}
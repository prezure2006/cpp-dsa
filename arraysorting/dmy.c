// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int d,m,y ;
printf("\n enter number of days");
scanf("%d",&d);
y=d/365;
d = d % 365;
m= d/30;
d=d%30;
printf("\n %d year %d months %d days",y,m,d);

    return 0;
}
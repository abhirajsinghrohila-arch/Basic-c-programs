#include<stdio.h>

int main(){
    int d,y,m,r;
    printf("enter no of days");
    scanf("%d",&d);
    y=d/360;
    d=d%360;
    m=d/30;
    r=d%30;
    printf("\n equivalent time is %d year(s),%d months(s),%d day(s)\n",y,m,r);
    return 0;
}
#include<stdio.h>
int main(){
    int y;
    printf("enter year");
    scanf("%d",&y);
    if(y%4==0)
    {
        printf("year is a leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}
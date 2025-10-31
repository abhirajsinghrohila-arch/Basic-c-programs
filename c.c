#include<stdio.h>

int main(){
    float c,f;
    printf("enter temperature");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("temperature in fahreinheit is %.2f",f);
    return 0;
}
#include<stdio.h>
int main(){
    float w,h;
    printf("enter weight  and height");
    scanf("%f,%f",&w,&h);
     float BM =w/(h*h);
     printf("the bmi is %.2f",BM);
     return 0;
}
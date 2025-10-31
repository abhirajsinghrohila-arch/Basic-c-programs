#include<stdio.h>

int main(){
float l,b,area,p;

printf("enter length");
scanf("%f",&l);
printf("enter breadth");
scanf("%f",&b);
 area=l*b;
 printf("the area of rectangle is %.2f\n",area);
  p=2*(l*b);
  printf("the perimeter is %.2f\n",p);
  return 0;
}
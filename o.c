#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter value of x coordinates");
    scanf("%d,%d,%d",&x1,&x2,&x3);
    printf("enter value of y coordinates");
    scanf("%d,%d,%d",&y1,&y2,&y3);
   int a=(y2-y1)/(x2-x1);
   int b=(y3-y2)/(x3-x2);
   if (a==b)
   {
    printf("points are collinear");
   }
   else
   {
    printf("points are not collinear");
   }
   return 0;

}
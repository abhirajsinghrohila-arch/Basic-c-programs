#include<stdio.h>
int main(){
    int x,y;
    printf("enter no");
    scanf("%d",&x);
    printf("enter no");
    scanf("%d",&y);
    x>=y;
    x<=y;
    x==y;
    x!=y;
    x>y;
    x<y;
    printf("operation >=%d\n,operation<=%d\n,operation==%d\n,operation!=%d\n,operation>%d,operation<%d",x>=y,x<=y,x==y,x!=y,x>y,x<y);
    return 0;
}
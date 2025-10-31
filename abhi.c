#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("enter side");
    scanf("%d",&s1);
    printf("enter side");
    scanf("%d",&s2);
    printf("enter side");
    scanf("%d",&s3);
    
        if((s1+s2>s3)&&(s1+s3>s2)&&(s3+s2>s1))
        {
        printf("valid triangle");
    }
    if((s1==s2)&&(s2==s3))
    {
        printf("equivalent");
    }
    else if((s1==s2)||(s2==s3)||(s1==s3))
    {
        printf("isosceles");
    }
    else
    {
        printf("scalene");
    }
    return 0;
}
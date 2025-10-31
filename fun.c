#include<stdio.h>
int main()
{
    int start,end;
    printf("enter range");
    scanf("%d,%d",&start,&end);

    printf("the numbers between %d and %d:\n",start,end);
    for(int i=start;i<=end;i++)
    {
        if(ISPRIME(i)){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}
int ISPRIME(int num){
    if(num<=1)return 0;
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
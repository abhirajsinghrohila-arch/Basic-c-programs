#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,num,freq=0;

    printf("enter the no of elements(max 100)");
    scanf("%d",&n);

    if(n<1||n>100)
    {
        printf("please enter the number of elements between 1 and 100");
        return 0;
    }
    printf("enter %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the no to find its frequency");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            freq++;
        }
    }
    printf("the number %d appera %d time in  array.\n",num,freq);
    return 0;
}

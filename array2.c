#include<stdio.h>
int main()
{
    int arr[100];
    int n,i;
    int positive=0,negative=0,even=0,odd=0;

    printf("enter the number of elements(max 100):");
    scanf("%d",&n);

    if (n<1||n>100)
    {
        printf("please enter the valid no of elements between 1 and 100.\n");
        return 0;

    }
    printf("enter %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    if (arr[i]>0)
    {
        positive++;
    }
    else if(arr[i]<0)
    negative ++;
    if(arr[i]%2==0)
    even++;
    else
    odd++;
}
printf("\ncount of positveno:%d\n",positive);
printf("count of negative no:%d\n",negative);
printf("count of odd no:%d\n",odd);
printf("count of even no:%d\n",even);
return 0;
}
#include<stdio.h>
int main()
{
   int n,i,key,flag=0;
   printf("enter the no of elements");
   scanf("%d",&n);
   int arr[n];
   printf("enter %d elements: \n",n);
   for(i=0;i<n;i++)
   {
    if(arr[n]==key)
    {
        flag=1;
        break;
    }
   } 
   if (flag==1)
   {
    printf("element found at %d", i+1);
   }
   else
   {
    printf("key not found");
   }
   
}
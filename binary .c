#include<stdio.h>
int binarysearch(int arr[],int n,int key){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]< key)
        l=mid+1;
        else
         h=mid-1;
    }
    return -1;
}
int main()
{
    int n,key;
    printf("enter the no of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d sorted elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to searchL:");
    scanf("%d",&key);
    int result =binarysearch(arr,n,key);

    if(result == -1)
    printf("element not found.\n");
    else
    printf("element found at index %d.\n",result);

    return 0;
}

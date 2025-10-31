#include<stdio.h>
int main() {
    int v,n,p=0,neg=0,z=0;
    while(1)
    {
        printf("do you want to enter a number ,please enter the 1 for yes and 0 for no");
        scanf("%d",&v);
        if(v==1)
        {
            printf("please enter the no");
            scanf("%d",&n);

            if(n>0)
            {
                p=p+1;
            }
            else if(n<0)
            {
                neg=neg+1;
            }
            else 
            {
                z=z+1;
            }
        }
            else if (v==0)
            {
                break;
            }
            else
            printf("entered the wrong choice");

        }
    }

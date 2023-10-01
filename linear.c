#include<stdio.h>
void main()
{
    int a[10],n,ele,c=0,i;
    printf("ener number:");
    scanf("%d",&n);
    printf("enter elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements to search;");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("element found at postition:%d",i+1);
            c+=1;
            break;
            
        }
    }
    if(c==0){
     printf("element not found");
    }
}

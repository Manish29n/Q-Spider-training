#include <stdio.h>

int main()
{
    int n,i,k,j,t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<k;i++){
        t=arr[0];
        for(j=0;j<n-1;j++)
            arr[j]=arr[j+1];
        arr[n-1]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

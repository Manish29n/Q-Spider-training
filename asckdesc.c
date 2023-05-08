#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i,sum=0,k,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(arr[j]<arr[i]){
                arr[j]^=arr[i]^=arr[j]^=arr[i];
            }
        }
    }
    for(i=k;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                arr[j]^=arr[i]^=arr[j]^=arr[i];
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

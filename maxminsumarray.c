#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i,sum=0,max=INT_MIN,min=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d %d",sum-max,sum-min);
}

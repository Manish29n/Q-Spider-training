#include <stdio.h>

int main()
{
    int n,i,sum=0,j,k,s1,s2;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j)
            printf("%d ",arr[i]);
    }
}

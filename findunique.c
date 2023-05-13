#include <stdio.h>

int main()
{
    int n,i,sum=0,j,k,s1,s2;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        s1=0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                s1=1;
                break;
            }
        }
        if(s1==0){
            s2=0;
            for(k=i+1;k<n;k++){
                if(arr[i]==arr[k]){
                    s2=1;
                    break;
                }
            }
            if(s2==0)
                printf("%d ",arr[i]);
        }
    }
}

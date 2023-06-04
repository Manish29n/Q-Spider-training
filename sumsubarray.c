#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i,k,j,sum,s;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        s=arr[i];
        if(s==sum){
            printf("%d\n",arr[i]);
            break;
        }
        else{
            for(j=i+1;j<n;j++){
                s+=arr[j];
                if(s==sum){
                    while(i<=j){
                        printf("%d ",arr[i]);
                        i++;
                    }
                    return 0;
                }
            }
        }
    }
    printf("No sub array found");
}

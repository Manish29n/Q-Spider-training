#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i,k,j,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&sum);
    for(i=0;i<n-2;i++){
        for(j=1;j<n-1;j++){
            for(k=2;k<n;k++){
                if(a[i]+a[j]+a[k]==sum && i!=j && j!=k && k!=i){
                    printf("%d %d %d",a[i],a[j],a[k]);
                    return 0;
                }
            }
        }
    }
    printf("No Triplet\n");
}

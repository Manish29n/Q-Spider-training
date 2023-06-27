#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(a[i]<a[j])
                a[i]^=a[j]^=a[i]^=a[j];
        }
    }
    for(int i=1;i<=n/2;i+=2){
        temp=a[n-1];
        for(j=n-1;j>=i;j--)
            a[j]=a[j-1];
        a[i]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

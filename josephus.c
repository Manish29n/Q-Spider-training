#include <stdio.h>
int main()
{
    int n,k,t,i,s=0;
    scanf("%d%d",&n,&k);
    int arr[n],c=n;
    for(i=0;i<n;i++)
        arr[i]=i;
    while(c>1){
        t=k;
        while(t>1){
            s=(s+1)%n;
            if(arr[s]!=-1)
                t--;
        }
        arr[s]=-1;
        c--;
        while(arr[(s+1)%n]==-1){
            s=(s+1)%n;
        }
        s=(s+1)%n;
    }
    for(i=0;i<n;i++){
        if(arr[i]!=-1){
            printf("%d",i);
        }
    }
    return 0;
}

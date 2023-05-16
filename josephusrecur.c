#include <stdio.h>
int joseph(int n,int k){
    if(n==1)
        return 0;
    else
        return (joseph(n-1,k)+k)%n;
}
//w(n,k)=(w(n-1,k)+k)%n
int main()
{
    int n,k,j;
    scanf("%d%d",&n,&k);
    j=joseph(n,k);
    printf("%d",j);
    return 0;
}

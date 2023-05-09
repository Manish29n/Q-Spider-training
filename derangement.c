#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d[n+1];
    d[0]=1;
    d[1]=0;
    for(int i=2;i<=n;i++)
        d[i]=(i-1)*(d[i-1]+d[i-2]);
    printf("%d",d[n]);
}

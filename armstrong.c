#include <stdio.h>
#include <math.h>
int main()
{
    int n,c=0,t,s=0,r;
    scanf("%d",&n);
    t=n;
    while(n>0){
        n/=10;
        c++;
    }
    n=t;
    while(n>0){
        r=n%10;
        s=s+pow(r,c);
        n/=10;
    }
    (s==t)?printf("Armstrong"):printf("Not Armstrong");
}

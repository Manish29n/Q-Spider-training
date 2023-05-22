#include <stdio.h>

int main()
{
    int n,o=0,r;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        o=o*10+r;
        n/=10;
    }
    printf("%d",o);
}

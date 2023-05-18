#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n,i,fib1=1,fib2=1,temp;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(i==n)
            printf("%d ",fib2);
        temp=fib2;
        fib2=fib2+fib1;
        fib1=temp;
    }
}

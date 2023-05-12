#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n,i,fib1=1,fib2=1,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1)
            printf("%d ",fib1);
        else if(i==2)
            printf("%d ",fib2);
        else{
            temp=fib2;
            fib2=fib2+fib1;
            fib1=temp;
            printf("%d ",fib2);
        }
    }
}

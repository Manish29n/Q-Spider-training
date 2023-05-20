#include <stdio.h>
#include <stdbool.h>
bool Prime(int x){
    int i;
    for(i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n,x,i;
    scanf("%d%d",&x,&n);
    for(int i=x;i<=n;i++){
        if(Prime(i))
            printf("%d\n",i);
    }
}

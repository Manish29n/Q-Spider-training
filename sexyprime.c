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
    int n,i;
    scanf("%d",&n);
    for(int i=2;i<=n-6;i++){
        if(Prime(i) && Prime(i+6))
            printf("%d %d\n",i,i+6);
    }
}

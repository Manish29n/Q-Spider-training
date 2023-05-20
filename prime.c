#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            printf("Not Prime\n");
            return 0;
        }
    }
    printf("Prime\n");
}

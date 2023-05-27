#include <stdio.h>
void SievesPrime(int n){
    int primes[n+1],i,j;
    for(i=0;i<=n;i++)
        primes[i]=0;
    for(i=2;i*1<=n;i++){
        if(primes[i]==0){
            for(j=i*i;j<=n;j+=i){
                primes[j]=1;
            }
        }
    }
    for(i=2;i<=n;i++)
        if(primes[i]==0)
            printf("%d ",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    SievesPrime(n);
}

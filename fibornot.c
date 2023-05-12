#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    (sqrt(5*n*n-4)==(int)sqrt(5*n*n-4) || sqrt(5*n*n+4)==(int)sqrt(5*n*n+4))?printf("Fibonacci"):printf("Not Fibonacci");
}

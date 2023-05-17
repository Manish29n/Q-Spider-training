#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    (n%9==0)?printf("%d",9):printf("%d",n%9);
}

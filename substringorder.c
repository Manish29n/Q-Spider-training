#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    scanf("%[^\n]s",p);
    int i,j,k,l=0,n;
    for(i=0;p[i];i++)
        l++;
    for(i=0;i<l;i++){
        n=0;
        while(n!=l-i){
            for(j=n;j<=n+i;j++){
                printf("%c",p[j]);
            }
            printf("\n");
            n++;
        }
    }
    return 0;
}
